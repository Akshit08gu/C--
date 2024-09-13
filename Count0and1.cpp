#include<iostream>
using namespace std;
int main()
{

    int arr[]={0,1,1,0,1,0,1};
    int n=7;
    int count1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count1=count1+1;
        }
        // cout<<count;
    }
    cout<<count1<<endl;
    cout<<n-count1;


    return 0;
}