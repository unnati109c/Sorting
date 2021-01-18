#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
       int i = l;
       int j = mid+1;
       
       int temp[8];
       
       int k=0;
       
       while(i<=mid && j<=r)
       {
              if(arr[i]<arr[j])
              {
                     temp[k]=arr[i];
                     i++;
                     k++;
              }
              else
              {
                     temp[k]= arr[j];
                     j++;
                     k++;
              }
       }
       while(i<=mid)
       {
                     temp[k]=arr[i];
                     i++;
                     k++;
       }
       
       while(j<=r)
       {
                     temp[k]= arr[j];
                     j++;
                     k++;
       }
       
       for(int m= l, p=0; m<=r;m++, p++)
       {
              arr[m]=temp[p];
       }

}

void MergeSort(int arr[], int l, int r)
{
	if(l<r) 
	{
       int mid = (l+r)/2;
       
       MergeSort(arr, l,mid);
       MergeSort(arr, mid+1, r);
       
       merge(arr, l, mid, r);
	}
}

int main()
{
       int arr[]={9,3,7,5,6,4,8,2};
       
       MergeSort(arr, 0, 7);
       
       for(int i=0;i<8;i++)
       {
              cout<<arr[i]<<" ";
       }
	   return 0;
}