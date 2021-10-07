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
        return (v.empty() ==true);
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

string reverse_s(string s){
    string rev;
    for (int i = s.size()-1; i >=0; i--){
        rev = rev+s[i];
    }
    return rev;
}

void toPrefix(string s){
    MyStack st;
    string prefix;
    for (int i = s.size()-1; i >= 0; i--){
        char x = s[i];
        if (x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z'){
            prefix += x;
        }
        else if (x == ')'){
            st.push(x);
        }
        else if (x == '('){
            while (st.top() != ')'){
                prefix += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while (st.isEmpty() != true && prec(x) <= prec(st.top())){
                prefix += st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    while (!st.isEmpty()){
        prefix += st.top();
        st.pop();
    }
    cout<<prefix<<endl;
    cout<<reverse_s(prefix);
}

int main(){
    string s;
    cin>>s;
    toPrefix(s);
    return 0;
}