#include "Weapon.hpp"
#include "HumanA.hpp"

int main()
{
    Weapon Axe;
    Axe.setType("Axe");
    std::cout<< Axe.getType()<< std::endl;

    HumanA One("One", Axe);
    One.attack();
    
}