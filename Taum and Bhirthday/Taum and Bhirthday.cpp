// Taum and Bhirthday.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>


using namespace std;

// void blkwhite_if_xz_lessthany(int b, int x, int w, int z ) {
// 	cout << b * x + w * (x + z) << endl;
// }

int main()
{
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		long b;
		long w;
		cin >> b >> w;
		long x;
		long y;
		long z;
		cin >> x >> y >> z;

		if (x + z < y) {
			cout << b * x + w * (x + z) << endl;
		}

		else if (y + z < x) {
			cout << w * y + b * (y + z) << endl;
		}
		else cout << b * x + w * y << endl;

	}

    return 0;
}

