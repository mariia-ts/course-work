#pragma once
#include "../animals/animal.hpp"
#include <string>
#include <vector>

void display_animals_by_cage(std::vector<Animal> &animals, int pattern);
void display_animals_by_cage_and_spieces(std::vector<Animal> &animals, std::string pattern, int cage);
void display_animals_by_sex(std::vector<Animal> &animals, std::string pattern, int cage);
void display_animals_by_age(std::vector<Animal> &animals, int pattern);
void display_animals_by_weight(std::vector<Animal> &animals, int pattern);
void display_animals_by_height(std::vector<Animal> &animals, int pattern);
void display_animals_by_warm_shelter(std::vector<Animal> &animals);
void display_animals_by_vaccination_or_illness(std::vector<Animal> &animals);
void display_predators(std::vector<Animal> &animals);
void display_herbivores(std::vector<Animal> &animals);
void display_animals_by_food_type(std::vector<Animal> &animals, std::string pattern);
void display_fertile_animals(std::vector<Animal> &animals);