#include<iostream>
#include <climits>
using namespace std;

int FindMinimumInArray(int arr[],int size)
{
    int MinAns = INT_MAX ;
    for(int i=0;i<size;i++)
{
    if(arr[i]<MinAns)
    {
        MinAns=arr[i];
    }
}
return MinAns;
}
int main()
{
    int arr[]={12,2,22,53,1,13};
    int n=6;
              
    int MinAns = INT_MAX ;

    cout<<FindMinimumInArray(arr,n);
    // cout<<INT64_MAX;
    return 0;

}