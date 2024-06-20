#include "menus/menus.hpp"
#include "functionality/employee_fun.hpp"
#include "functionality/animal_fun.hpp"
#include "functionality/distributor_fun.hpp"
#include "functionality/zoo_fun.hpp"
#include "data/data.cpp"
#include <iostream>
#include <ostream>
#include <string>

int main(void) {
    int choice;
    std::string error_message = "ERROR: Choose the correct option";
    std::string single_delimiter = "|_____________________________________________________________|\n";

    while(true) {
        display_main_menu();
        std::cin >> choice;
        std::cin.ignore();
        std::cout << single_delimiter;

        if(choice == 0) {
            break;
        } else if(choice == 1) {
            int employee_choice;
            display_employee_menu();
            std::cin >> employee_choice;
            std::cout << single_delimiter;

            if (employee_choice == 1) {
                display_employee_by_date(employee_list);
            } else if(employee_choice == 2) {
                int employee_sex_choice;
                display_employee_sex_menu();
                std::cin >> employee_sex_choice;

                if(employee_sex_choice == 1) {
                    display_employee_by_sex(employee_list, "man");
                } else if(employee_sex_choice == 2) {
                    display_employee_by_sex(employee_list, "woman");
                } else {
                    std::cout << error_message << std::endl;
                }
            } else if(employee_choice == 3) {
                display_employee_by_age(employee_list);
            } else if(employee_choice == 4) {
                display_employee_by_salary(employee_list);
            } else {
                std::cout << error_message << std::endl;
            }
            continue;
        } else if(choice == 2) {
            int spieces_or_animals_choice;
            display_spieces_or_animal_menu();
            std::cin >> spieces_or_animals_choice;
            std::cout << single_delimiter;

            if(spieces_or_animals_choice == 1) {
                int spieces_choice;
                display_animal_spieces_menu();
                std::cin >> spieces_choice;
                std::cout << single_delimiter;

                if(spieces_choice == 1) {
                    display_responsibility_by_spieces(employee_list, "predators");
                } else if(spieces_choice == 2) {
                    display_responsibility_by_spieces(employee_list, "herbivores");
                }
            } else if(spieces_or_animals_choice == 2) {
                int animals_choice;
                display_animals_menu();
                std::cin >> animals_choice;
                std::cout << single_delimiter;

                if(animals_choice == 1) {
                    display_responsibility_by_animal(employee_list, "lions");
                } else if(animals_choice == 2) {
                    display_responsibility_by_animal(employee_list, "wolves");
                } else if(animals_choice == 3) {
                    display_responsibility_by_animal(employee_list, "crocodiles");
                } else if(animals_choice == 4) {
                    display_responsibility_by_animal(employee_list, "chickens");
                } else if(animals_choice == 5) {
                    display_responsibility_by_animal(employee_list, "donkeys");
                } else if(animals_choice == 6) {
                    display_responsibility_by_animal(employee_list, "monkeys");
                } else if(animals_choice == 7) {
                    display_responsibility_by_animal(employee_list, "lemures");
                } else if(animals_choice == 8) {
                    display_responsibility_by_animal(employee_list, "tigers");
                } else if(animals_choice == 9) {
                    display_responsibility_by_animal(employee_list, "cats");
                } else if(animals_choice == 10) {
                    display_responsibility_by_animal(employee_list, "pigs");
                }
            } else if (spieces_or_animals_choice == 3) {
                display_employee_by_animal_period(employee_list, animals_list);
            } else {
                std::cout << error_message << std::endl;
            }
            continue;
        } else if(choice == 3) {
                int animals_choice;
                display_animals_menu();
                std::cin >> animals_choice;
                std::cout << single_delimiter;

                if(animals_choice == 1) {
                    display_responsibility_by_animal(employee_list, "lions");
                } else if(animals_choice == 2) {
                    display_responsibility_by_animal(employee_list, "wolves");
                } else if(animals_choice == 3) {
                    display_responsibility_by_animal(employee_list, "crocodiles");
                } else if(animals_choice == 4) {
                    display_responsibility_by_animal(employee_list, "chickens");
                } else if(animals_choice == 5) {
                    display_responsibility_by_animal(employee_list, "donkeys");
                } else if(animals_choice == 6) {
                    display_responsibility_by_animal(employee_list, "monkeys");
                } else if(animals_choice == 7) {
                    display_responsibility_by_animal(employee_list, "lemures");
                } else if(animals_choice == 8) {
                    display_responsibility_by_animal(employee_list, "tigers");
                } else if(animals_choice == 9) {
                    display_responsibility_by_animal(employee_list, "cats");
                } else if(animals_choice == 10) {
                    display_responsibility_by_animal(employee_list, "pigs");
                }
            continue;
        } else if(choice == 4) {
            int char_menu_choice;
            display_animals_char_menu();
            std::cin >> char_menu_choice;

            if(char_menu_choice == 1) {
                int cages_choice;
                display_cages_menu();
                std::cin >> cages_choice;
                std::cout << single_delimiter;

                display_animals_by_sex(animals_list, "male", cages_choice);
            } else if(char_menu_choice == 2) {
                int cages_choice;
                display_cages_menu();
                std::cin >> cages_choice;
                std::cout << single_delimiter;

                display_animals_by_sex(animals_list, "female", cages_choice);
            } else if(char_menu_choice == 3) {
                int cages_choice;
                display_cages_menu();
                std::cin >> cages_choice;
                std::cout << single_delimiter;

                display_animals_by_cage(animals_list, cages_choice);
            } else if(char_menu_choice == 4) {
                int cages_choice;
                display_cages_menu();
                std::cin >> cages_choice;
                std::cout << single_delimiter;

                display_animals_by_cage(animals_list, cages_choice);
            } else if(char_menu_choice == 5) {
                int cages_choice;
                display_cages_menu();
                std::cin >> cages_choice;
                std::cout << single_delimiter;

                display_animals_by_cage(animals_list, cages_choice);
            }
            continue;
        } else if(choice == 5) {
            display_animals_by_warm_shelter(animals_list);
            continue;
        } else if(choice == 6) {
            display_animals_by_vaccination_or_illness(animals_list);
            continue;
        } else if(choice == 7) {
            int spieces_choice;
            display_friendly_spieces_menu();
            std::cin >> spieces_choice;

            if(spieces_choice == 1) {
                display_predators(animals_list);
            } else if(spieces_choice == 2) {
                display_herbivores(animals_list);
            }
            continue;
        } else if(choice == 8) {
            display_distributors(distributors_list);
            continue;
        } else if(choice == 9) {
            display_self_produced_food(self_produced_food_list);
            continue;
        } else if(choice == 10) {
            int food_type_choice;
            display_animals_by_food_type_menu();
            std::cin >> food_type_choice;
            std::cout << single_delimiter;
            
            if(food_type_choice == 1) {
                display_animals_by_food_type(animals_list, "dry");
            } else if(food_type_choice == 2) {
                display_animals_by_food_type(animals_list, "wet");
            }
            continue;
        } else if(choice == 11) {
            int spieces_choice;
            display_animal_spieces_menu();
            std::cin >> spieces_choice;

            if(spieces_choice == 1) {
                int cages_choice;
                display_cages_menu();
                std::cin >> cages_choice;
                std::cout << single_delimiter;

                display_animals_by_cage_and_spieces(animals_list, "predators", cages_choice);
            } else if(spieces_choice == 2) {
                int cages_choice;
                display_cages_menu();
                std::cin >> cages_choice;
                std::cout << single_delimiter;

                display_animals_by_cage_and_spieces(animals_list,"herbivores", cages_choice);
            }
            continue;
        } else if(choice == 12) {
            display_fertile_animals(animals_list);
            continue;
        } else if(choice == 13) {
            int zoo_exchange_choice;
            display_zoos_exchanges_menu();
            std::cin >> zoo_exchange_choice;

            if(zoo_exchange_choice == 1) {
                display_zoos_info(zoo_exchanged_list);
            } else if(zoo_exchange_choice == 2) {
                display_zoos_pred_exch_info(zoo_exchanged_list);
            } else if(zoo_exchange_choice == 3) {
                display_zoos_herb_exch_info(zoo_exchanged_list);
            }
            continue;
        } else {
            std::cout << error_message << std::endl;
            continue;
        }
    }


    std::cout   << " _____________________________________________________________ " << std::endl
                << "|                   The program is stopped                    |" << std::endl
                << "|_____________________________________________________________|" << std::endl;

    return 0;
}