class Solution {
public:

    bool checkValidity(vector<int>& weights, int days, int mid){
        int i=0;
        int sum=0;
        int d=0;
        while(i < weights.size()){
            if (weights[i] > mid) return true;

            else if (sum+weights[i] > mid){
                d++;
                sum=0;
            }
            else{
                sum+=weights[i];
                i++;
            }
        }
        d++;
        if (d > days) return true;
        else
            return false;
    }


    int shipWithinDays(vector<int>& weights, int days) {


        int low = 1; int high = 0;
        for (auto it: weights) high+=it;

        int mid = 0;



        int ans = 0;
        while (low<=high){
            mid = (low+high)/2;

            if (checkValidity(weights,days,mid)){
                low = mid+1;
            }
            else {
                ans = mid;
                high = mid-1;
            }

        }

        return ans;

    }
};
