class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            
            
            set<int> s1 (nums1.begin(),nums1.end());
            
            vector<int>  ans;
            
            for(int j =0;j<nums2.size();j++)
            {
                    if(s1.find(nums2[j])!=s1.end())
                    {
                            ans.push_back(nums2[j]);
                            s1.erase(nums2[j]);
                    }
            }
            
            return ans ;
            
            
        
    }
};