#include<iostream>
using namespace std;

int TotalOccurence(int arr[],int size,int target)
{
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    int cnt=0;

    while(start<=end)
    {
        
        if(arr[mid]==target)
        {
            cnt++;     
        }

        else if(target>arr[mid])
        {
            start=mid+1;
        }
            else if(target<arr[mid])
        {
            end=mid-1;
        }
       mid = (start+end)/2;


    }
    return cnt;
}

int main()
{
    int arr[]={10,20,30,30,30,40,50};
    int n=7;
    int target = 30;

    int ans = TotalOccurence(arr,n,target);
    cout<<ans;

    return 0;

}