class FrontMiddleBackQueue {
public:
    deque<int> left, right;

    void balance() {
        while(left.size() > right.size()) {
            right.push_front(left.back());
            left.pop_back();
        }

        while(right.size() > left.size() + 1) {
            left.push_back(right.front());
            right.pop_front();
        }
    }

    FrontMiddleBackQueue() {
    }

    void pushFront(int val) {
        left.push_front(val);
        balance();
    }

    void pushMiddle(int val) {
        if(left.size() < right.size()) {
            left.push_back(val);
        }
        else {
            right.push_front(val);
        }
    }

    void pushBack(int val) {
        right.push_back(val);
        balance();
    }

    int popFront() {
        if(left.empty() && right.empty())
            return -1;

        int ans;

        if(!left.empty()) {
            ans = left.front();
            left.pop_front();
        }
        else {
            ans = right.front();
            right.pop_front();
        }

        balance();
        return ans;
    }

    int popMiddle() {
        if(left.empty() && right.empty())
            return -1;

        int ans;

        if(left.size() == right.size()) {
            ans = left.back();
            left.pop_back();
        }
        else {
            ans = right.front();
            right.pop_front();
        }

        balance();
        return ans;
    }

    int popBack() {
        if(left.empty() && right.empty())
            return -1;

        int ans;

        if(!right.empty()) {
            ans = right.back();
            right.pop_back();
        }
        else {
            ans = left.back();
            left.pop_back();
        }

        balance();
        return ans;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */