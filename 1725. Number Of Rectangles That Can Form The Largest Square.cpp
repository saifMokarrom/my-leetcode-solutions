class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> ans;
        return recur(0,rectangles,ans);
    }
    int recur(int idx, vector<vector<int>>& rectangles, vector<int> &ans){

        if (idx >= rectangles.size()){
            int max = *max_element(ans.begin(),ans.end());
            return count(ans.begin(),ans.end(),max);
        }

        if (rectangles[idx][0] <= rectangles[idx][1]) ans.push_back(rectangles[idx][0]);
        else ans.push_back(rectangles[idx][1]);
        return recur(idx+1,rectangles,ans);
    }
};
