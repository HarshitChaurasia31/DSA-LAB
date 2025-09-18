#include <iostream>
using namespace std;

#define N 10
int num[N]; 
int top = -1;

void push(int num[], int &top) {
    if (top == N - 1) {
        cout << "Stack Overflow\n";
    } else {
        int item;
        cout << "Enter an integer to push: ";
        cin >> item;
        top++;
        num[top] = item;
        cout << "Pushed ";
    }
}

void pop(int num[], int &top) {
    if (top == -1) {
        cout << "Stack Underflow\n";
    } else {
        int del = num[top];
        cout << "Popped element: " << del << "\n";
        top--;
    }
}

void display(int num[], int &top) {
    if (top == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack Elements (top to bottom):\n";
        for (int i = top; i >= 0; i--) {
            cout << num[i] << "\n";
        }
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\n=== Stack Operations Menu ===\n";
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: push(num, top); break;
            case 2: pop(num, top); break;
            case 3: display(num, top); break;
            case 4: cout << "Exiting...\n"; return 0;
            default: cout << "Wrong Input! Enter again.\n";
        }
    }
    return 0;
}
