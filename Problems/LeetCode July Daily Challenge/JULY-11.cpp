#include<bits/stdc++.h>

using namespace std;

class MedianFinder {
    priority_queue<long> small, large;

public:
    void addNum(int num) {
        small.push(num);
        large.push(-small.top());
        small.pop();
        if (small.size() < large.size()) {
            small.push(-large.top());
            large.pop();
        }
    }

    double findMedian() {
        return small.size() > large.size()
                   ? small.top()
                   : (small.top() - large.top()) / 2.0;
    }
};

int main() {
    MedianFinder m;
    m.addNum(1);
    m.addNum(2);
    m.addNum(5);
    m.addNum(3);
    m.addNum(4);
    cout << m.findMedian() << "\n";
    return 0;
}