#include<iostream>
using namespace std;

class number
{
    int x, y, z;

public:
    void getdata(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    void display()
    {
        cout << x << " " << y << " " << z << "\n";
    }

    void operator ++()
    {
        x++;
        y++;
        z++;
    }
};

int main()
{
    number N;

    N.getdata(10, 20, 30);

    cout << "Before Increment: ";
    N.display();

    ++N;

    cout << "After Increment: ";
    N.display();

    return 0;
}