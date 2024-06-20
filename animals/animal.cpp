#include "animal.hpp"
#include <iostream>
#include <string>

Animal::Animal(){}

Animal::Animal(std::string name, std::string spieces, std::string group, std::string food, std::string sex,
                int age, int years_in_zoo, int weight, int height,
                int num, bool needs_warm_shelter, bool vaccinated, bool had_illness, bool fertile){
    this->set_name(name);
    this->set_spieces(spieces);
    this->set_animal_group(group);
    this->set_food(food);
    this->set_sex(sex);
    this->set_age(age);
    this->set_years_in_zoo(years_in_zoo);
    this->set_weight(weight);
    this->set_height(height);
    this->set_cage(num);
    this->set_warm_shelter(needs_warm_shelter);
    this->set_vaccinated(vaccinated);
    this->set_illness(had_illness);
    this->set_fertile(fertile);
}

Animal::~Animal(){}

void Animal::set_name(std::string name) {
    this->name = name;
}

void Animal::set_spieces(std::string spieces) {
    this->spieces = spieces;
}

void Animal::set_animal_group(std::string name) {
    this->animal_group = name;
}

void Animal::set_sex(std::string sex) {
    this->sex = sex;
}

void Animal::set_age(int age) {
    this->age = age;
}

void Animal::set_years_in_zoo(int years) {
    this->years_in_zoo = years;
}

void Animal::set_weight(int weight) {
    this->weight = weight;
}

void Animal::set_height(int height) {
    this->height = height;
}

void Animal::set_cage(int num) {
    this->cage = num;
}

void Animal::set_warm_shelter(bool needs_warm_shelter) {
    this->needs_warm_shelter = needs_warm_shelter;
}

void Animal::set_vaccinated(bool vaccinated) {
    this->vaccinated = vaccinated;
}

void Animal::set_illness(bool had_illness) {
    this->had_illness = had_illness;
}

void Animal::set_food(std::string food) {
    this->food = food;
}

void Animal::set_fertile(bool fertile) {
    this->fertile = fertile;
}

std::string Animal::get_name(void) {
    return this->name;
}

std::string Animal::get_spieces(void) {
    return this->spieces;
}

std::string Animal::get_animal_group(void) {
    return this->animal_group;
}

std::string Animal::get_sex(void) {
    return this->sex;
}

int Animal::get_age(void) {
    return this->age;
}

int Animal::get_years_in_zoo(void) {
    return this->years_in_zoo;
}

int Animal::get_weight(void) {
    return this->weight;
}

int Animal::get_height(void) {
    return this->height;
}

int Animal::get_cage(void) {
    return this->cage;
}

bool Animal::get_warm_shelter(void) {
    return this->needs_warm_shelter;
}

bool Animal::get_vaccinated(void) {
    return this->vaccinated;
}

bool Animal::get_illness(void) {
    return this->had_illness;
}

std::string Animal::get_food(void) {
    return this->food;
}

bool Animal::get_fertile(void) {
    return this->fertile;
}

void Animal::display(void) {
    std::cout   << " _____________________________________________________________" << std::endl
                << "| Name: " << this->get_name() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Age: " << this->get_age() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Sex: " << this->get_sex() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Food: " << this->get_food() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Spieces: " << this->get_spieces() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Group: " << this->get_animal_group() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Years in zoo: " << this->get_years_in_zoo() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Weight: " << this->get_weight() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Height: " << this->get_height() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Cage: " << this->get_cage() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Warm shelter: " << this->get_warm_shelter() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Vaccinated: " << this->get_vaccinated() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Illness: " << this->get_illness() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Fertile: " << this->get_fertile() << std::endl
                << "|_____________________________________________________________" << std::endl;
}