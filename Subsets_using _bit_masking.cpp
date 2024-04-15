// Subsets_using _bit_masking
//_Sayan_Dev_Nath_
// 15-04-2024  19:55:12
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    // for (int i = 0; i < (1 << n); ++i)  // 2^n == (1<<n)
    // {
    //     for (int j = 0; j < n; ++j)
    //     {
    //         if ((i >> j) & 1)  // set bit search
    //             cout << "1";
    //         else
    //             cout << "0";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < (1 << n); ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if ((i >> j) & 1)
                cout << a[j];
        }
        cout << endl;
    }
    return 0;
}