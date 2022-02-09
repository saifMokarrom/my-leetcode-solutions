class Solution {
public:
    long long smallestNumber(long long num) {

        string s = to_string(abs(num));

        if (num >= 0){
            sort(s.begin(),s.end());
            for (int i=0;i<s.length();i++){
                if (s[i]!= '0'){
                    swap(s[0],s[i]);
                    break;
                }

            }
            return stoll(s);
        }
        else{


            sort(s.begin(),s.end(),greater<int>());
            return stoll(s)*(-1);
        }

    }
};
