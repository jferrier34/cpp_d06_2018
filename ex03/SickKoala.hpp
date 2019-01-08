/*
** EPITECH PROJECT, 2019
** SickKoala.hpp
** File description:
** ex03
*/

#ifndef SICKKOALA_HPP
#define SICKKOALA_HPP

#include <algorithm>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <cstring>
#include <iostream>

class SickKoala {

    private:
    std::string name;

    public:
    SickKoala(std::string name);
    ~SickKoala();
    void poke();
    void overDrive(std::string str);
    bool takeDrug(std::string str);
};

#endif

