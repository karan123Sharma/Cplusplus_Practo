#include <iostream>
using namespace std;
int Stack[100], n = 100, top = -1;
void push(int val)
{
    if (top == n - 1)
    {
        cout << "Stack Overflowed" << endl;
    }
    else
    {
        top++;
        Stack[top] = val;
    }
}
void pop()
{
    if (top < -1)
    {
        cout << "Stack Underflowed" << endl;
    }
    else
    {
        top--;
    }
}
void Display()
{
    if (top >= 0)
    {
        for (int i = top; i >= 0; i--)
        {
            cout << Stack[i] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "Staxck Empty" << endl;
    }
}

int main()
{
    int val, n;
    cout << "1. Push the Values" << endl;
    cout << "2. Pop the Stack" << endl;
    cout << "3. Display the Stack" << endl;
    cout << "4. Exit" << endl;
    do
    {
        cout << "Enter Choice" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
        {
            cout << "Enter the Values to be Pushed" << endl;
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            cout << "Enter the Values to be poped" << endl;
            cin >> val;
            pop();
            break;
        }
        case 3:
        {
            cout << "The Output in Stack is " << endl;
            Display();
            break;
        }
        }

    } while (n != 4);
}
