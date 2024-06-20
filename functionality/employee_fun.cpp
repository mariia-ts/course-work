#include "employee_fun.hpp"
#include <iostream>
#include <string>
#include <vector>

void display_sorted_employee(std::vector<Employee> &employee) {
    int counter = 0;

    for(Employee &emp : employee) {
        emp.display();
        counter++;
    }
    std::cout << "| >>> " << counter << " employees in total." << std::endl;
}

void display_employee_by_sex(std::vector<Employee> &employee, std::string pattern) {
    int counter = 0;
    for(Employee &emp : employee) {
        if(emp.get_sex() == pattern) {
            emp.display();
            counter++;
        }
    }
    std::cout << "| >>> " << counter << " employees in total." << std::endl;
}

void display_employee_by_age(std::vector<Employee> &employee) {
    Employee temp;
    for(int i = 0; i < employee.size(); i++) {
        for(int j = i + 1; j < employee.size(); j++) {
            if(employee[j].get_age() > employee[i].get_age()) {
                temp = employee[j];
                employee[j] = employee[i];
                employee[i] = temp;
            }
        }
    }
    
    display_sorted_employee(employee);
}

void display_employee_by_salary(std::vector<Employee> &employee) {
    Employee temp;
    for(int i = 0; i < employee.size(); i++) {
        for(int j = i + 1; j < employee.size(); j++) {
            if(employee[j].get_salary() > employee[i].get_salary()) {
                temp = employee[j];
                employee[j] = employee[i];
                employee[i] = temp;
            }
        }
    }

    display_sorted_employee(employee);
}

void display_employee_by_date(std::vector<Employee> &employee) {
    Employee temp;
    for(int i = 0; i < employee.size(); i++) {
        for(int j = i + 1; j < employee.size(); j++) {
            if(employee[j].get_years() > employee[i].get_years()) {
                temp = employee[j];
                employee[j] = employee[i];
                employee[i] = temp;
            }
        }
    }

    display_sorted_employee(employee);
}

void display_responsibility_by_spieces(std::vector<Employee> &employee, std::string pattern) {
    int counter = 0;
    for(Employee &emp : employee) {
        if(emp.get_responsib_spieces() == pattern) {
            emp.display();
            counter++;
        }
    }
    std::cout << "| >>> " << counter << " employees in total." << std::endl;
}

void display_responsibility_by_animal(std::vector<Employee> &employee, std::string pattern) {
    int counter = 0;
    for(Employee &emp : employee) {
        if(emp.get_responsib_animal() == pattern) {
            emp.display();
            counter++;
        }
    }
    std::cout << "| >>> " << counter << " employees in total." << std::endl;
}

void display_employee_by_animal_period(std::vector<Employee>& employee, std::vector<Animal>& animals) {
    Employee temp;
    for (int i = 0; i < employee.size(); ++i) {
        for (int j = i + 1; j < employee.size(); ++j) {
            if (animals[j].get_years_in_zoo() > animals[i].get_years_in_zoo()) {
                if (employee[i].get_responsib_animal() == animals[i].get_animal_group()) {
                    temp = employee[i];
                    employee[i] = employee[j];
                    employee[j] = temp;
                }
            }
        }
    }

    display_sorted_employee(employee);
}