#include <queue>
#include <vector>
#include <cmath>
using namespace std;

class MedianFinder {
public:

    priority_queue<int> left_max_heap; 
    // Max Heap (stores smaller half)

    priority_queue<int, vector<int>, greater<int>> right_min_heap; 
    // Min Heap (stores larger half)

    MedianFinder() {
    }

    void addNum(int num) {

        // Step 1: Insert into appropriate heap
        if (left_max_heap.empty() || num < left_max_heap.top()) {
            left_max_heap.push(num);
        } 
        else {
            right_min_heap.push(num);
        }

        // Step 2: Balance heaps
        if (left_max_heap.size() > right_min_heap.size() + 1) {
            right_min_heap.push(left_max_heap.top());
            left_max_heap.pop();
        }
        else if (left_max_heap.size() < right_min_heap.size()) {
            left_max_heap.push(right_min_heap.top());
            right_min_heap.pop();
        }
    }

    double findMedian() {

        if (left_max_heap.size() == right_min_heap.size()) {
            return (left_max_heap.top() + right_min_heap.top()) / 2.0;
        } 
        else {
            return left_max_heap.top();
        }
    }
};
