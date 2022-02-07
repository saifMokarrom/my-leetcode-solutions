
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> map;
        map['I'] = 1; map['V'] = 5; map['X'] = 10; map['L'] = 50; map['C'] = 100, map['D'] = 500; map['M'] = 1000;

        int total=0;
        for (int i=0;i<s.length(); ){
            if (map[s[i]] < map[s[i+1]]){
                int temp = map[s[i+1]] - map[s[i]];
                total+=temp;
                i+=2;
            }
            else{
                total+=map[s[i]];
                i++;
            }
        }
        return total;
    }
};
