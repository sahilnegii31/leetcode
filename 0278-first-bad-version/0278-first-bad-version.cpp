// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l , r;
        l = 1 ; 
        r = n;
        if(isBadVersion(1)) return 1;
        for(int i=0;l<=r;i++){
            int mid = l + (r-l)/2;
            if(!isBadVersion(mid)){
                l = mid+1;
            }
            if(isBadVersion(mid)){
                r = mid;
                if(!isBadVersion(mid-1)){
                    return mid;
                }
            }
        } 
        return 0;
    }
};