#include "ScavTrap.hpp"

int main()
{
    ScavTrap One ("One");
    One.guardGate();
    One.attack("Rock");
    One.takeDamage(1);
    One.beRepaired(12);
    One.beRepaired(1);
    One.takeDamage(200);
    One.attack("Rock");
    ScavTrap Two = One;
    Two.attack("Tree");
    Two.guardGate();
}