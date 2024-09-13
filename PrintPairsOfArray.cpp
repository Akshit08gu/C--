#include<iostream>
using namespace std;

void pairs(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
    {
        cout<<arr[i]<<","<<arr[j];
        cout<<endl;
    }

    }
}

int main()
{
    int arr[]={10,20,30};
    int n=3;

    pairs(arr,n);
    return 0;
}