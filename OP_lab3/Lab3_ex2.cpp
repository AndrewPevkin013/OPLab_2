#include <iostream>
using namespace std;

class Stack {
private:
  int* arr;
  int size;
  int top_pos;

public:
  Stack() {
    size = 10;
    arr = new int[size];
    top_pos = -1;
  }

  Stack(int s) {
    size = s;
    arr = new int[size];
    top_pos = -1;
  }

  ~Stack() {
    delete[] arr;
  }

  void push(int value) {
    if (top_pos == size - 1) {
      int* newArr = new int[size * 2];
      for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
      }
      delete[] arr;
      arr = newArr;
      size *= 2;
    }
    arr[++top_pos] = value;
  }

  int pop() {
    if (top_pos == -1) {
      return -1;
    }
    return arr[top_pos--];
  }

  void display() {
    if (top_pos == -1) {
      cout << "Stack is empty" << endl;
      return;
    }
    cout << "Stack: ";
    for (int i = top_pos; i >= 0; i--) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  const Stack& operator<<(int value) {
    push(value);
    return *this;
  }

  const Stack& operator>>(int& value) {
    value = pop();
    return *this;
  }

};

int main() {
  Stack stack;
  stack << 1;
  stack << 2;
  stack << 3;
  stack.display();
  int val;
  stack >> val;
  cout << val << endl;
  stack.display();
  return 0;
}
