class Solution {
public:
    int maxArea(vector<int>& height) {
    int water = 0;
    int i = 0, j = height.size() - 1;
    while (i < j) {
        int h = min(height[i], height[j]);
        int w = j-i;
        water = max(water, w * h);
        if(height[i] < height[j])
                i++;
        else
                j--;
    }
    return water;
    }
};