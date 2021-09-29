#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int N, K, temp, i, first, last;
    vector<int> arr;

    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    //Now got the array.
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    //Now make the pair and print it.
    K = N % 2;
    first = 0;
    last = N-1;
    if(K == 0) {
        for(i = 0; i < N/2; i++) {
            cout << arr[first] << " ";
            cout << arr[last] << endl;
            first++;
            last--;
        }
    }
    else if(K == 1) {
        for(i = 0; i < N/2; i++) {
            cout << arr[first] << " ";
            cout << arr[last] << endl;
            first++;
            last--;
        }
        cout << arr[first] << " ";
        cout << 0 << endl;
    }

    return 0;
    
}