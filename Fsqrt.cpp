#include <bits/stdc++.h>
using namespace std;

void print_root(int n)
{
    cout << rint(sqrt(n)) << endl;
}

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        print_root(n);
    }
    return 0;
}
