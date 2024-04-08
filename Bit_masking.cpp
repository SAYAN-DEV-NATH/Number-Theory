#include <bits/stdc++.h>
using namespace std;

int main()
{
    int workers, days, day;
    cin >> workers;

    vector<int> bit_masks(workers, 0);
    for (int i = 0; i < workers; ++i)
    {
        cin >> days;
        int mask = 0;
        for (int j = 0; j < days; ++j)
        {
            cin >> day;
            mask = (mask | (1 << day));
        }
        bit_masks[i] = mask;
    }

    int mx_days = INT_MIN, person1, person2;
    for (int i = 0; i < workers; ++i)
    {
        for (int j = i + 1; j < workers; ++j)
        {
            int intersection = (bit_masks[i] & bit_masks[j]);
            int common_days = __builtin_popcount(intersection);

            if (common_days > mx_days)
                person1 = i, person2 = j;
            mx_days = max(mx_days, common_days);

            // cout << i << " " << j << " " << common_days << endl;
        }
    }

    cout << person1 << " " << person2 << " " << mx_days << endl;
    return 0;
}