//A Cpp Program to Insertion Sort an array 
//Time Complexity: O(n^2)
//Space Complexity: O(1)	As it is an in-place sorting algorithm

#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{
	int j,key;
	for(int i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		
		arr[j+1]=key;
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
	InsertionSort(arr,size);
	
	cout<<"After Sorting the array is: "<<endl;
	Display(arr,size);
	
	return 0;
}

