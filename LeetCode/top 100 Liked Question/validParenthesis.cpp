/*
   Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

    An input string is valid if:

    1.  Open brackets must be closed by the same type of brackets.
    2.  Open brackets must be closed in the correct order.

*/

#include <iostream>
#include <stack>
using namespace std;
 
bool isValid(string s) 
{
    stack<char> st;
    
    // using stack to solve this problem helps us to respect the relative placement of brackets
    
    for(int i=0;i<s.length();i++) {
        char top = st.empty() ? '#' : st.top();
        
        if(top == '(' && s[i] == ')') {
            st.pop();
        }else if(top == '{' && s[i] == '}') {
            st.pop();
        }else if(top == '[' && s[i] == ']') {
            st.pop();
        }else{
            st.push(s[i]);
        }    
    }
    
    return st.empty();
}
 
// Driver code
int main() {
    cout << "Enter Parenthesis String: ";
    string s;
    cin >> s;
    if(isValid(s) == 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

/*
    Test Case - 1: 

    Enter Parenthesis String: ()
    Answer: true

    Test Case - 2: 

    Enter Parenthesis String: ()[]{}
    Answer: true

    Test Case - 3

    Enter Parenthesis String: (]
    false

    Link to the problem: https://leetcode.com/problems/valid-parentheses/
*/