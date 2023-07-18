#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 0;

    try
    {
        if (b == 0)
            throw 0;
        cout << a / b << endl;
    }

    catch (...)
    {
        cout << "Thrown from the try block" << endl;
    }

    // catch (int e)
    // {
    //     cout << "Thrown from the try block" << endl;
    // }
    // catch (char err)
    // {
    //     cout << "Thrown from the try block" << endl;
    // }

    cout << "Program ended normally" << endl;

    return 0;
}