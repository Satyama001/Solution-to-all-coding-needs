/*
Nowadays, we use social media a lot. We usually send messages, pictures, etc to each other. 
So, encrypting and decrypting should be done properly to avoid being hacked. 
Irin is developing a program for the same where color encrypting is done with the help of Armstrong numbers. 
Can you help Irin write a program to check whether a number is an Armstrong number or not?


Test Cases:-

Case 1:-
Input (stdin)
153

Output (stdout)
Kindly proceed with encrypting

Case 2:-
Input (stdin)
154

Output (stdout)
It is not an Armstrong number

Case 3:-
Input (stdin)
1634

Output (stdout)
Kindly proceed with encrypting

*/

#include<iostream>
int power(int m,int n)
{
    int j,i;
    for(i=1,j=1;i<=n;i++)
        j=j*m;
    return j;
}
int arm(int n)
{   
  //to check no. of digits
  int count = 0;//to store no. of digits
  int x=n;  //a copy of n
  while(x!=0) {
    x = x/10;
    count++;
  }

  //to check armstrong
  int y=n;  //another copy of n
  int sum = 0;
  while(n!=0) {
    int rem = n%10;
    sum = sum + power(rem, count);
    n=n/10;
  }

  if(y==sum)
    return 1;
  else
    return 0;

}
int main()
{
    int n;
    std::cin>>n;
    if(arm(n)==1)
        std::cout<<"Kindly proceed with encrypting";
    else
        std::cout<<"It is not an Armstrong number";
    
    return 0;
}