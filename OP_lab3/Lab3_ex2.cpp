#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack {

private:
  int elements[MAX_SIZE];
  int top_pos = -1;
public:

  void push(int value) {
    if (top_pos >= MAX_SIZE) {
      throw "Stak overflow";
    }
    top_pos++;
    elements[top_pos] = value;
  }

  int pop() {
    if (top_pos < 0) {
      throw "Stack is empty";
    }
    int value = elements[top_pos];
    top_pos--;
    return value;
  }

  friend ostream& operator<<(ostream& ost, const Stack& stack) {
    ost << "Stack: ";
    for (int i = stack.top_pos; i >= 0; i--) {
      ost << stack.elements[i] << ' ';
    }
    return ost;
  }
  friend istream& operator>>(istream& ist, Stack& stack) {
    int value;
    ist >> value;
    stack.push(value);
    return ist;

  }
};


int main() {

  Stack stack;
  cout << stack << endl;
  stack.push(4);
  stack.push(8);
  stack.push(16);
  cout << stack << endl;
  cout << "Deleted element: " << stack.pop() << endl;
  cout << stack;

  return 0;
}
