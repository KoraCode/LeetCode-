class Solution {
public:
    bool isValid(string s) {
        stack<char> linkstack;
        int length=s.size();
        if(length==0)
            return true;
        if(length%2)
            return false;
        linkstack.push(s[0]);
        for(int i=1;i<length;i++){
            if(linkstack.empty())
                linkstack.push(s[i]);
            else if(s[i]-linkstack.top()==1||s[i]-linkstack.top()==2)
                linkstack.pop();
            else
                linkstack.push(s[i]);
        }
        return linkstack.empty(); 
    }
};
//不同的方法
class Solution {
public:
    bool isValid(string s) {
        if (s.empty()) return true;
		stack<char>	stc;
		for (char c : s)
			if (c == ')' || c == ']' || c == '}') 
				if (!stc.empty() && stc.top() == c)
					stc.pop();
				else return false;
			else
				switch (c) {
				case '(':
					stc.push(')');
					break;
				case '[': 
					stc.push(']');
					break;
				case '{':
					stc.push('}');
					break;
				}
		return stc.empty();
    }
};
