// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s =1, e= n;
        while(s<=e){
            int mid = s+(e-s)/2;
             if(!isBadVersion(mid)){
                 s = mid +1;
             }
            else if(isBadVersion(mid)){
                if(mid-1>= 0 && (!isBadVersion(mid-1)))
                return mid;
                e = mid-1;
            }
        }
     return 0;   
    }
};