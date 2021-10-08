//A C++ Program to find the sum modulo of a and b in 10^9+7
//Time Complexity: O(1)
//Space Complexity: O(1)

#include<iostream>
#include<math.h>
using namespace std;

//Main Function
int main()
{
	long long a,b, res;
	cout<<"Enter the value of a and b: "<<endl;
	cin>>a>>b;
	long long M=pow(10,9)+7;
	res=(a%M+b%M)%M;
	cout<<"The sum modulo is: "<<res<<endl;
	return 0;
} 
