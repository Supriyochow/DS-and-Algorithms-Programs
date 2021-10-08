//Program 5 of Bit Manipulation
//Counting number of set bits

//Appraoch 2
//TC:= O(logN)

//Given a number N find the number of set bits in it.
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	cin>>N;
	
	int count=0;
	//Perform n&(n-1) to calculate the most significant set bit  
	while(N>0)
	{
		count++;
		
		N=N&(N-1);	
	}	
	
	cout<<"The total number of set bit is "<<count<<endl;	
	
	return 0;
}
