#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int T, N, i, j, temp, sum;
    vector<long long int> arr;

    cin >> T;
    while(T--) {
        cin >> N;
        for(i = 0; i < N; i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        // arr is done
        // shuffle even odd;
        for(i = 0; i < N-1; i++) {
            if(arr[i] % 2 == 0 && arr[i+1] % 2 == 1) {
                swap(arr[i], arr[i+1]);
                i = i + 1;
            }
            else if(arr[i] % 2 == 1 && arr[i+1] % 2 == 0) {
                swap(arr[i], arr[i+1]);
                i = i + 1;
            }
        }
        //Printing the array
        for(i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        sum = 0;
        for(i = 0; i < N; i++) {
            temp = (arr[i] + (i+1)) % 2;
            sum = sum + temp;
        } 

        cout << sum << endl;
        arr.clear();
        
    }
    return 0;
}