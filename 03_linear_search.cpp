// if element present give the ith location else return -1.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n];
    int size = sizeof(arr1)/sizeof(arr1[0]);
    int key;
    cin>>key;
    int ans = -1;
    for(int i=0;i<size;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<size;i++)
    {
        if(arr1[i]==key)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}