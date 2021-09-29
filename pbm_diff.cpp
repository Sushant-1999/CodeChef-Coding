
#include <bits/stdc++.h>
using namespace std;

// This function prints all distinct elements
int countDistinct(vector<int> arr, int n)
{
	// Creates an empty hashset
	unordered_set<int> s;

	// Traverse the input array
	int res = 0;
	for (int i = 0; i < n; i++) {

		// If not present, then put it in
		// hashtable and increment result
		if (s.find(arr[i]) == s.end()) {
			s.insert(arr[i]);
			res++;
		}
	}

	return res;
}

// Driver program to test above function
int main()
{
	int T, i, j, A1, A2, A3, A4, count;
    cin >> T;
    
    while(T--) {
        cin >> A1 >> A2 >> A3 >> A4;
        vector<int> arr = {A1, A2, A3, A4};
        count = countDistinct(arr, 4);
        count = count / 2;
        cout << count << endl;
        arr.clear();
        
    }
	return 0;
}
