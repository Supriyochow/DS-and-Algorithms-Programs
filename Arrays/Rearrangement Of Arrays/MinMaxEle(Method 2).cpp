//A Program to find the minimum and maximum element of an array uisng minimum number of comparisons (Method 2)(Tournament Method)
//Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

//structure to return two values
struct Pair
{
	int min;
	int max;
};


struct Pair getMinMax(int arr[], int low, int high)
{
	struct Pair minmax, mml,mmr;
	
	//If there is only one element
	if(low==high)
	{
		minmax.max=arr[low];
		minmax.min=arr[low];
		return minmax;
	}
	
	//If there are two elements
	
		if(high==low+1)
		{
			if(arr[low]>arr[high])
			{
				minmax.min=arr[high];
				minmax.max=arr[low];
			}
			else
			{
				minmax.max=arr[high];
				minmax.min=arr[low];
			}
			return minmax;
		}
		
		//IF there are more than two elements
		int mid=(low+high)/2;
		mml = getMinMax(arr, low, mid);
		mmr= getMinMax(arr, mid+1,high);
		
		//Comparing minimums of two parts
		if(mml.min<mmr.min)
		{
			minmax.min=mml.min;
			
		}
		else
		{
			minmax.min=mmr.min;
		}
		
		//Comparing maximums of two parts
		if(mml.max>mmr.max)
		{
			minmax.max=mml.max;
		}
		else
		{
			minmax.max=mmr.max;
		}
		
		return minmax;
	
}

//Driver Code
int main()
{
	int arr[]={1000,11,445,1,330,3000};
	int arr_size=6;
	struct Pair minmax = getMinMax(arr,0,arr_size-1);
	
	cout<<"Minimum element is: "<<minmax.min<<endl;
	cout<<"Maximum element is: "<<minmax.max<<endl;
	
	return 0;
}
