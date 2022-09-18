#include "FragTrap.hpp"

int main()
{
    FragTrap One ("One");
    One.highFivesGuy();
    One.attack("Rock");
    One.takeDamage(1);
    One.beRepaired(12);
    One.beRepaired(1);
    One.takeDamage(200);
    One.attack("Rock");
    FragTrap Two = One;
    Two.attack("Tree");
    Two.highFivesGuy();
}