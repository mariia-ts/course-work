#pragma once
#include "human.hpp"
#include <string>

class Employee : public Human {
    private:
        int years;
        double salary;
        std::string responsib_spieces;
        std::string responsib_animal;

    public:
        Employee();
        Employee(std::string first_name, std::string last_name,
                std::string sex, int age, int years, double salary,
                std::string responsib_spieces, std::string responsib_animal);
        ~Employee(void);

        void set_years(int years);
        void set_salary(double salary);
        void set_responsib_spieces(std::string spieces);
        void set_responsib_animal(std::string animal);

        int get_years(void);
        double get_salary(void);
        std::string get_responsib_spieces(void);
        std::string get_responsib_animal(void);

        void display(void);

        Employee& operator=(Employee& other);
};