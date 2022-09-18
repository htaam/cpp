#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n){
    this->name = n;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AtackDamage = 0;
    std::cout << "Default Contructor called. New ClapTrap name is " << name << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &copy){
    this->name = copy.name;
    std::cout << "Copy constructer called" << std::endl;
}

ClapTrap::~ClapTrap (){
    std::cout << "Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap& op)
{
    std::cout << "Assignment operator overloader called" << std::endl;
    this->name = op.name;
    return (*this);
}

void ClapTrap::attack(const std::string& target){
    if (this->HitPoints < 1)
        std::cout << "ClapTrap "<< this->name << " has no HitPoints left and can't act" << std::endl;
    else if (this->EnergyPoints < 1)
        std::cout << "ClapTrap "<<this->name << " has no EnergyPoints left and can't act" << std::endl;
    else{
        std::cout << "ClapTrap " << this->name << " attacks " << target << " ,causing " << AtackDamage << " points of damage!" << std::endl;
        (this->EnergyPoints - 1 < 0 ? this->EnergyPoints = 0 : this->EnergyPoints--);
        std::cout << "ClapTrap " <<this->name << " has " << this->EnergyPoints << " EnergyPoints left" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap "<< this->name << " takes "<< amount << " points of damage!" << std::endl;
    (((this->HitPoints - (int)amount) < 0) ? this->HitPoints = 0 :this->HitPoints = this->HitPoints - amount);
    std::cout << "ClapTrap " << this->name << " has " << this->HitPoints << " HitPoints left"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->HitPoints < 1)
        std::cout << "ClapTrap "<< this->name << " has no HitPoints left and can't act" << std::endl;
    else if (this->EnergyPoints < 1)
        std::cout << "ClapTrap "<<this->name << " has no EnergyPoints left and can't act" << std::endl;
    else{
        std::cout << "ClapTrap "<< this->name << " restores "<< amount << " points of damage!" << std::endl;
        this->HitPoints += amount;
        (this->EnergyPoints - 1 < 1 ? this->EnergyPoints = 0 : this->EnergyPoints--);
        std::cout << "ClapTrap " << this->name << " has " << this->HitPoints << " HitPoints now"<< std::endl;
        std::cout << "ClapTrap " << this->name << " has " << this->EnergyPoints << " EnergyPoints left" << std::endl;
    }
}

std::string ClapTrap::getName(){
    return (this->name);
}