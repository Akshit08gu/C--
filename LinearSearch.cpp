#include<iostream>
using namespace std;

bool search(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return 1;

        }
        // return 0;

    }
    return 0;
}

int main()
{

    int arr[]={12,21,22,11,5,34};
    int n=6;
    int key=11;

    bool found=search(arr,n,key);
    if(found==1)
    {
        cout<<"Element found!!";
    }


    else
    cout<<"Element not found";
    return 0;
}