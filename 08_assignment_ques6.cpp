#include<iostream>
using namespace std;
int checkNumber(int arr[],int n)
{
    int leftMax[n];
    leftMax[0]=INT32_MIN;

    for(int i=1;i<n;i++)
    {
        leftMax[i] = max(leftMax[i-1],arr[i-1]);
    }

    int rightMin;
    rightMin = INT32_MAX;

    for(int i=n-1;i>=0;i--)
    {
        if(leftMax[i]<arr[i] && arr[i]<rightMin)
        {
            return arr[i];
        }
        rightMin = min(rightMin,arr[i]);
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<checkNumber(arr,n);
}