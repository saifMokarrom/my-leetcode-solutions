
class Bitset {
private:
    vector<int> bitset;
    int cnt;
    bool flag;
public:
    Bitset(int size) {

        bitset.resize(size);
        cnt=0;
        flag=false;
    }

    void fix(int idx) {
        if (!flag){
            if (bitset[idx] == 0){
                cnt++;
                bitset[idx]=1;
            }
        }
        else{
            if (bitset[idx]==1){
                cnt++;
                bitset[idx]=0;
            }


        }
    }

    void unfix(int idx) {
        if (!flag){
            if (bitset[idx] == 1){
                cnt--;
                bitset[idx]=0;
            }
        }
            else{
                if (bitset[idx] == 0){
                    cnt--;
                    bitset[idx] = 1;
            }
        }
    }

    void flip() {
        flag = !flag;
        cnt = bitset.size()-cnt;

    }

    bool all() {
        return cnt==bitset.size();
    }

    bool one() {
        return cnt >= 1;
    }

    int count() {
        return cnt;
    }

    string toString() {
        string ans="";
        if (!flag){
            for (auto it: bitset){
                if (it == 0) ans+= '0';
                else if (it == 1) ans+= '1';
            }
        }
        else{
            for (auto it: bitset){
                if (it == 0) ans+= '1';
                else ans+= '0';
            }
        }
        return ans;

    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */
