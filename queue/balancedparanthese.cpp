class Solution {
public:
    bool isValid(string s) {
        stack<char>q;
        for(int i = 0 ; i < s.length() ; i++){
            char ch = s[i] ;
            if(ch == '(' || ch == '{' || ch == '['){
                q.push(ch);
            }else{
                if(q.empty()){
                    return false;
                }
            char top = q.top();
            q.pop();
            if(ch == ')' && top!= '(') return false;
            if(ch == '}' && top!= '{') return false;
            if(ch == ']' && top!= '[') return false;
            }
        }
        return q.empty();
    }
};
