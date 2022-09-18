#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string n) : ClapTrap(n){
    this->name = n;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AtackDamage = 20;
    std::cout << "ScavTrap Default Contructor called. New ScavTrap name is " << name << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap &copy): ClapTrap(copy){
    this->name = copy.name;
    std::cout << "ScavTrap Copy constructer called" << std::endl;
}

ScavTrap::~ScavTrap (){
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap& op)
{
    std::cout << "ScavTrap Assignment operator overloader called" << std::endl;
    this->name = op.name;
    return (*this);
}

void ScavTrap::attack(const std::string& target){
    if (this->HitPoints < 1)
        std::cout << "ScavTrap "<< this->name << " has no HitPoints left and can't act" << std::endl;
    else if (this->EnergyPoints < 1)
        std::cout << "ScavTrap "<<this->name << " has no EnergyPoints left and can't act" << std::endl;
    else{
        std::cout << "ScavTrap " << this->name << " attacks " << target << " ,causing " << AtackDamage << " points of damage!" << std::endl;
        (this->EnergyPoints - 1 < 0 ? this->EnergyPoints = 0 : this->EnergyPoints--);
        std::cout << "ScavTrap " <<this->name << " has " << this->EnergyPoints << " EnergyPoints left" << std::endl;
    }
}

void ScavTrap::guardGate(){
    if (this->HitPoints < 1)
        std::cout << "ScavTrap "<< this->name << " has no HitPoints left and can't act" << std::endl;
    else if (this->EnergyPoints < 1)
        std::cout << "ScavTrap "<<this->name << " has no EnergyPoints left and can't act" << std::endl;
    else{
        std::cout << "ScavTrap " << this->name << " is now in guard mode" << std::endl;
        (this->EnergyPoints - 1 < 0 ? this->EnergyPoints = 0 : this->EnergyPoints--);
        std::cout << "ScavTrap " <<this->name << " has " << this->EnergyPoints << " EnergyPoints left" << std::endl;
    }
}