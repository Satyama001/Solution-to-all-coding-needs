#include<iostream>
using namespace std;

/*
example of inverted half pyramid:

n=5

* * * * *
* * * *
* * *
* *
*

*/

int main() {
	
	int n;
	cout << "Enter n :";
	cin >> n;

	for(int i=n; i!=0; i--) {
		
		for(int j=1; j<=i; j++) {

			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}

/* Similarily we can also do non-inverted i.e. simple half pyramid

n=5

*
* *
* * *
* * * *
* * * * *

Logic: Bas i ko n se start krke 1 tak le jaane ke bajaye
       1 se start krke n tak le jao
       KAAM HO  JAYEGA :)

CODE:

for(int i=1; i<=n; i++) {
		
	for(int j=1; j<=i; j++) {

		cout << "* ";
	}
	cout << endl;
}

*/