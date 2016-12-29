class Solution {
public:

    bool isValid(string s) {
        map<char,char>table{{'(',')'},{'[',']'},{'{','}'}};
        stack<char> left;
        for(auto c:s)
        {
            if(c=='(' || c=='[' || c=='{')
                left.push(c);
            else if( (!left.empty()) && table[left.top()]==c)
                left.pop();
            else
                return false;
        }
        return (left.empty());
    }
};
