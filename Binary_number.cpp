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
    int a = 5;
    int i = 2; // kth number
    printBinary(a);

    ((a >> i) & 1 != 0) ? cout << "set_bit_on\n" : cout << "unset_bit_off\n";

    printBinary(a | (1 << i));    // bit set -> convert
    printBinary(a & (~(1 << i))); // bit unset -> convert

    printBinary(a ^ (1 << i)); // toggle means -> xor
    printBinary(a ^ (1 << 3)); // xor -> same==0, not_same==1

    return 0;
}