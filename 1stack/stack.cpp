#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int *arr;
    int top;
    int SIZE;

public:
    Stack(int SIZE)
    {
        this->SIZE = SIZE;
        arr = new int[SIZE];
        top = -1;
    }

    bool isFull()
    {
        return top == SIZE - 1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void push(int data)
    {
        // edge case implementation remaining
        if (isFull())
        {
            cout << "Stack is overflown.\n";
            return;
        }
        top++;
        arr[top] = data;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "The Stack is empty.\n";
            return;
        }
        arr[top] = 0;
        top--;
    }

    int peep(int i)
    {
        if (isEmpty())
        {
            cout << "No elements in the stack.\n";
            return -1;
        }
        return arr[i - 1];
    }

    void change(int pos, int val)
    {
        arr[pos] = val;
    }

    void displayStack()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << "--> " << arr[i] << endl;
        }
        cout << endl;
    }
};

int main()
{
    int stack_size, opt, data, val;

    cout << "enter stack size:";
    cin >> stack_size;

    Stack s(stack_size);

    do
    {
        cout << "Enter choice from the following: \n"
             << "\t1. push\n"
             << "\t2. pop\n"
             << "\t3. peep\n"
             << "\t4. change\n"
             << "\t5. display stack\n"
             << "\t6. exit.\nchoice: ";
        cin >> opt;

        switch (opt)
        {
        case 1:
            cout << "Enter data to push: ";
            cin >> data;
            s.push(data);
            break;

        case 2:
            s.pop();
            cout << "Element popped." << endl;
            break;

        case 3:
            cout << "Enter element to peep: ";
            cin >> val;
            cout << "Element is: " << s.peep(val) << endl;
            break;

        case 4:
            cout << "Enter position to change: ";
            int pos;
            cin >> pos;
            cout << "Enter value: ";
            int val;
            cin >> val;
            s.change(pos, val);
            cout << "Done \n";

            break;

        case 5:
            cout << "Displaying the stack: \n";
            s.displayStack();
            break;

        default:
            cout << "Exiting operation.";
            break;
        }
    } while (opt < 6);

    return 0;
}