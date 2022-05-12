class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo=0,hi=nums.size()-1;
            //if array is sorted and not rotated then the min ele will be nums[0]
            if (nums[lo]<=nums[hi])
                    return nums[0];
            
            while(lo <= hi)
            {
                    int mid=(lo+hi)/2;
                    
                     if(nums[mid]>nums[mid+1])
                            return nums[mid+1];
                     else if(nums[mid]<nums[mid-1])
                            return nums[mid];
                     else if (nums[lo]<= nums[mid])
                             lo=mid+1;
                    else if(nums[mid]<=nums[hi])
                            hi=mid-1;
                            
                           
            }
            return -1;
    }
};