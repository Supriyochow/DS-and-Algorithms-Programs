//Program 3 of Bit Manipulation
//Checking for ith Set bit



//Given a number N and index i. Find whether ith bit in binary representation of N is set or not.
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N,i;
	
	cin>>N>>i;
	
	//Take a value F which is equal to 1
	int F=1;
	//left shift the F by ith index
	F=F<<i;
	if(N&F)		//If the AND operation gives 1
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;	
	
	return 0;
}
