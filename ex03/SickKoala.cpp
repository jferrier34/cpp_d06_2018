/*
** EPITECH PROJECT, 2019
** SickKoala.cpp
** File description:
** ex03
*/

#include "SickKoala.hpp"

std::string replace_all(std::string str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return str;
}

SickKoala::~SickKoala(void)
{
    std::cout <<"Mr." << this->name << ": Kreooogg!! I'm cuuuured!\n";
}

SickKoala::SickKoala(std::string name)
{
    this->name = name;
}

void SickKoala::overDrive(std::string str)
{
        str = replace_all(str, "Kreog !", "1337 !");
        std::cout << "Mr." << this->name << ": "<< str << std::endl;
}

void SickKoala::poke()
{
    std::cout << "Mr." << this->name << ": Kreooogg!!\n";
}

bool SickKoala::takeDrug(std::string str)
{
    if (str == "Buronzand") {
        std::cout <<"Mr." << this->name << ": And you'll sleep right away!\n";
    }
    std::transform(str.begin(), str.end(), str.begin(), tolower);
    if (str == "mars") {
    std::cout <<"Mr." << this->name << ": Mars, and it kreogs!\n";
    return true;
    } else
        std::cout <<"Mr." << this->name << ": Goerkreog!\n";
        return false;
}
