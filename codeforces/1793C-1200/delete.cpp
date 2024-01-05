#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Function to find the median in a sliding window
vector<int> findMedian(vector<int>& arr, int window) {
    vector<int> ans;
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < arr.size(); i++) {
        // Remove the element that's sliding out of the window
        if (i >= window) {
            if (arr[i - window] <= maxHeap.top()) {
                maxHeap.pop();
            } else {
                minHeap.pop();
            }
        }

        // Insert the current element
        if (maxHeap.empty() || arr[i] <= maxHeap.top()) {
            maxHeap.push(arr[i]);
        } else {
            minHeap.push(arr[i]);
        }

        // Balance the heaps
        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } else if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }

        // Store the median for the current window
        if (i >= window - 1) {
            ans.push_back(window % 2 == 0 ? maxHeap.top() : minHeap.top());
        }
    }
    return ans;
}

int main() {
    int n, window;
    cin >> n >> window;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = findMedian(arr, window);
    for (int median : ans) {
        cout << median << " ";
    }
    cout << endl;

    return 0;
}
