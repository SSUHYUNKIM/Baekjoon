#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    if(A == B && A == C) {
        cout << 10000 + A * 1000 << '\n';
    } else if (A == B || A == C) {
        cout << 1000 + A * 100 << '\n';
    } else if (B == C) {
        cout << 1000 + B * 100 << '\n';
    } else {
        cout << max(A,max(B,C)) * 100 << '\n';
    }
}
