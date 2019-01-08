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

class KoalaNurse {

	private:
	unsigned int id;
	bool active;

	public:
	KoalaNurse(std::string);
    KoalaNurse(void);
    ~KoalaNurse(void);
    void giveDrug(std::string, SickKoala *);
    void timeCHeck(void);
}:


#endif
