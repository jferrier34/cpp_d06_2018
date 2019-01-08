/*
** EPITECH PROJECT, 2019
** KoalaNurse.hpp
** File description:
** ex03
*/

#ifndef KOALANURSE_HPP
#define KOALANURSE_HPP

#include <algorithm>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <cstring>
#include <iostream>
#include "SickKoala.hpp"

class KoalaNurse {

	private:
	int id;
	bool onwork;

	public:
        KoalaNurse(int id);
        ~KoalaNurse();
        void giveDrug(std::string drug, SickKoala *SickKoala);
        void timeCheck();
    std::string readReport(std::string filename);
};


#endif
