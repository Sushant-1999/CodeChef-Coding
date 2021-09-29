#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int num, i, leng, k, rem;
    cin >> num;
    cin >> k;

    vector<long long int> arr;
     
    while(num > 0) {
        rem = num % 10;
        arr.push_back(rem);
        num = num / 10;
    }
    // now got all the digits in the vector.
    reverse(arr.begin(), arr.end());
    leng = arr.size();
    
    if(k > leng) {
        cout << -1 << endl;
    }
    else {
        for(i = 0; i < leng; i++) {
            if(i == k-1) {
                cout << arr[i] << endl;
            }
        }
    }
    return 0;
    

}