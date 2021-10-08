//Program 1 of Bit Manipulation
//Left shift

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N,i;
	
	cin>>N>>i;
	
	//left shifting the element (formula is N=N>>i then N=N*(2^i))
	cout<<N<<"<<"<<i<<" = "<<(N<<i)<<endl;
	return 0;
}
