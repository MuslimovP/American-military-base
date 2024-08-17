#pragma once
#include "Base.h"

class Vehicle 
{
protected:
    double petrol_amount;
    double tank_volume;

public:
    Vehicle(double petrol_amount, double tank_volume);

    double getTankVolume() const;
    double getPetrolAmount() const;

    virtual void arrive();
    virtual bool leave();
};

