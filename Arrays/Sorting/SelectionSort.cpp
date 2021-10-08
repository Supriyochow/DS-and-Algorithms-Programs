//A Cpp program to selection sort an array
//Time Complexity: O(n)
//Space Complexity: O(1) As it is a in-place sorting alogorithm

#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void SelectionSort(int arr[], int n)
{
	int min_index;
	for(int i=0;i<n;i++)
	{
		min_index=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_index])
			{
				min_index=j;
			}
		}
		swap(&arr[i], &arr[min_index]);
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
	SelectionSort(arr,size);
	
	cout<<"After Sorting the array is: "<<endl;
	Display(arr,size);
	return 0;
}
