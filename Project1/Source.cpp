#include <iostream>
#include <math.h>


using namespace std;

//how many prime numbers are into a vector?
void main() {
	int n, i, j, t, k = 0, v[10];
	cout << "Dimension: ";
	cin >> n;
	for (i = 1; i <= n; i++) {
		cout << "x[" << i << "]=";
		cin >> v[i];
	}
	for (i = 1; i <= n; i++) {
		t = 1;
		for (j = 2; j <= v[i] / 2; j++) {
			if (v[i] % j == 0) {
				t = 0;
			}
		}
		if (t == 1)
			k++;
	}
	cout << "In the vector are " << k << " prime numbers";
}
