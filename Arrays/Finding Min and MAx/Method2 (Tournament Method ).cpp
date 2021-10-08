//A CPP Programt o find the minimum and maximum of an array using least number of comparisons

//Method 2: (Tournament Method)
//Time Complexity: O(n)
//Space Complexity: O(1)

#include<iostream>
using namespace std;

struct Pair
{
	int min;
	int max;
};

struct Pair getMinMax(int arr[], int low, int high)
{
	struct Pair minmax, mml, mmr;
	int mid;
	
	//IF there is only one element 
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
			
		
		minmax.max=arr[low];
		minmax.min=arr[high];
		
	}
		else
		{
			minmax.max=arr[high];
			minmax.min=arr[low];
		}
	}
	
	//If there are more than 2 elements
	//Setting the mid element
	mid=(high+low)/2;
	mml=getMinMax(arr,low,mid);
	mmr=getMinMax(arr,mid+1,high);
	
	//Comapring minimum of two parts
	if(mml.min<mmr.min)
		minmax.min=mml.min;
	else
		minmax.min=mmr.min;
		
	//Comapring the maximum of two parts
	if(mml.max<mmr.max)
		minmax.max=mmr.max;
	else
		minmax.max=mml.max;
		
	return minmax;				
}

int main()
{
	int arr[]={1000,11,445,1,330,3000};
	
	int arr_size=6;
	
	struct Pair minmax=getMinMax(arr,0,arr_size-1);
	
	cout<<"Minimum element is "<<minmax.min<<endl;
	cout<<"Maximum element is "<<minmax.max<<endl;
	
	return 0;
}

