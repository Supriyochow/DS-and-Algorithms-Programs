//A C++ program to perform merge sort on an array
//Time Complexity: O(nlogn)
//Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;


void merge(int arr[], int mid, int high, int low)
{
	int b[high+1];
	int i=low;
	int j=mid+1;
	int k=low;
	
	while(i<=mid && j<=high)
	{
		if(arr[i]<=arr[j])
		{
			b[k]=arr[i];
			i++;
		}
		else
		{
			b[k]=arr[j];
			j++;
		}
		k++;
	}
	
	while(i<=mid)
	{
		b[k]=arr[i];
		i++;
		k++;
	}
	
	while(j<=high)
	{
		b[k]=arr[j];
		j++;
		k++;
	}
	
	for(int l=low; l<=high;l++)
		arr[l]=b[l];
	
		
	
	
	
	
}

void mergeSort(int arr[], int low, int high)
{
	if(low<high)
	{
	
	int mid=low+(high-low)/2;
	
	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);
	merge(arr,mid,high,low);
}
	
	
}

//Display Function
void Display(int arr[], int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
}



int main()
{
	int size, arr[100],ele;
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
	mergeSort(arr,0,size-1);
	
	cout<<"After Sorting the array is: "<<endl;
	Display(arr,size);
	return 0;
}
