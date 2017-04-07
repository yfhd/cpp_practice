#include <iostream>
using namespace std;

int main()
{
    typedef int feet;
    feet distance = 19;
    cout << distance << endl;    

    enum color { red, green, blue } c;
    c = blue;
    cout << c << endl;

    switch (c)
    {
        case red: 
            cout << "color is red" << endl;
            break;
        case blue:
            cout << "color is blue" << endl;
            break;
        default:
            break;
    }

    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

    return 0;
}
