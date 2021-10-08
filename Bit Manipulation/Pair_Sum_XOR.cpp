//Program 6 of Bit Manipulation
//Pair Sum XOR of an array


//Given an arraqy with N elements, we have to find out the following
//(A1+A1)^(A1+A2)^................^(An+An)
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	int arr[N];
	cin>>N;
	
	for(int i=1;i<=N;i++)
		cin>>arr[i];
	
	//the formula or appraoch is just multiply all of the elements with 2 and find the XOR of them
	
	int res=0;
	for(int i=1;i<=N;i++)
	{
		res=res^(arr[i]*2);
	}
	
	
	cout<<"The Pair Sum XOR of the array is "<<res<<endl;	
	
	return 0;
}
