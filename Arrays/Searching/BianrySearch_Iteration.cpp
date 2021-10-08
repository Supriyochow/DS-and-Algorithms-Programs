//A CPP program to Binary Search an element in an arrray using Recursive approach
//Time Complexity: O(logN)
//Space Complexity:O(1)

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int l, int r, int x)
{
	while(r>=l)
{
	int mid=l+(r-l)/2;
	
	//if the element is equal to the mid element then it must return the index
	if(arr[mid]==x)
		return mid;
	
	//if the element is greater than the mid element then right part of the array should be accessed
	if(arr[mid]<x)
		l=mid+1;
	
	//if the element is lesser than the mid element then the left part of the array should be accesed
	if(arr[mid]>x)
		r=mid-1;
		
	
	
	
}
	//If no element is found return --1
	return -1;

}


//Driver function
int main()
{	
	int size, arr[20],ele;
	int BSearch;
	cout<<"Enter the size of the array : ";
	cin>>size;
	cout<<"Enter the element of the array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element to be searched"<<endl;
	cin>>ele;
	BSearch=BinarySearch(arr,0,size,ele);
	if(BSearch==-1)
	{
		cout<<"Element Not Found" <<endl;
	}
	cout<<"The element is present in index number: "<<BSearch<<endl;
	
	
	
	return 0;
}
