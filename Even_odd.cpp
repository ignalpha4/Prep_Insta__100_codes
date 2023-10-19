#include <bits/stdc++.h>
using namespace std;

/* First if-else approach
int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

        return 0;
}

*/

/*Using ternary operator
int main()
{
    int n;
    cin >> n;

    (n % 2 == 0) ? cout << "Even" : cout << "Odd";

    return 0;
}

*/

// using bitwise & operator

int main()
{
    int n;
    cin >> n;

    if (n & 1)
    {
        cout << "Odd";
    }
    else
    {
        cout << "Even";
    }

    return 0;
}