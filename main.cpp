#include <iostream>

#include "Exes.h"
#include "Utils.h"

void showMenu() {

	std::cout << "e - exit\n";
	std::cout << "h - help\n";
	std::cout << "1 - ranks\n";
	std::cout << "2 - paths\n";
}

void choose() {

	int m[6][6], n, a[6][6];
	Utils::readMatrix(m, n);

	char option;
	do {

		std::cout << "New option.. ";
		std::cin >> option;
		switch (option) {

			case 'h': showMenu();  break;
			case '1': Exes::prntRanks(m, n); break;
			case '2': Utils::cpyMat(a, m, n); 
					Exes::setPaths(a, n);
					Utils::prntMatrix(a, n);
					break;
		}

	} while (option != 'e');

}

int main() {

	showMenu();
	choose();

	return 0;
}