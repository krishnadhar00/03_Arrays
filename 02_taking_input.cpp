#include<iostream>
using namespace std;
int main()
{
    int arr1[5];
    for(int i=0;i<5;i++)   // taking input as for loop
    {
        cin>>arr1[i];
    }
    for(int ele : arr1)   // printing the output as for each loop
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    char arr2[5];
    for(char &element : arr2)  // taking input as for each loop note must use & for passing the value as reference
    {
        cin>>element;
    }
    for(int i=0;i<5;i++)  // printing the output as for loop
    {
        cout<<arr2[i]<<" ";
    }
}