// coount the number of even and odd number present inside the array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
        else
        {
            sum++;
        }
    }
    cout<<"Odd Number : "<<sum<<endl;
    cout<<"Even numbers : "<<count<<endl;

}