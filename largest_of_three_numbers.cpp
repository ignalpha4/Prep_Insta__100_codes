#include <bits/stdc++.h>
using namespace std;

// if else approach

void largest_of_3(int x, int y, int z)
{
    if (x >= y)
    {
        if (x >= z)
        {
            cout << x << " is greatest" << endl;
        }
        else
        {
            cout << z << "is greatest" << endl;
        }
    }
    else if (y >= x)
    {
        if (y >= z)
        {
            cout << y << " is greatest" << endl;
        }
        else
        {
            cout << z << " is greatest" << endl;
        }
    }
}

// appraoch 2 using ternary operator

void largest_of_3_a2(int x, int y, int z)
{
    int temp, ans;

    temp = x >= y ? x : y;
    ans = temp >= z ? temp : z;

    cout << "the largest number is: " << ans << endl;
}

// approach 3 using max function
void largest_of_3_a3(int x, int y, int z)
{
    int temp = max(x, y);
    int ans = max(temp, z);

    // we can write like this as well ans=max(x,max(y,z));

    cout << "The greatest number is : " << ans << endl;
}

int main()
{

    int x, y, z;
    cin >> x >> y >> z;

    largest_of_3_a3(x, y, z);

    return 0;
}