#include <deque>

class Stack {
private:
    std::deque<int> deque;

public:
    void push(int x) {
        deque.push_back(x);
    }

    void pop() {
        deque.pop_back();
    }

    int top() {
        return deque.back();
    }

    bool empty() {
        return deque.empty();
    }

    int size() {
        return deque.size();
    }
};

class Queue {
private:
    std::deque<int> deque;

public:
    void push(int x) {
        deque.push_back(x);
    }

    void pop() {
        deque.pop_front();
    }

    int front() {
        return deque.front();
    }

    bool empty() {
        return deque.empty();
    }

    int size() {
        return deque.size();
    }
};
