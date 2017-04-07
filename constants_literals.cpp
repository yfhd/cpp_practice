#include <iostream>
using namespace std;

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

void f1()
{
    #define N 12
    const int n = 12;

    #undef N
    #define N 21
}

void f2()
{
    cout << N << endl;
    // cout << n << endl;
}

int main()
{
    int area;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;

    f1();
    f2();
    return 0;
}
