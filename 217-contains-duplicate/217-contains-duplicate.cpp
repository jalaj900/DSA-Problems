class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
          set <int> arr;
            for (auto &i:nums)
                    arr.insert(i);
            return nums.size() != arr.size();
         
    }
};