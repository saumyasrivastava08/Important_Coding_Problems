#include <iostream>
#include <vector>
using namespace std;

struct MyStack{
    vector<int> v;
    void push(int x){
        v.push_back(x);
    }
    int pop(){
        int res = v.back();
        v.pop_back();
        return res;
    }
    int top(){
        return v.back();
    }
    int size_s(){
        return v.size();
    }
    bool isEmpty(){
        return (v.empty() == true);
    }
};

int prec(char c){
    if (c == '+' || c == '-'){
        return 1;
    }
    else if (c == '*' || c == '/'){
        return 2;
    }
    else if (c == '^'){
        return 3;
    }
    return -1;

}

void infixToPostfix(string str){
    MyStack s;
    string output;
    for (int i = 0; i < str.length(); i++){
        char x = str[i];
        if(x >= 'a' && x <='z' || x >= 'A' && x <= 'z'){
            output += x;
        }
        else if (x == '('){
            s.push(x);
        }
        else if (x == ')'){
            while (s.top() != '('){
                output += s.top();
                s.pop(); 
            }
            s.pop();
        }
        else{
            while (!s.isEmpty() && prec(x) <= prec(s.top())){
                output += s.top();
                s.pop();
            }
            s.push(x);
        }
    }
    while(s.isEmpty() != true){
        output += s.top();
        s.pop();
    }
    cout<<output<<endl;
}
int main(){
    string str = "a+b*c";
    infixToPostfix(str);
    return 0;
}