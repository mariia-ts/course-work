#include "employee.hpp"
#include <iostream>
#include <string>

Employee::Employee(){}

Employee::Employee(std::string first_name, std::string last_name,
                std::string sex, int age, int years, double salary,
                std::string spieces, std::string animal) {
    set_first_name(first_name);
    set_last_name(last_name);
    set_sex(sex);
    set_age(age);
    set_years(years);
    set_salary(salary);
    set_responsib_spieces(spieces);
    set_responsib_animal(animal);
}

Employee::~Employee(){}

void Employee::set_years(int years) {
    this->years = years;
}

void Employee::set_salary(double salary) {
    this->salary = salary;
}

void Employee::set_responsib_spieces(std::string spieces) {
    this->responsib_spieces = spieces;
}


void Employee::set_responsib_animal(std::string animal) {
    this->responsib_animal = animal;
}

int Employee::get_years(void) {
    return this->years;
}

double Employee::get_salary(void) {
    return this->salary;
}

std::string Employee::get_responsib_spieces(void) {
    return this->responsib_spieces;
}

std::string Employee::get_responsib_animal(void) {
    return this->responsib_animal;
}

void Employee::display(void) {
    std::cout   << " _____________________________________________________________" << std::endl
                << "| Name & surname: " << this->get_first_name() << ' ' << this->get_last_name() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Age: " << this->get_age() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Sex: " << this->get_sex() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Salary: " << this->get_salary() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Duration of employment(years): " << this->get_years() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Responsible for spieces: " << this->get_responsib_spieces() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Responsible for animals: " << this->get_responsib_animal() << std::endl
                << "|_____________________________________________________________" << std::endl;
}

Employee& Employee::operator=(Employee& other) {
    if(this != &other) {
        this->set_first_name(other.get_first_name());
        this->set_last_name(other.get_last_name());
        this->set_sex(other.get_sex());
        this->set_age(other.get_age());
        this->set_years(other.get_years());
        this->set_salary(other.get_salary());
    }
    return *this;
}