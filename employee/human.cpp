#include "human.hpp"

Human::Human(){};

Human::Human(std::string first_name, std::string last_name,
                std::string sex, int age) {
    set_first_name(first_name);
    set_last_name(last_name);
    set_sex(sex);
    set_age(age);
}

Human::~Human(void){};

void Human::set_first_name(std::string first_name) {
    this->first_name = first_name;
}

void Human::set_last_name(std::string last_name) {
    this->last_name = last_name;
}

void Human::set_sex(std::string sex) {
    this->sex = sex;
}

void Human::set_age(int age) {
    this->age = age;
}

std::string Human::get_first_name(void) {
    return this->first_name;
}

std::string Human::get_last_name(void) {
    return this->last_name;
}

std::string Human::get_sex(void) {
    return this->sex;
}

int Human::get_age(void) {
    return this->age;
}