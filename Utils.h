#include <iostream>
#include <fstream>

class Utils {

public:

	static void readMatrix(int m[6][6], int &n) {

		std::ifstream in("matrix.txt");
		in >> n;
		for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			in >> m[i][j];
	}

	static void prntMatrix(int m[6][6], int n) {

		for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			std::cout << m[i][j] << ' ';

			std::cout << '\n';
		}
	}

	static void cpyMat(int a[6][6], int m[6][6], int n) {

		for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			a[i][j] = m[i][j];
	}

};