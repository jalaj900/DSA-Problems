

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==1) return 1;
        int l=1,h=n;
        while(l<=h)
        {
            int mid=l+(h-l)/2; 
            bool curr=isBadVersion(mid),pre;
            if(mid!=1)
            pre=isBadVersion(mid-1);
            if(curr)
            {
                if(mid==1 || !pre) return mid;
                else h=mid-1;;
            }
            else l=mid+1;
        }
        return -1;
    }
};