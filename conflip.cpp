#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, G, N, I, Q, i, j, temp, len, ctH, ctT;
    vector<char> arr;

    cin >> T;
    while(T--) {
        cin >> G;
        for(i = 0; i < G; i++) {
            cin >> N >> I >> Q;
            len = N;
            if(I == 1) {
                while(N--) {
                    arr.push_back('H');
                }
                N = len;
            }
            else if(I == 2) {
                while(N--) {
                    arr.push_back('T');
                }
            }
            N = len;
            for(i = 0; i < N; i++) {
                for(j = 0; j <= i; j++) {
                    if(arr[i] == 'H') {
                        arr[i] = 'T';
                    }
                    else if(arr[i] == 'T') {
                        arr[i] = 'H';
                    }
                }
            }
            // Now done with flipping
            // if Q = 1 then H or Q = 2 then T
            ctH = 0; ctT = 0;
            for(i = 0; i < N; i++) {
                if(arr[i] == 'H') {
                    ctH++;
                }
                else if(arr[i] == 'T') {
                    ctT++;
                }
            }
            if(Q == 1) {
                cout << ctH << endl;
            }
            else if(Q == 2) {
                cout << ctT << endl;
            }
            arr.clear();
            
        }
    }
    return 0;

}