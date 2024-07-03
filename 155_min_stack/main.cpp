#include <numeric>

struct StackNode{
    int val;
    int min;
    StackNode(int val, int min):
        val(val),
        min(min)
    {}
};

class MinStack {
public:
    MinStack() {
        minEl = std::numeric_limits< int >::max();
    }

    void push(int val) {
        StackNode tempNode(val, minEl);
        data.push(tempNode);
        if (val < minEl)
        {
            minEl = val;
        }
    }

    void pop() {
        StackNode topNode = data.top();
        if (topNode.val == minEl)
        {
            minEl = topNode.min;
        }
        data.pop();
    }

    int top() {
        return data.top().val;
    }

    int getMin() {
        return minEl;
    }
private:
    std::stack< StackNode > data;
    int minEl;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
