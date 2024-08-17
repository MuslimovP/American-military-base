#include <iostream>
#include "Base.h"
#include "Bus.h"
#include "Truck.h"

int main() 
{
    Base::Initialize();

    Bus bus(20, 30, 50, 100);
    Truck truck(10, 15, 60, 150);

    std::cout << "Initial state:\n";
    std::cout << "People on base: " << Base::people_on_base << "\n";
    std::cout << "Vehicles on base: " << Base::vehicles_on_base << "\n";
    std::cout << "Petrol on base: " << Base::petrol_on_base << "\n";
    std::cout << "Goods on base: " << Base::goods_on_base << "\n";

    bus.arrive();
    truck.arrive();

    std::cout << "\nAfter vehicles arrived:\n";
    std::cout << "People on base: " << Base::people_on_base << "\n";
    std::cout << "Vehicles on base: " << Base::vehicles_on_base << "\n";
    std::cout << "Petrol on base: " << Base::petrol_on_base << "\n";
    std::cout << "Goods on base: " << Base::goods_on_base << "\n";

    bus.leave();
    truck.leave();

    std::cout << "\nAfter vehicles left:\n";
    std::cout << "People on base: " << Base::people_on_base << "\n";
    std::cout << "Vehicles on base: " << Base::vehicles_on_base << "\n";
    std::cout << "Petrol on base: " << Base::petrol_on_base << "\n";
    std::cout << "Goods on base: " << Base::goods_on_base << "\n";

    return 0;
}
