class Solution {
public:
    double findMedianSortedArrays(vector < int > &  nums1, vector < int > & nums2) {
        int n=nums1.size();
        int m=nums2.size();
        map < int,int > mp;
        for(int i=0;i < n;i++) mp[nums1[i]]++;
        for(int i=0;i < m;i++) mp[nums2[i]]++;
        vector < int > dp;
        for(auto& i:mp)
        {
            for(int j=0;j < i.second;j++)
            {
                
                dp.push_back(i.first);
            }
        }
        
        if(dp.size()==1)
            return dp[0];
        if((n+m)%2!=0) return dp[(n+m)/2];
        
        return (dp[(n+m)/2]+dp[(n+m)/2-1])/2.0;
       
    }
};