/*
** EPITECH PROJECT, 2019
** cat.cpp
** File description:
** cat.cpp
*/

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

int main(int argc, char **argv)
{
    std::ifstream myfile;
    std::string line;
    char c;

    if (argc < 2) {
        std::cerr << "my_cat: Usage : " << argv[0] << " file [...]\n";
            return (84);
    }
    if (argc >= 1) {
        for (int i = 1; argv[i]; i++) {
            myfile.open(argv[i], std::ifstream::in);
	    if (myfile) {
	        while (myfile.get(c))
		    std::cout << c;
		myfile.close();
	    }
	    else
		std::cerr << "my_cat: " << argv[i]
			  << ": No such file or directory" << std::endl;
        }
    }
}
