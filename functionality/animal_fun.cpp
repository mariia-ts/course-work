#include "animal_fun.hpp"
#include <string>

void display_animals_by_cage(std::vector<Animal> &animals, int pattern) {
    for(Animal &animal : animals) {
        if(animal.get_cage() == pattern) {
            animal.display();
        }
    }
}

void display_animals_by_cage_and_spieces(std::vector<Animal> &animals, std::string pattern, int cage) {
    for(Animal &animal : animals) {
        if(animal.get_cage() == cage && animal.get_spieces() == pattern) {
            animal.display();
        }
    }
}

void display_animals_by_sex(std::vector<Animal> &animals, std::string pattern, int cage) {
    for(Animal &animal : animals) {
        if(animal.get_sex() == pattern && animal.get_cage() == cage) {
            animal.display();
        }
    }
}

void display_animals_by_age(std::vector<Animal> &animals, int pattern) {
    for(Animal &animal : animals) {
        if(animal.get_age() == pattern) {
            animal.display();
        }
    }
}

void display_animals_by_weight(std::vector<Animal> &animals, int pattern) {
    for(Animal &animal : animals) {
        if(animal.get_weight() == pattern) {
            animal.display();
        }
    }
}

void display_animals_by_height(std::vector<Animal> &animals, int pattern) {
    for(Animal &animal : animals) {
        if(animal.get_height() == pattern) {
            animal.display();
        }
    }
}

void display_animals_by_warm_shelter(std::vector<Animal> &animals) {
    for(Animal &animal : animals) {
        if(animal.get_warm_shelter() == true) {
            animal.display();
        }
    }
}

void display_animals_by_vaccination_or_illness(std::vector<Animal> &animals) {
    for(Animal &animal : animals) {
        if(animal.get_vaccinated() == true || animal.get_illness() == true) {
            animal.display();
        }
    }
}

void display_predators(std::vector<Animal> &animals) {
    for(Animal &animal : animals) {
        if(animal.get_spieces() == "predators") {
            animal.display();
        }
    }
}

void display_herbivores(std::vector<Animal> &animals) {
    for(Animal &animal : animals) {
        if(animal.get_spieces() == "herbivores") {
            animal.display();
        }
    }
}

void display_animals_by_food_type(std::vector<Animal> &animals, std::string pattern) {
    for(Animal &animal : animals) {
        if(animal.get_food() == pattern) {
            animal.display();
        }
    }
}

void display_fertile_animals(std::vector<Animal> &animals) {
    for(Animal &animal : animals) {
        if(animal.get_fertile()) {
            animal.display();
        }
    }
}