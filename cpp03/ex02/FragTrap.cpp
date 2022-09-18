#include "FragTrap.hpp"

FragTrap::FragTrap( std::string n) : ClapTrap(n){
    this->name = n;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AtackDamage = 30;
    std::cout << "FragTrap Default Contructor called. New FragTrap name is " << name << std::endl;
}

FragTrap::FragTrap (const FragTrap &copy): ClapTrap(copy){
    this->name = copy.name;
    std::cout << "FragTrap Copy constructer called" << std::endl;
}

FragTrap::~FragTrap (){
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap& op)
{
    std::cout << "FragTrap Assignment operator overloader called" << std::endl;
    this->name = op.name;
    return (*this);
}


void FragTrap::highFivesGuy(){
    if (this->HitPoints < 1)
        std::cout << "FragTrap "<< this->name << " has no HitPoints left and can't act" << std::endl;
    else if (this->EnergyPoints < 1)
        std::cout << "FragTrap "<<this->name << " has no EnergyPoints left and can't act" << std::endl;
    else{
        std::cout << "FragTrap " << this->name << " tries to highFive. Everyone around ignores him." << std::endl;
        (this->EnergyPoints - 1 < 0 ? this->EnergyPoints = 0 : this->EnergyPoints--);
        std::cout << "FragTrap " <<this->name << " has " << this->EnergyPoints << " EnergyPoints left" << std::endl;
    }
}