#include "Vehicle.h"

Vehicle::Vehicle(double petrol_amount, double tank_volume)
    : petrol_amount(petrol_amount), tank_volume(tank_volume) {}

double Vehicle::getTankVolume() const 
{
    return tank_volume;
}

double Vehicle::getPetrolAmount() const 
{
    return petrol_amount;
}

void Vehicle::arrive() 
{
    Base::vehicles_on_base++;
    Base::people_on_base++;
}

bool Vehicle::leave() 
{
    if (Base::petrol_on_base < (tank_volume - petrol_amount) || Base::people_on_base < 1) 
    {
        return false;
    }

    Base::petrol_on_base -= (tank_volume - petrol_amount);
    petrol_amount = tank_volume;
    Base::vehicles_on_base--;
    Base::people_on_base--;

    return true;
}
