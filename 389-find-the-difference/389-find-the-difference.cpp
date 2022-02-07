class Solution {
public:
    char findTheDifference(string s, string t) {
        
            
            char res=0;
            for (char i:s) res=res^i;
            for(char j:t) res=res^j;
            
            return res;
    }
};