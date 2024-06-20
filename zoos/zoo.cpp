#include "zoo.hpp"
#include <iostream>

Zoo::Zoo(std::string name, int predators_exchanged, int herbivores_exchanged) {
    set_name(name);
    set_predators_exchanged(predators_exchanged);
    set_herbivores_exchanged(herbivores_exchanged);
}

void Zoo::set_name(std::string name) {
    this->name = name;
}

void Zoo::set_predators_exchanged(int predators_exchanged) {
    this->predators_exchanged = predators_exchanged;
}

void Zoo::set_herbivores_exchanged(int herbivores_exchanged) {
    this->herbivores_exchanged = herbivores_exchanged;
}

std::string Zoo::get_name(void) {
    return this->name;
}

int Zoo::get_predators_exchanged(void) {
    return this->predators_exchanged;
}

int Zoo::get_herbivores_exchanged(void){
    return this->herbivores_exchanged;
}

void Zoo::display(void) {
    std::cout   << " _____________________________________________________________" << std::endl
                << "| Name: " << this->get_name() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Age: " << this->get_predators_exchanged() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Sex: " << this->get_herbivores_exchanged() << std::endl
                << "|_____________________________________________________________" << std::endl;
}