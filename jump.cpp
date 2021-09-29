#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, H, S, i, j, temp, jump_cnt = 0, flag;
    vector<int> arr;
    cin >> N;
    cin >> H;
    cin >> S;
    for(i = 0; i < N; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    for(i = 0; i < N; i++) {
        for(j = 0; j <= arr[i];) {
            j = j + H - S;
            jump_cnt++;
        }
    }

    cout << jump_cnt << endl;
    return 0;
    
}