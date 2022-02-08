class Solution {
public:
    vector<int> getRow(int rowIndex) {
            vector <int> v;
            long long val=1;
            int i=rowIndex;
            
            for(int j=0;j<=i;j++)
            {
                    v.push_back(val);
                    val=val*(i-j)/(j+1);
                    
            }
            
            return v;
            
            
        
    }
};