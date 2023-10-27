/*Experiment - Stacks
22070123132*/
#include <iostream>
#include <stack>

using namespace std;

void displayStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> myStack;
    int choice;
    int value;

    do {
        cout << "Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a value to push: ";
                cin >> value;
                myStack.push(value);
                break;

            case 2:
                if (!myStack.empty()) {
                    cout << "Popped value: " << myStack.top() << endl;
                    myStack.pop();
                } else {
                    cout << "Stack is empty.\n";
                }
                break;

            case 3:
                cout << "Stack elements: ";
                displayStack(myStack);
                break;

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
