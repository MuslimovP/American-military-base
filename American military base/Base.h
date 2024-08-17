#pragma once

class Base 
{
public:
    static int people_on_base;
    static int vehicles_on_base;
    static double petrol_on_base;
    static double goods_on_base;

    // Начальные значения
    static void Initialize() 
    {
        people_on_base = 50;
        vehicles_on_base = 10;
        petrol_on_base = 500.0;
        goods_on_base = 20.0;
    }
};
