class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int len = s.size(), i = 0, j = 0, stIx = 0;
        vector<int> stack;
        for (; i < len; i++)
            if (s[i] == ')')
                if (stack.size() > 0) stack.pop_back();
                else s[i] = '_';
            else if (s[i] == '(') stack.push_back(i);
        stack.push_back(-1);
        for (i = 0; j < len; j++)
            if (j == stack[stIx]) stIx++;
            else if (s[j] != '_') s[i++] = s[j];
        return s.substr(0, i);
    }
            
        
    
};