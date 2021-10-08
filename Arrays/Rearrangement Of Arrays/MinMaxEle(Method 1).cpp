//A Program to find the minimum and maximum element of an array uisng minimum number of comparisons (Method 1)(Simple Linear Search)
//Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

//Pair struct is used to return two values
struct Pair
{
	int min;
	int max;
};

//Function to get the elements
struct Pair getMinMax(int arr[], int n)
{
	struct Pair minmax;
	int i;
	
	//If there is only one element it returns it as both min and max 
	if(n==1)
	{
		minmax.min=arr[0];
		minmax.max=arr[0];
	}
	
	//If there is more than one element initialize both min and max accordingly
	if(arr[0]>arr[1])
	{
		minmax.max=arr[0];
		minmax.min=arr[1];
	}
	else
	{
		minmax.max=arr[1];
		minmax.min=arr[i];
	}
	
	//Looping throught the array and comparing with the first two elements
	for(int i=2;i<n;i++)
	{
		if(arr[i]>minmax.max)
		{
			minmax.max=arr[i];
			
		}
		else if(arr[i]<minmax.min)
		{
			minmax.min=arr[i];
		}
	}
	
	return minmax;
	
	}
	
	//Driver code
	int main()
	{
		int arr[]={1000,11,445,1,330,3000};
		int arr_size = 6;
		struct Pair minmax = getMinMax (arr,arr_size);
		
		cout<<"Minimum element is: "<<minmax.min<<endl;
		cout<<"Maximum element is: "<<minmax.max<<endl;
		
		return 0;
	}

