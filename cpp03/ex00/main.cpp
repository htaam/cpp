#include "ClapTrap.hpp"

int main()
{
    ClapTrap One ("One");
    One.attack("Rock");
    One.takeDamage(1);
    One.beRepaired(12);
    One.attack("Tree");
    One.attack("Tree");
    One.attack("Tree");
    One.attack("Tree");
    One.attack("Tree");
    One.attack("Tree");
    One.attack("Tree");
    One.attack("Tree");
    One.attack("Tree");
    One.attack("Tree");
    One.attack("Tree");
    One.beRepaired(1);
    One.takeDamage(200);
    One.attack("Rock");
    ClapTrap Two = One;
    Two.attack("Tree");


}