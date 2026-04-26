/*
Problem: Count frequency of target in array

Approach:
Traverse array and count occurrences of target.
Return the count.
*/

#include <iostream>
#include <vector>
using namespace std;

int countFreq(vector<int>& arr, int target) {
    int count = 0;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == target)
            count++;
    }

    return count;
}

int main() {

    int n, target;
    
    // input size
    cin >> n;

    vector<int> arr(n);

    // input array elements
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // input target
    cin >> target;

    // output result
    cout << countFreq(arr, target);

    return 0;
}