#include <iostream>
#include <stack>

using namespace std;

bool isBalanced(string expr){
    stack <char> s;
    char ch;

    for (int i = 0; i < expr.length(); i++){ // check conditions
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
                // push this bracket
                s.push(expr[i]);
                continue;
        }
        if (s.empty()) // we are not allowed to have an empty stack
            return false;

           //  [{}(){()}]
           switch (expr[i]) {
           case ')': // pop the bracket
            ch = s.top();
            s.pop();
            if (ch == '{' || ch == '[')
                return false;
                break;

           case '}': // pop the curl bracket
            ch = s.top();
            s.pop();
            if (ch == '(' || ch == '[')
                return false;
                break;

           case ']': // pop the square bracket
            ch = s.top();
            s.pop();
            if (ch == '(' || ch == '{')
                return false;
                break;
           }
    }
    return (s.empty()); // return true if the stack is empty
}

int main()
{
    string expr = "[{}(){()}]";
    if (isBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not balanced";
}
