#include "zoo_fun.hpp"
#include <iostream>

void display_zoos_info(std::vector<Zoo> &zoos) {
    for(Zoo &zoo : zoos) {
        zoo.display();
        std::cout << zoo.get_herbivores_exchanged() + zoo.get_predators_exchanged() << " animals exchanged." << std::endl;
    }
}

void display_zoos_pred_exch_info(std::vector<Zoo> &zoos) {
    for(Zoo &zoo : zoos) {
        zoo.display();
        std::cout << zoo.get_predators_exchanged() << " predators exchanged." << std::endl;
    }
}

void display_zoos_herb_exch_info(std::vector<Zoo> &zoos) {
    for(Zoo &zoo : zoos) {
        zoo.display();
        std::cout << zoo.get_herbivores_exchanged() << " herbivores exchanged." << std::endl;
    }
}