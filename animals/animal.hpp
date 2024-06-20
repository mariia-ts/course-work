#pragma once
#include <string>

class Animal {
    private:
        std::string name;
        std::string spieces;
        std::string animal_group;
        std::string food;
        std::string sex;
        int age;
        int years_in_zoo;
        int weight;
        int height;
        int cage;
        bool needs_warm_shelter;
        bool vaccinated;
        bool had_illness;
        bool fertile;
    public:
        Animal();
        Animal(std::string name, std::string spieces, std::string group, std::string food, std::string sex,
                int age, int years_in_zoo, int weight, int height,
                int num, bool needs_warm_shelter, bool vaccinated, bool had_illness, bool fertile);
        ~Animal();

        void set_name(std::string name);
        void set_spieces(std::string spieces);
        void set_food(std::string food);
        void set_animal_group(std::string name);
        void set_sex(std::string sex);
        void set_age(int age);
        void set_years_in_zoo(int years);
        void set_weight(int weight);
        void set_height(int height);
        void set_cage(int num);
        void set_warm_shelter(bool needs_warm_shelter);
        void set_vaccinated(bool vaccinated);
        void set_illness(bool had_illness);
        void set_fertile(bool fertile);

        std::string get_name(void);
        std::string get_spieces(void);
        std::string get_food(void);
        std::string get_animal_group(void);
        std::string get_sex(void);
        int get_age(void);
        int get_years_in_zoo(void);
        int get_weight(void);
        int get_height(void);
        int get_cage(void);
        bool get_warm_shelter(void);
        bool get_vaccinated(void);
        bool get_illness(void);
        bool get_fertile(void);

        void display(void);
};