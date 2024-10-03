#include<iostream>
using namespace std;

void Insertionsort(int arr[],int n , int i)
{
        int temp=arr[i];
        int j=i-1;
        while (j >= 0 && arr[j] > temp)
           {
               
               arr[j+1] = arr[j]; 
               j = j-1;
           }
           
           arr[j+1] = temp;  
}

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int arr[]={12,11,2,5,9,1};
    int n=6;

    for(int i=0;i<n;i++)
    Insertionsort(arr,n,i);
    print(arr,n);
    return 0;
}