#pragma once
#include "../employee/employee.hpp"
#include "../animals/animal.hpp"
#include <string>
#include <vector>

void display_employee_by_sex(std::vector<Employee> &employee, std::string pattern);
void display_employee_by_age(std::vector<Employee> &employee);
void display_employee_by_salary(std::vector<Employee> &employee);
void display_sorted_employee(std::vector<Employee> &employee);
void display_employee_by_date(std::vector<Employee> &employee);
void display_responsibility_by_spieces(std::vector<Employee> &employee, std::string pattern);
void display_responsibility_by_animal(std::vector<Employee> &employee, std::string pattern);
void display_employee_by_animal_period(std::vector<Employee> &employee, std::vector<Animal> &animals);