#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n1, n2;
    cin >> n1 >> n2;

    //   n1 >= n2 ? cout << n1 : cout << n2;    using ternary operator

    cout << max(n1, n2) << endl; // using inbulit max function

    return 0;
}