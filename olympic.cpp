#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {

    long long int T, G1, S1, B1, G2, S2, B2, tm1, tm2;

    cin >> T;
    while(T--) {
        cin >> G1 >> S1 >> B1;
        cin >> G2 >> S2 >> B2;

        tm1 = G1 + S1 + B1;
        tm2 = G2 + S2 + B2;

        if(tm1 > tm2) {
            cout << "1" << endl;
        }
        else if(tm2 > tm1) {
            cout << "2" << endl;
        }
        
    }
    return 0;
    
}