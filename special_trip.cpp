#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, i, j, N, T, count = 0;
    cin >> T;

    while(T--) {
        cin >> N;
        C = 1; count = 0;
        for(A = 1; A <= N; A++) {
            for(B = 1; B <= N; B++) {
                for(C = 1; C <= N; C++) {
                    if((A % B == C) && (B % C == 0)) {
                        count++;
                    }
                }
            }
        }

        cout << count << endl;

    }
    return 0;
    
}