/*
Problem: Find Floor in Sorted Array

Description:
Given a sorted array arr[] and a number x,
find the index of the floor of x.

Floor of x = greatest element smaller than or equal to x.
If floor does not exist, return -1.

Example:
Input:
n = 5
arr = 1 2 4 6 10
x = 5

Output:
2   (because arr[2] = 4 is floor of 5)

Approach:
Traverse array and update index whenever arr[i] <= x.
Return last stored index.
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to find floor index
int findFloor(vector<int>& arr, int x) {

    int ans = -1;

    // Traverse array
    for(int i = 0; i < arr.size(); i++) {

        if(arr[i] <= x) {
            ans = i;  // update floor index
        }
    }

    return ans;
}

int main() {

    int n, x;

    // input size
    cin >> n;

    vector<int> arr(n);

    // input array elements
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // input target value
    cin >> x;

    // output result
    cout << findFloor(arr, x);

    return 0;
}