/*
Dr. Strange has an experimental laboratory in a mysterious enclave.
He is conducting an experiment with strange genes which will make him the most powerful sorcerer in the world.
And, for this, he needs to create a particular amount of bacteria that multiplies exponentially.
At the moment, he is curious to know this. If he lets m bacteria multiply n exponential times, will he get the required amount of bacteria?
Input consists of three inputs. The no. of bacteria, m. The number in which it gets multiplied, n. The required number, req .

Test Cases:-

Case 1:-
Input (stdin)
2
3
7

Output (stdout)
Doctor, you can proceed with your experiment.

Case 2:-
Input (stdin)
2
3
9

Output (stdout)
Sorry Doctor! You need more bacteria.

Case 3:-
Input (stdin)
2
3
8

Output (stdout)
Doctor, you can proceed with your experiment.

*/

#include<iostream>
using namespace std;

int checkBacteriaAmount(int m, int n) {
 int number=1;
  while(n!=0) {
   number = number * m;
   n--;
 }
 return number
;}

int main() {
  int m, n, req;
  cin >> m >> n >> req;
  if(checkBacteriaAmount(m, n) >= req)
    cout << "Doctor, you can proceed with your experiment." << endl;
  else
    cout << "Sorry Doctor! You need more bacteria." << endl;
  return 0;
}