#include <iostream>


class Exes {

public:

	static void widthFirst(int a[6][6], int n) {

		int viz[20], c[20], prim, ultim, k;
		initVector(viz, 20);
		initVector(c, 20);

		std::cout << "nod pornire... ";
		std::cin >> k;

		prim = ultim = 1;
		c[ultim] = k;
		viz[k] = 1;

		while (prim <= ultim) {

			k = c[prim];
			for (int i = 1; i <= n; i++)
				if (a[k][i] == 1 && viz[i] == 0) {
					ultim++;
					c[ultim] = i;
					viz[i] = 1;
				}

			prim++;
		}
		prntVector(c, n);
	}

	static void depthFirst(int a[6][6], int n) {

		int viz[20], st[20], vf, k;
		initVector(viz, 20);
		initVector(st, 20);

		std::cout << "nod pornire... ";
		std::cin >> k;
		std::cout << k << ' ';

		vf = 1;
		st[vf] = k;
		viz[k] = 1;

		int i;
		while (vf > 0) {

			i = 1;
			k = st[vf];
			while (i <= n && (a[k][i] == 0 || (a[k][i] == 1 && viz[i] == 1)))
				i++;

			if (i == n + 1) {
				vf--;

			} else {

				std::cout << i << ' ';
				vf++;
				st[vf] = i;
				viz[i] = 1;
			}
		}
		std::cout << '\n';
	}

	static void prntVector(int v[], int n) {

		for (int i = 1; i <= n; i++)
			std::cout << v[i] << ' ';

		std::cout << '\n';
	}

	static void initVector(int v[], int n) {

		for (int i = 1; i <= n; i++)
			v[i] = 0;
	}

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