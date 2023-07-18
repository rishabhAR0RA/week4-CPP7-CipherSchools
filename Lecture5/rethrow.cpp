#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 0;

    try
    {
        try
        {
            if (b == 0)
                throw 0;
            cout << a / b << endl;
        }

        catch (...)
        {
            cout << "Thrown from the try block" << endl;

            throw;
        }
    }

    catch (...)
    {
        cout << "Catched" << endl;
    }

    cout << "Program ended normally" << endl;

    return 0;
}