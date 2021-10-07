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
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return (v.empty() == true);
    }
};

void evaluatePrefix(string s){
    MyStack st;
    for (int i = s.length()-1; i >= 0; i--){
        if (isdigit(s[i])){
            st.push(s[i] - '0');
        }
        else{
            int pop1 = st.pop();
            int pop2 = st.pop();
            switch (s[i]){
                case '+': st.push(pop1 + pop2); break;
                case '-': st.push(pop1 - pop2); break;
                case '*': st.push(pop1 * pop2); break;
                case '/': st.push(pop1 / pop2); break;
            }
        }

    }
    cout<<st.top();
}

int main(){
    string s;
    cin>>s;
    evaluatePrefix(s);
    return 0;

}