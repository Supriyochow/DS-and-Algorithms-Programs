//Program 4 of Bit Manipulation
//Counting number of set bits

//Appraoch 1
//TC:= O(logN)

//Given a number N find the number of set bits in it
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	cin>>N;
	
	int count=0;
	//Perform AND operation with 1 and right shift until the number becomes 0
	while(N>0)
	{
		if(N&1)
			count++;
			
		N=N>>1;	
	}	
	
	cout<<"The total number of set bit is "<<count<<endl;	
	
	return 0;
}
