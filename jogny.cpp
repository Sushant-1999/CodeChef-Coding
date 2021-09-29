#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int T, N, val, index, K, temp, ans;
    vector<long long int> arr;

    cin >> T;
    while(T--) {
        cin >> N;
        for(int i = 0; i < N; i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        cin >> K;

        //Find val
        for(int i = 0; i < N; i++) {
            if(i == K-1) {
                val = arr[i];
            }
        }

        //sort the array
        sort(arr.begin(), arr.end());
        for(int i = 0;  i < N; i++) {
            if(arr[i] == val) {
                ans = i+1;
            }
        }
        cout << ans << endl;
        arr.clear();
    }
    return 0;

}