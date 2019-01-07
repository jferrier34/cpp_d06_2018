/*
** EPITECH PROJECT, 2019
** temp.cpp
** File description:
** ex01
*/

#include <iomanip>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstring>

void fahrenheit_to_celsius(float temp)
{
    float res;

    res = 5.0 / 9.0 * (temp - 32);

    std::cout << std::setw(16) << std::fixed <<std::setprecision(3) << res<< std::setw(16) << "Fahrenheit\n";
}

void celsius_to_fahrenheit(float temp)
{
    float res;

    res = (temp - 32.0) * 5.0 / 9.0;

    std::cout << std::setw(16) << std::fixed <<std::setprecision(3) << res << std::setw(16) << "Celcius\n";

}
