/*
** EPITECH PROJECT, 2019
** KoalaNurse.cpp
** File description:
** ex02
*/

#include "KoalaNurse.hpp"
#include "SickKoala.hpp"

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse " << this->id << ": Finally some rest!" << std::endl;
}

KoalaNurse::KoalaNurse(int id)
{
    this->id = id;
    this->onwork = false;
}

void KoalaNurse::giveDrug(std::string drug, SickKoala *SickKoala)
{
    SickKoala->takeDrug(drug);
}

std::string KoalaNurse::readReport(std::string filename)
{
    std::string name = filename + ".report";
    std::string str = "";
    std::string drug = "";
    std::ifstream my_drug;
    char c;

    my_drug.open(name, std::ifstream::in);
    if (my_drug) {
	while (my_drug.get(c))
	    drug += c;
    std::cout << "Nurse " << this->id << ": Kreog! Mr." << filename << " needs a " << drug << "!" << std::endl;
    return (drug);
    } else
        return (str);
}

void KoalaNurse::timeCheck()
{
    if (this->onwork == true) {
    std::cout << "Nurse " << this->id << ": Time to get to work!" << std::endl;
    } else
    {
        this->onwork = false;
	std::cout << "Nurse " << this->id << ": Time to go home to my eucalyptus forest!" << std::endl;
    }
}


int main(void)
{
    KoalaNurse KoalaNurse(194);
    SickKoala SickKoala("Koko");

    KoalaNurse.giveDrug("Mars", &SickKoala);
    KoalaNurse.readReport("truc");
    KoalaNurse.timeCheck();
    return 0;
}
