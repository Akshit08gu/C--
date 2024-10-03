#include<iostream>
using namespace std;



void selectsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}

int print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{

    int arr[]={10,2,12,6,9,11};
    int n=6;

    selectsort(arr,n);
    // cout<<
    print(arr,n);
    return 0;
}