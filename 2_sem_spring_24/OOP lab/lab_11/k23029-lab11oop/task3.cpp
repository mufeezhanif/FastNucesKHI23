#include <iostream>

class Queue {
public:
    virtual void enqueue(int item) = 0;
    virtual int dequeue() = 0;
    virtual bool isEmpty() const = 0;
    virtual ~Queue() {}
};

class MyQueue : public Queue {
public:
    void enqueue(int item) override {}

    int dequeue() override {
        return 0;
    }

    bool isEmpty() const override {
        return true;
    }
};

int main() {
    MyQueue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    while (!queue.isEmpty()) {
        std::cout << "Dequeued: " << queue.dequeue() << std::endl;
    }

    return 0;
}

