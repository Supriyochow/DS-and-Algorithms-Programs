//A C++ Program to   find the prime numbers between 1 to n Using Seive of Erastosthenes
//Time Complexity: O(n*log(log(n)))

#include<bits/stdc++.h>
using namespace std;


void SeiveOFErasthosnes(int n)
{
	//Create a boolean array and intialize every element as TRUE the size of the array will be n+1 as 2 is the first prime element
	bool prime[n+1];
	
	//Setting all the value to be true, for this we use memset() function, its syntax is memset(datavariable, value, size);
	memset( prime, true, sizeof(prime));
	
	int i,p;
	for(i=0;i*i<=n;i++)
	{
		//If prime is not changed it is a prime number
		if(prime[i]==true)
		{
			//Update all multiples of i to false
			for(p=i*i;p<=n;p+=i)
			{
				//Making them to false
				prime[p]=false;
			}
		}	
	}
	
	cout<<"The prime number between "<<n<<" are "<<endl;
	//Print all the prime numbers
	for(i=2;i<=n;i++)
	{
		if(prime[i]==true)
		{
			cout<<i<<"\t";
		}
	}	


}

int main()
{
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	SeiveOFErasthosnes(n);
	return 0;	
}


