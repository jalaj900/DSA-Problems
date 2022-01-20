class Solution {
public:
        
        void fun(int ind,int target ,vector<int> &arr,vector<int> &ds,vector<vector<int>>& ans)
        {
               
                if(target==0)
                {
                        ans.push_back(ds);
                        return; 
                }
                        
             for(int i=ind;i<arr.size();i++)
             {
                     if(i>ind && arr[i]==arr[i-1]) continue;
                     if(arr[ind]>target) break;
                     ds.push_back(arr[i]);
                     fun(i+1,target-arr[i],arr,ds,ans);
                     ds.pop_back();
                
             } 
        }
        
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            
            vector<int> ds;
            vector<vector<int>> ans;
            sort(candidates.begin(),candidates.end());
            fun(0,target,candidates,ds,ans);
            return ans;
        
    }
};