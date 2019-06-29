#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define OUT(a) cout << (a) << "\n"
#define ll long long
#define uint unsigned int
#define ushort unsigned short
#define ulong unsigned long

ll MOD = 10e9 + 7;

// 足し算
int add_no_arithm(int a, int b) {
    if (b==0) return a;
    int sum = a^b;
    int carry = (a&b) << 1;
    return add_no_arithm(sum, carry);
}

int add_no_arithm2(int a, int b) {
    int tmp;
    do {
        tmp = a^b;
        b = (a&b) << 1;
        a = tmp;
    } while (b!=0);
    return a;
}

int main() {
    int a = 20;
    int b = 9;
    printf("%d + %d = %d\n", a,b,add_no_arithm2(a,b));
    return 0;
}