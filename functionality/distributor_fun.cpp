#include "distributor_fun.hpp"
#include <iostream>

void display_distributors(std::vector<Distributor> &distributors) {
    for(Distributor &distributor : distributors) {
        distributor.display();
    }
}

void display_self_produced_food(std::vector<std::string> &self_produced_food) {
    for(std::string &food : self_produced_food) {
        std::cout << food << std::endl;
    }
}