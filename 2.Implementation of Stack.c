#include <iostream>
using namespace std;
#define SIZE 5

class Stack {
    int arr[SIZE], top;
public:
    Stack() { top = -1; }
    void push(int val) {
        if (top == SIZE - 1)
            cout << "Stack Overflow\n";
        else
            arr[++top] = val;
    }
    void pop() {
        if (top == -1)
            cout << "Stack Underflow\n";
        else
            cout << "Popped: " << arr[top--] << endl;
    }
    void display() {
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10); s.push(20); s.push(30);
    s.display();
    s.pop();
    s.display();
}
