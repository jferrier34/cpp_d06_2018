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
}

void celsius_to_fahrenheit(float temp)
{
    float res;

    res = 5.0 / 9.0 * (temp + 32);
    
    std::cout std::setw(16) << res << std::setw(16) << "Fahrenheit\n";

}

int main(void)
{
    char data[1000];
    float temp = 0;
    std::cin >> temp >> data;
    if (strcmp(data, "Fahrenheit") == 0) {
    celsius_to_fahrenheit(temp);
    }
    else
        return (84);
}
