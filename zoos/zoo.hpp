#pragma once

#include <string>
class Zoo {
    private:
        std::string name;
        int predators_exchanged;
        int herbivores_exchanged;
    public:
        Zoo(std::string name, int predators_exchanged, int herbivores_exchanged);

        void set_name(std::string name);
        void set_predators_exchanged(int predators_exchanged);
        void set_herbivores_exchanged(int herbivores_exchanged);

        std::string get_name(void);
        int get_predators_exchanged(void);
        int get_herbivores_exchanged(void);

        void display(void);
};