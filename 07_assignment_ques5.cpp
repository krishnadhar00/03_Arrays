// find the number which is not presesnt in the given range.
// BAsically what we have done is that we have calculated the sum and then if we calculate the sum of all value which lie from that 0 to range and then subtract it.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];  // calculating the sum.
    }
    int z = (n*(n+1))/2;  // gives the sum of number from 0 to that number 'n'.
    cout<<z-sum;
    
}