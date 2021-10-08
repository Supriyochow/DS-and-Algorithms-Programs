//A CPP Program to Ternary Search an element in an array using Recursive Approach
//Time Complexity: O(log3N)
//Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int TernarySearch(int arr[], int l, int r, int x)
{
	if(r>=l)
	{
	int mid1=l+(r-l)/2;
	int mid2=r-(r-l)/2;

	if(arr[mid1]==x)
		return mid1;
	
	if(arr[mid2]==x)
		return mid2;


	//Checking for next groups
	if(arr[mid1]>x)
		return TernarySearch(arr,l,mid1-1,x);
	
	else if(arr[mid2]<x)
		return TernarySearch(arr,mid2+1,r,x);
	
	else
		return TernarySearch(arr,mid1+1,mid2-1,x);
	}
	return -1;

}

//Driver function
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
	cout<<"Enter the element to be searched"<<endl;
	cin>>ele;
	TSearch=TernarySearch(arr,0,size,ele);
	if(TSearch==-1)
	{
		cout<<"Element Not Found" <<endl;
	}
	cout<<"The element is present in index number: "<<TSearch<<endl;
	
	
	
	return 0;
}
