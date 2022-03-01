class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> r;
        r.push_back(0);
        for (int i=1;i<=n;i++){
            int x = r[i/2]+ (i%2);
            r.push_back(x);
        }
        return r;
    }
};