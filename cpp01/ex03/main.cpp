#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    
    Weapon Axe;
    Weapon *Axe_ptr = &Axe;
    Axe.setType("Axe");
    std::cout << "this weapon is a " << Axe.getType()<< std::endl;

    HumanA One("One", Axe);
    One.attack();

    HumanB Two("Two", NULL);
    HumanB Three("Three", Axe_ptr);
    Two.attack();
    Three.attack();


}