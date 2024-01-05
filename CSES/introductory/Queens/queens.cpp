#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to generate all possible subsets of a given list
vector<int> generateSubsets(vector<int>& arr) {
    int n = arr.size();
    vector<int> subsets;
    
    // Iterate over all possible subsets using bitwise operations.
    // The explanation of this code is in "Complete Search method 2"
    for (int mask = 0; mask < (1 << n); ++mask) {
        int sum = 0;
        // Calculate the sum for each subset
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                sum += arr[i];
            }
        }
        // Add each sum into subsets
        subsets.push_back(sum);
    }
    
    return subsets;
}

// Function to check if it is possible to choose numbers from the list
// so that their sum is equal to the target (x)
bool isPossibleSum(vector<int>& arr, int x) {
    int n = arr.size();

    // Divide the list into two halves
    int firstHalfSize = n / 2;
    vector<int> firstHalf(arr.begin(), arr.begin() + firstHalfSize);
    vector<int> secondHalf(arr.begin() + firstHalfSize, arr.end());

    // Generate all possible subsets for both halves
    vector<int> subsetsFirst = generateSubsets(firstHalf);
    vector<int> subsetsSecond = generateSubsets(secondHalf);

    // Sort the subsets of the second half for efficient search. This substes contains the sum of each half
    sort(subsetsSecond.begin(), subsetsSecond.end());

    // Search for combinations that sum to the target in both halves
    for (int sum : subsetsFirst) {
        int complement = x - sum;

        // Use binary search to find the complement in the sorted subsets
        if (binary_search(subsetsSecond.begin(), subsetsSecond.end(), complement)) {
            return true;  // Combination found
        }
    }

    return false;  // No combination found
}

int main() {
    // Example usage
    vector<int> arr = {2, 4, 5, 9};
    int target1 = 15;

    // Check if it is possible to form the sum for target1
    if (isPossibleSum(arr, target1)) {
        cout << "It is possible to form the sum " << target1 << " from the list." << endl;
    } else {
        cout << "It is NOT possible to form the sum " << target1 << " from the list." << endl;
    }

    return 0;
}
