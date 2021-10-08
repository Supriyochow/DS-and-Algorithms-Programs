//A CPP program to Quick Sort an array
//Time Complexity: O(nlogn)
//Space Complexity: O(1)
//This program takes last element as pivot element 

#include<bits/stdc++.h>
using namespace std;



//Swap Function
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}


//Partition Function

int partition(int arr[], int low, int high)
{
	//Getting the pivot element
	int pivot=arr[high];
	
	//Getting the index of smaller element
	int i=low-1;
	
	//Traversing through the array
	for(int j=low;j<=high-1;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	
	swap(&arr[i+1], &arr[high]);
	return i+1;
}


//Function to quick Sort
void QuickSort(int arr[], int low, int high)
{
	if(low<high)
	{
	
	//Getting the partion index
	int pi=partition(arr,low,high);
	
	//Separately sort elements before partition and after partition
	QuickSort(arr,low,pi-1);
	QuickSort(arr,pi+1,high);
	
}
}

//Display Function
void Display(int arr[], int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
}


//Driver Function
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
	QuickSort(arr,0,size-1);
	
	cout<<"After Sorting the array is: "<<endl;
	Display(arr,size);
	return 0;
}
