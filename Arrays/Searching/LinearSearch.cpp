//A C++ Program to apply linear search in an 1-D Array
//Time Complexity: O(n)
//Space Complexity: O(1)



#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int k)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==k)
			return i;
	}
	return -1;
	
}

int main()
{
	//Enter the array
	int size, arr[20],ele;
	int lSearch;
	cout<<"Enter the size of the array : ";
	cin>>size;
	cout<<"Enter the element of the array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element to be searched"<<endl;
	cin>>ele;
	lSearch=linearSearch(arr,size,ele);
	if(lSearch==-1)
	{
		cout<<"Element Not Found" <<endl;
	}
	cout<<"The element is present in index number: "<<lSearch<<endl;
	
	return 0;
}
