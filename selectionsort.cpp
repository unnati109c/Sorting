#include<iostream>
using namespace std;

void selectionsort(int arr[], int n)
{

	for(int i=0;i<n-1;i++)
       {
              int min_index= i;
              for(int j=i+1;j<n;j++)
              {
                     if(arr[j]<arr[min_index])
                     {
                            min_index=j;
                     }
              }
              
              int temp= arr[min_index];
              arr[min_index]=arr[i];
              arr[i]=temp;
       }


}

int main()
{
	int arr[]={1,6,3,9,2,5};
	int n= sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr, n);
	
	for(int i=0;i<n;i++)
	{
	       cout<<arr[i]<<" ";
	}

	return 0;
}