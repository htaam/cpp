#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    
    Weapon Axe;
    Axe.setType("Axe");
    std::cout<< Axe.getType()<< std::endl;

    HumanA One("One", "Gun");
    One.attack();

}