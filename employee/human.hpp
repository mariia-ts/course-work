#pragma once
#include <string>

class Human {
    private:
        std::string first_name;
        std::string last_name;
        std::string sex;
        int age;
    public:
        Human();
        Human(std::string first_name, std::string last_name,
                std::string sex, int age);
        ~Human(void);

        void set_first_name(std::string first_name);
        void set_last_name(std::string last_name);
        void set_sex(std::string sex);
        void set_age(int age);

        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_sex(void);
        int get_age(void);
};