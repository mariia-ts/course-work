#include "distributor.hpp"
#include <iostream>

Distributor::Distributor(std::string food_type, double price, int amount) {
    set_food_type(food_type);
    set_price(price);
    set_amount(amount);
}

void Distributor::set_food_type(std::string food_type) {
    this->food_type = food_type;
}

void Distributor::set_price(double price) {
    this->price = price;
}

void Distributor::set_amount(int amount) {
    this->amount = amount;
}

std::string Distributor::get_food_type(void) {
    return this->food_type;
}

double Distributor::get_price(void) {
    return this->price;
}

int Distributor::get_amount(void) {
    return this->amount;
}

void Distributor::display(void) {
    std::cout   << " _____________________________________________________________" << std::endl
                << "| Food type: " << this->get_food_type() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Price for 1: " << this->get_price() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Amount: " << this->get_amount() << std::endl
                << "|_____________________________________________________________" << std::endl
                << "| Total: " << this->get_price() * this->get_amount() << std::endl
                << "|_____________________________________________________________" << std::endl;
}