

#include <iostream>

struct sandwich
{
public:
    std::string meat;
    bool isHot;
    float wieght;
};


//typedef float salary; tradtional
using salary = double; //modern

int main()
{

    salary wage_reception = 14.4;
    salary wage_anaylist = 18.5;
    salary wage_engineer = 32.4;

    std::cout << "UserDataTypes!\n";
    sandwich pastrami;
    pastrami.meat = "pastrami";
    pastrami.isHot = true;
    pastrami.wieght = 1;
    std::cout << sizeof(pastrami.meat) << std::endl;
    std::cout << sizeof(pastrami.isHot) << std::endl;
    std::cout << sizeof(pastrami.wieght) << std::endl;
    std::cout << sizeof(pastrami) << std::endl;
    

}

