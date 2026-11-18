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

    void operator !()
    {
        x = !x;
        y = !y;
        z = !z;
    }
};

int main()
{
    number N;

    N.getdata(0, 1, 5);

    cout << "Before NOT: ";
    N.display();

    !N;

    cout << "After NOT: ";
    N.display();

    return 0;
}
