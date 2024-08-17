#include "Bus.h"

Bus::Bus(int people, int max_people, double petrol, double max_petrol)
    : Vehicle(petrol, max_petrol), people(people), max_people(max_people) {}

int Bus::getPeopleCount() const 
{
    return people;
}

int Bus::getMaxPeople() const 
{
    return max_people;
}

void Bus::arrive() 
{
    Vehicle::arrive();
    Base::people_on_base += people;
}

bool Bus::leave() 
{
    if (!Vehicle::leave()) 
    {
        return false;
    }

    int people_to_leave = (Base::people_on_base >= max_people) ? max_people : Base::people_on_base;
    Base::people_on_base -= people_to_leave;

    return true;
}
