//A Cpp Program to Move all zeros in the end
//A Code by Supriyo Chowdhury
//Here we will use the partition logic of quick sort
//Time Complexity: O(n)
//Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

void Partition(vector<int>& arr,int start, int end)
{
	int Pivot=0;
	//int j=0;
		
	for(int i=start;i<=end;i++)
	{	
		if(arr[i]!=0)
		{
			swap(arr[i],arr[Pivot]);
			Pivot++;
		}
	}

}



int main()
{
	vector<int> arr;
	int n,t;
	cout<<"Enter the size of the array of 0s and 1s: "<<endl;
	cin>>n;
	
	cout<<"Enter the elements of the array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		arr.push_back(t);
	}
		
	cout<<"The Inputed Array is: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
		
	int start=0;
	int end=arr.size()-1;
	
	
	Partition(arr,start,end);

	cout<<"Array After Arranging:"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
	
	
}
