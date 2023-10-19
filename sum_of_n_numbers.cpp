#include <bits/stdc++.h>
using namespace std;

/* using for loop
int main()
{
    int n;

    cin >> n;

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        ans = ans + i;
    }

    cout << "Sum of N natural numbers is: " << ans;

    return 0;
}

*/

int main()
{
    int n;
    cin >> n;

    cout << n * (n + 1) / 2 << endl; // using formula

    return 0;
}