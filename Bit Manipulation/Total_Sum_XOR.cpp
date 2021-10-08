//Program 7 of Bit Manipulation
//Total Sum of XOR Pair


//Given an arraqy with N elements, we have to find out the following
//(A1^A1)+(A1^A2)+................+(An^An)
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	int arr[1001];
	cin>>N;
	
	for(int i=1;i<=N;i++)
		cin>>arr[i];
	
	//here we need to check the number of set bits in each bit place
	//then multiply the number of set bits and number of unset bits
	//then multiply the answer with 2^i(2 power i)
	
	int res=0;
	for(int i=1;i<=31;i++)			//just because we will check 32 bits data
	{
		int countZ=0, countO=0;
		
		for(int j=1;j<=N;j++)
		{
			if(arr[j]&(1<<i))		//check if it is set bit or not
				countO++;
			else
				countZ++;	
		}
		
		int p=countZ*countO;
		
		res+=(1<<i)*p;
	}
	
	
	
	
	cout<<"Total Sum of XOR Pair is "<<res<<endl;	
	
	return 0;
}
