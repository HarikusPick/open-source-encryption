#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<cmath>

using namespace std;

int gcd(int x, int y) {
	int c;
	for (int i = ((x > y) ? x : y); i > 0; i--) {
		if (x % i == 0 && y % i == 0) {
			c = i;
			break;
		}
	}
	return c;
}

int main()
{
	int a, b, n, Q, e, d;
	for (int k = 0;;k++) {
		srand(time(NULL));
		a = rand();
		b = rand();
		cout << a << " " << b << endl;
		if (gcd(a, b) == 1) {
			n = a * b;
			Q = (a - 1) * (b - 2);
f			e = rand() % Q;
			if (gcd(e, Q) == 1) cout << " sonuclar: " << a << " " << b << endl;
		}
	}
}
