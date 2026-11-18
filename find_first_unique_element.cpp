#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 20, 40};
    int n = 5;
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count == 1)
        {
            cout << "First unique element: " << arr[i];
            break;
        }
    }
    return 0;
}