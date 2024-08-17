#include "Truck.h"

Truck::Truck(double load, double max_load, double petrol, double max_petrol)
    : Vehicle(petrol, max_petrol), load(load), max_load(max_load) {}

double Truck::getCurrentLoad() const 
{
    return load;
}

double Truck::getMaxLoad() const 
{
    return max_load;
}

void Truck::arrive() 
{
    Vehicle::arrive();
    Base::goods_on_base += load;
}

bool Truck::leave() 
{
    if (!Vehicle::leave()) 
    {
        return false;
    }

    double goods_to_leave = (Base::goods_on_base >= max_load) ? max_load : Base::goods_on_base;
    Base::goods_on_base -= goods_to_leave;

    return true;
}
