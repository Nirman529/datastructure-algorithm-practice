#include <bits/stdc++.h>
using namespace std;

int main()
{
    int stack_size = 0;

    cout << "Enter the size of stack: ";
    cin >> stack_size;

    vector<int> my_stack;
    int temp;
    for (int i = 0; i < stack_size; i++)
    {
        cout << "Enter " << i + 1 << "th"
             << " value in the stack: ";
        cin >> temp;
        my_stack.push_back(temp);
    }

    for (int i = 0; i < stack_size; i++)
    {
        cout << my_stack[i] << endl;
    }

    return 0;
}