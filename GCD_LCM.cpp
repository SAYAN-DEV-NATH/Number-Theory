// GCD_LCM
//_Sayan_Dev_Nath_
// 13-04-2024  22:27:12 
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}
int main() {
    int a, b; 
    cin >> a >> b;
    cout << gcd(a,b) << endl; // O(logN)
    // GCD builtin function
    cout << __gcd(a,b) << endl;

    // LCM
    cout << (a*b)/__gcd(a,b) << endl;
    return 0;
}