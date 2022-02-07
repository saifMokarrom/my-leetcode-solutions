
#include<bits/stdc++.h>
using namespace std;
 int lengthOfLongestSubstring(string s) {

        if (s.length() == 0) return 0;
        if (s.length() == 1) return 1;

        int l=0,r=0,maxC=0;
        unordered_set<int> set;
        while (r < s.length()){



            if (set.find(s[r]) == set.end()){
                maxC = max(maxC, (r-l+1));
                set.insert(s[r]);
                r++;

            }
            else{
                set.erase(s[l]);
                l++;
            }


        }

        return maxC;

}
int main(){

string s = "pww 9ke  9ww";
cout<<lengthOfLongestSubstring(s)<<"\n";

}
