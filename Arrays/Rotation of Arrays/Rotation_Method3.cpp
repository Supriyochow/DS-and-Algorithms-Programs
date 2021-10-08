//A C++ program to rotate an array using Method-3 (Using Juggling Algorithm)
#include<bits/stdc++.h>
using namespace std;

//Program to find GCD of the number
int gcd(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}

void rotateArray(int arr[],int d, int n)
{
	int i,j,k,temp;
	//Calcultaing number of sets
	int sets= gcd(d,n);
	//cout<<sets;
	for(int i=0;i<sets;i++)
	{
		temp=arr[i];
		j=i;
		
		while(1)
		{
			k=(j+d)%n;
			
			if(k==i)
			break;
			
			
			arr[j]=arr[k];
			
		}
		arr[j]=temp;
	}
	
	for(int i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

void Display(int arr[], int n)
{
	for(int i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};	//array taken
	int n=sizeof(arr)/sizeof(arr[0]);		//number of elements of array
	cout<<"Before rotating we get: "<<endl;
	Display(arr,n);
	
	cout<<"\nAfter rotating we get: "<<endl;
	rotateArray(arr,3,n);
	//Display(arr,n);
	return 0;
	
}
