/*
	Author: Praveen Ukkoji
*/
#include <bits/stdc++.h>
using namespace std;

int main() {

	// returns pos of set_bits in 10 -> 1010
	/*
	int x = 10;
	vector<int> bits;
	for (int i = 0; i < 32; i++) {
		if ((1LL << i)&x) {
			bits.push_back(i);
		}
	}
	for (int i = 0; i < bits.size(); i++) {
		cout << bits[i] << " ";
	}
	cout << endl;
	*/

	// basic opr
	/*
	cout << min(1, 2) << endl;
	cout << max(1, 2) << endl;

	vector<int> arr = {1, 2, 3, 4, 5};
	cout << *max_element(arr.begin(), arr.end()) << endl; // range can be changed
	cout << *min_element(arr.begin(), arr.end()) << endl; // range can be changed

	cout << accumulate(arr.begin(), arr.end(), 0) << endl; // range can be changed
	arr.push_back(5);
	cout << count(arr.begin(), arr.end(), 5) << endl; // range can be changed
	*/

	// string concatenation
	// s = s + 'a'; O(s.size()) -> because it creates copy
	// s.push_back("a"); O(1) -> better way

	return 0;
}