//A C++ program to rearrange positive  and negative numbers
//Time Complexity: O(n)
//Space Somplexity: O(1)
#include<bits/stdc++.h>
using namespace std;

class arrange
{
	public:
		void rearrange(int [], int);
		void swap(int *, int *);
		void printArray(int [], int);
};

//We will put positive elements at even indexes and negative elements at negative indexes

void arrange::rearrange(int arr[], int n)
{
	//It is similar to partition process of QuickSort. The idea is to consider 0 as pivot and divide the array aroound it.
	int i=-1;
	for(int j=0;j<n;j++)
	{
		if(arr[j]<0)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	
	//Now all the positive numbers are at the end and the negative numbers at the beginning of array. 
	//Intialize indexes for starting point of positive and negative numbers to be swapped
	int pos=i+1, neg=0;
	
	//Increment the negative index by 2 and positive index by 1, i.e swap every alternate negative number with next positive number
	while(pos<n && neg<pos && arr[neg]<0)
	{
		swap(&arr[neg], &arr[pos]);
		pos++;
		neg+=2;
	}
}

void arrange::swap(int *a, int *b)
{
	int temp = *a;
	*a=*b;
	*b=temp;
}

void arrange::printArray(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	} 
}


//Driver code
int main()
{
	int arr[]={-1,2,-3,4,5,6,-7,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	arrange test;
	test.rearrange(arr,n);
	test.printArray(arr,n);
	return 0;
}
