#include<iostream>
using namespace std;

void bubblesort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    
    int arr[]={12,1,5,4,11};
    int n=5;
    bubblesort(arr,n);


    return 0;
}
