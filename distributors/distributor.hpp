#pragma once
#include <string>

class Distributor {
    private:
        std::string food_type;
        double price;
        int amount;
    public:
        Distributor(std::string food_type, double price, int amount);
        
        void set_food_type(std::string food_type);
        void set_price(double price);
        void set_amount(int amount);

        std::string get_food_type(void);
        double get_price(void);
        int get_amount(void);

        void display(void);
};