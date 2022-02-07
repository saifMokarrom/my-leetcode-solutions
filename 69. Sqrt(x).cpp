class Solution {
public:
    int mySqrt(int x) {

        if (x==1) return 1;
        long long low = 1,high = x/2;
        long long mid;
        long long ans=0;
        while(low<=high){
            mid = (low+high)/2;
            if (mid*mid == x) return mid;
            else if (mid*mid > x) high = mid-1;
            else{
                ans = mid;
                low = mid+1;
            }
        }
        return ans;

    }
};
