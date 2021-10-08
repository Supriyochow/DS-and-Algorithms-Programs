//A C++ Program to find the smallest number evenly divisible by 1 to n, where n is the input
//Time Complexity:- O(n)
//Space Complexity:- O(1)


//Here basically the concept is to find the lcm of the numbers
#include<iostream>
using namespace std;

long long gcd(long long a, long long b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}

long long smallest_Number(long long n)
{
	long long Ans=1;
	for(long long i=1;i<=n;i++)
	{
		Ans=(Ans*i)/gcd(Ans,i);
	}
	
	return Ans;
		
}

//Main Function
int  main()
{
	long long n,Smallest;
	cout<<"Enter the number n: "<<endl;
	cin>>n;
	Smallest=smallest_Number(n);
	cout<<"The Smallest number evenly divisible by 1 to "<<n<<" is "<<Smallest; 
	return 0;
}



