#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout<<"Unique element: "<<ans;
    return 0;
}