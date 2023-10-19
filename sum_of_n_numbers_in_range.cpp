#include <bits/stdc++.h>
using namespace std;

// using for loop
int sum1(int n1, int n2)
{
    int ans = 0;

    for (int i = n1; i <= n2; i++)
    {
        ans = ans + i;
    }

    return ans;
}

// using formula

int sum2(int x, int y)
{
    int ans = y * (y + 1) / 2 - x * (x + 1) / 2 + x; // using formula

    return ans;
}

int main()
{

    int n1, n2;
    cin >> n1 >> n2;

    cout << sum2(n1, n2);

    return 0;
}