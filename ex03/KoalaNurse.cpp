/*
** EPITECH PROJECT, 2019
** KoalaNurse.cpp
** File description:
** ex02
*/

#include "KoalaNurse.hpp"
#include "SickKoala.hpp"

std::string my_cat(std::string str)
{
    std::ifstream myfile;
    std::string line;

    myfile.open(str);
    if (myfile.is_open()) {
	std::getline(myfile, line);
	myfile.close();
	return (line);
    }
    return NULL;
}


KoalaNurse::~KoalaNurse(void)
{
    sdt::cout <<"Nurse " << this->id << ": Finally some rest!" << std::endl;
}

KoalaNurse::KoalaNurse(int id)
{
    this->id = id;
}

KoalaNurse::giveDrug(std::string drug, SickKoala *Koala)
{
    Koala->takeDrug(drug);
}

KoalaNurse::readReport(std::string filename)
{
    std::string name = filename + ".report";
    std::string str = my_cat(name);

    if (!name || name == NULL)
        return ;
    else {
    std::cout << "Nurse " << this->id << ": Kreog! Mr." << filename << "needs a " << drug  << "!" << std::endl;
    return (drug);
    }
    return (drug);
}

void KoalaNurse::timeCheck(void)
{
    if (this->onwork == true) {
    std::cout << "Nurse " << this->id << ": Time to get to work!" << std::endl;
    } else
    {
        this->onwork = false;
    std::cout << "Nurse " << this->id << ": Time to go home to my eucalyptus forest!" << endle;
    }
}
