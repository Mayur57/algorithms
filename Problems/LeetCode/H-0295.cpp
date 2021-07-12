#include<bits/stdc++.h>

using namespace std;

class MedianFinder {
public:
    priority_queue<int> right, left;

    MedianFinder() {
        //no code
    }

    void addNum(int num) {
        left.push(num);
    }

    double findMedian() {
        size_t size = left.size();
        if (size % 2 != 0) {
            for (int i = 0; i <= size / 2; i++) {
                right.push(-left.top());
                left.pop();
            }
            double result = -right.top();
            while (!right.empty())
            {
                left.push(-right.top());
                right.pop();
            }
            return result;
        }
        else {
            for (int i = 0; i < size / 2; i++) {
                right.push(-left.top());
                left.pop();
            }
            cout << left.top() << "\t" << -right.top() << "\n";
            double result = (double)((left.top() - right.top()) / 2.0);
            while (!right.empty())
            {
                left.push(-right.top());
                right.pop();
            }
            return result;
        }
    }
};

int main() {
    MedianFinder m;
    m.addNum(1);
    m.addNum(2);
    m.addNum(5);
    m.addNum(3);
    m.addNum(4);
    cout<< m.findMedian()<<"\n";
    return 0;
}