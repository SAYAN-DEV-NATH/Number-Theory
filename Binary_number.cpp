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
    int k = 2;

    printBinary(a);

    ((a >> k) & 1 != 0) ? cout << "set_bit_on\n" : cout << "unset_bit_off\n";

    printBinary(a | (1 << k));    // bit set -> convert
    printBinary(a & (~(1 << k))); // bit unset -> convert

    printBinary(a ^ (1 << k)); // toggle means -> no takle off, off takle on kora
    printBinary(a ^ (1 << 3)); // xor -> same==0, not_same==1
    
    int x = __builtin_popcount(a); // count set bit
    cout << x << endl;

    return 0;
}
