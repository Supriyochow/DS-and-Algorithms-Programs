//A Cpp Program to Bubble sort an Array 
//Time Complexity: O(n^2)
//Space Complexity: O(1)	As it is an In-Place Sorting Algorithm

#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void BubbleSort(int arr[], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			{
					if(arr[j]>arr[j+1])
						swap(&arr[j],&arr[j+1]);
			}
}

void Display(int arr[], int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
}

int main()
{
	int size, arr[20],ele;
	int TSearch;
	cout<<"Enter the size of the array : ";
	cin>>size;
	cout<<"Enter the element of the array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Before Sorting we get: "<<endl;
	Display(arr,size);
	
	//Sorting the array
	BubbleSort(arr,size);
	
	cout<<"After Sorting the array is: "<<endl;
	Display(arr,size);
	
	return 0;
}
