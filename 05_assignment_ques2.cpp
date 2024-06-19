// add greatest and smallest number present inside the array.
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
    int small = arr[0];
    int large = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large = arr[i];
        }
        if(arr[i]<small)
        {
            small = arr[i];
        }
    }
    cout<<large+small<<endl;
}