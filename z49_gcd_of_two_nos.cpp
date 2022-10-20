//GCD/HCF of Two Nos.
#include<iostream>
using namespace std;

int gcdOfTwoNos(int a, int b) {

	int small=0;
	int gcd=0;
	if(a < b)
		small = a;
	else
		small = b;

	while(small>=1) {

		if(a%small==0 && b%small==0) {
			gcd = small;
			break;
		}
		small--;
	}

	return gcd;
}

int main() {

	int n1, n2;
	cin >> n1 >> n;2

	cout << gcdOfTwoNos(n1, n2) << endl;

	return 0;
}