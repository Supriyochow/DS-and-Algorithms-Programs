//Program 2 of Bit Manipulation
//Right shift


//Fact:- right shift by 1 basically gives division of 2
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N,i;
	
	cin>>N>>i;
	
	//right shifting the element (formula is N=N>>i then N=N/(2^i))
	cout<<N<<">>"<<i<<" = "<<(N>>i)<<endl;
	return 0;
}
