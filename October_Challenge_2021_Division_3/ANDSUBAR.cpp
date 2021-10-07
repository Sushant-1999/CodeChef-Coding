#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, N, i, j, temp, sum;
    vector<int> arr;
    vector<int> len;
    cin >> T;
    while(T--) {
        cin >> N;
        sum = 1;
        j = 1;
        for(i = 1; i <= N; i++) {
            sum = sum & i;
            if(sum > 0) {
                arr.push_back(i);
            }
            else if(sum == 0 || sum < 0) {
                len.push_back(arr.size());
                arr.clear();
                i = j;
                j++;
            }
        }
        cout << *max_element(len.begin(), len.end()) << endl;
    }

    return 0;

}