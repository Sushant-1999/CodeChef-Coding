#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, i, j, N;
    string first, last, res;
    getline(cin, res);
    cin >> N;
    while(N--) {
        getline(cin, first);
        getline(cin, last);

        if(res >= first) {
            cout << 1 << endl;
            
        }
        else if(res <= last) {
            cout << 1 << endl;
            
        }
        else {
            cout << 0 << endl;
        }
    }
    return 0;

    
}