#include<iostream>
using namespace std;

void bubblesort(int arr[], int n)
{

	for(int i=0;i<n-1;i++)
	{
	       for(int j=0;j<n-i-1;j++)
	       {
	              int temp;
	              if(arr[j]>arr[j+1])
	              {
	                     temp = arr[j];
	                     arr[j]= arr[j+1];
	                     arr[j+1]= temp;
	              }
	       }
	}


}

int main()
{
	int arr[]={1,6,3,9,2,5};
	int n= sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr, n);
	
	for(int i=0;i<n;i++)
	{
	       cout<<arr[i]<<" ";
	}

	return 0;
}