#include<iostream>
using namespace std;

int BubbleSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{

    int arr[]={12,2,21,23,13,34};
    int n=6;

    BubbleSort(arr,n);
    
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<"  ";
    }
    
    return 0;
}

