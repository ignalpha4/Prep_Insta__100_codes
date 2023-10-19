#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << "Zero" << endl;
    }
    else
    {
        n > 0 ? cout << "Positive" : cout << "Negative"; // using ternary operator
    }

    return 0;
}

// can also be done using if else
