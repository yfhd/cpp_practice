#include <iostream>
using namespace std;

int g = 20;

int fun1(int a, int b) {
    g = a + b;
    cout << "The modified global var is: " << g << endl;
    return 0;
}

int fun2() {
    cout << "Now the global variable is: " << g << endl;
}

int main()
{
    int a, b;

    a = 10;
    b = 20;
    g = a + b;

    cout << g << endl;

    {
        int b = 1; 
        cout << "b = " << b << endl;
    }

    cout << "b = " << b << endl;

    fun2();
    fun1(10, 10);
    fun2();

    return 0;
}
