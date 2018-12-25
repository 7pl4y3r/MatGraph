#include <iostream>

class Exes {

public:

	static void prntRanks(int m[6][6], int n) {

		for (int i = 1; i <= n; i++)
			std::cout << getRank(m, n, i) << ' ';

		std::cout << '\n';
	}

	static void setPaths(int m[6][6], int n) {

		for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (m[i][j] == 0 && i != k && j != k)
				m[i][j] = m[i][k] * m[k][j];
	}

private:

	static int getRank(int m[6][6], int n, int i) {

		int s = 0;
		for (int j = 1; j <= n; j++)
			s += m[i][j];

		return s;
	}

};