#include <iostream>

#include "Exes.h"
#include "Utils.h"

void showMenu() {

	std::cout << "e - exit\n";
	std::cout << "h - help\n";
	std::cout << "1 - ranks\n";
	std::cout << "2 - paths\n";
	std::cout << "3 - WidthFisrt\n";
	std::cout << "4 - depthFirst\n";
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

			case '3': Exes::widthFirst(m, n); break;
			case '4': Exes::depthFirst(m, n); break;

		}

	} while (option != 'e');

}

int main() {

	showMenu();
	choose();

	return 0;
}