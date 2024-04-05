#include <bits/stdc++.h>
using namespace std;

void printBinary(int a)
{
    for (int i = 5; i >= 0; --i)
        cout << ((a >> i) & 1);

    cout << '\n';
}
int main()
{
    int a = 2;
    int i = 1;
    printBinary(a);

    (a & (1 << i) != 0) ? cout << "setbit\n" : cout << "notsetbit\n";
    return 0;
}