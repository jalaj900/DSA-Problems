class Solution {
public:
        void fun(int ind,int target ,vector<int> &arr,vector<int> &ds,vector<vector<int>>& ans)
        {
                if(ind==arr.size())
                {
                        if(target==0)
                        {
                                ans.push_back(ds);
                        }
                        return;
                }
                
                if(arr[ind]<=target)
                {
                        ds.push_back(arr[ind]);
                        fun(ind,target-arr[ind],arr,ds,ans);
                        ds.pop_back();
                }
                fun(ind+1,target,arr,ds,ans);
                
        }
        
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            
            vector<int> ds;
            vector<vector<int>> ans;
            fun(0,target,candidates,ds,ans);
            
            return ans;
            
        
    }
};