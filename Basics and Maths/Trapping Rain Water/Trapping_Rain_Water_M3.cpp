//A C++ Program to perform the trapping of the water using method 3
//Time Complexity: O(n)
//Space Complexity: O(1)


#include<bits/stdc++.h>
using namespace std;

//Function to count the Water trapped in the blocks
int Find_Water_Trapped(int arr[],int n)
{
	//Taking two variables instead of the arrays
	int left_MAX=0, right_MAX=0, total=0;
	
	//pointers to traverse the array
	int low=0, high=n-1;
	
	
	while(low<=high)


	{
		if(arr[low]<arr[high])
		{
			if(arr[low]>left_MAX)
			{
				left_MAX=arr[low];

			}
			else
			{
				total=total+(left_MAX-arr[low]);
				low++;
			}
		}
		
		else
		{
			if(arr[high]>right_MAX)
			{
				right_MAX=arr[high];
			}
			else
			{
				total=total+(right_MAX-arr[high]);
				high--;
			}
		}
		
	}
		return total;		
} 


int main()
{
	int arr[20],size,i;
	//Inputting the array
	cout<<"Enter the size of the array:"<<endl;
	cin>>size;
	cout<<"Enter the elements of the array: "<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int Total;
	Total= Find_Water_Trapped(arr,size);
	cout<<"The total water stored in the array is: "<<Total<<endl;
	return 0;
}
