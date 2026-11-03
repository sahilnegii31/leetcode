class MinStack {
public:
    stack<int> s;
    stack<int> mins;

    MinStack() {}

    void push(int value) {
        s.push(value);

        if(mins.empty() || mins.top() >= value) {
            mins.push(value);
        }
    }

    void pop() {
        if(s.empty()) return;

        int temp = s.top();
        s.pop();

        if(!mins.empty() && mins.top() == temp) {
            mins.pop();
        }
    }

    int top() {
        return s.empty() ? -1 : s.top();
    }

    int getMin() {
        return mins.empty() ? -1 : mins.top();
    }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */