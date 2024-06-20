#include "../employee/employee.hpp"
#include "../animals/animal.hpp"
#include "../distributors/distributor.hpp"
#include "../zoos/zoo.hpp"
#include <string>
#include <vector>

std::vector<Employee> employee_list {
    Employee("Andy", "Candy", "man", 22, 4, 25000.0, "predators", "lions"),
    Employee("Fedir", "Mand", "man", 32, 10, 26000.0, "predators", "wolves"),
    Employee("Fred", "Shelbey", "man", 33, 12, 19500.0, "predators", "crocodiles"),
    Employee("Maggie", "Gemb", "woman", 42, 20, 36000.0, "herbivores", "chickens"),
    Employee("Lala", "Derol", "woman", 56, 35, 34000.0, "herbivores", "donkeys"),
    Employee("Randy", "Candy", "man", 18, 1, 18000.0, "predators", "monkeys"),
    Employee("Harry", "Potter", "man", 24, 2, 24600.0, "herbivores", "lemures"),
    Employee("Abra", "Kadabra", "woman", 63, 43, 46700.0, "predators", "tigers"),
    Employee("Benie", "Hen", "woman", 19, 2, 17700.0, "predators", "cats"),
    Employee("Ken", "Tompson", "man", 20, 3, 16300.0, "herbivores", "pigs")
};

std::vector<Animal> animals_list {
    Animal("Wolf",      "predators",    "wolves",       "wet",  "male",      5,      5, 50, 120, 1, false, true, false, true),
    Animal("Lion",      "predators",    "lions",        "wet",  "male",      10,     6, 80, 120, 2, true, true, false, false),
    Animal("Crocodile", "predators",    "crocodiles",   "wet",  "female",    12,     10, 200, 50, 3, true, true, true, false),
    Animal("Chicken",   "herbivores",   "chickens",     "dry",  "male",      6,      6, 5, 30, 4, false, false, false, true),
    Animal("Donkey",    "herbivores",   "donkeys",      "dry",  "male",      12,     3, 120, 160, 5, false, true, false, false),
    Animal("Monkey",    "predators",    "monkeys",      "wet",  "female",    20,     15, 25, 140, 6, true, true, true, false),
    Animal("Lemure",    "herbivores",   "lemures",      "wet",  "female",    12,     12, 12, 70, 7, true, true, false, true),
    Animal("Tiger",     "predators",    "tigers",       "wet",  "male",      5,      4, 60, 120, 8, true, false, false, true),
    Animal("Cat",       "predators",    "cats",         "dry",  "female",    9,      9, 9, 40, 9, false, false, true, false),
    Animal("Pig",       "herbivores",   "pigs",         "dry",  "male",      3,      3, 300, 80, 10, false, false, true, true)
};

std::vector<Distributor> distributors_list {
    Distributor("wet",  50.0, 50),
    Distributor("dry",  10.0, 150),
    Distributor("dry",  1050.0, 10),
    Distributor("wet",  550.0, 40)
};

std::vector<std::string> self_produced_food_list {
    "vegetables",
    "plants",
    "fruits"
};

std::vector<Zoo> zoo_exchanged_list {
    Zoo("National zoo", 10, 10),
    Zoo("International zoo", 2, 1),
    Zoo("American zoo", 6, 6)
};