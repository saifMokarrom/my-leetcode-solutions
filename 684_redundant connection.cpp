#include<bits/stdc++.h>
using namespace std;

int find(int n, vector<int> &parent){
        int par = parent[n];

        while(par!=parent[par]){
            par = parent[par];
        }
        return par;
}


bool uniono(vector<int> vec, vector<int> &parent,vector<int> &rank ){
        int par1 = find(vec[0], parent);
        int par2 = find(vec[1], parent);

        if (par1 == par2) return false;
        if (rank[par1]>=rank[par2]){
            parent[par2] = par1;
            rank[par1]+=rank[par2];
        }
        else{
            parent[par1] = par2;
            rank[par2]+=rank[par1];
        }
        return true;
}




vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> parent(edges.size()+1);
        for (int i=0;i<=edges.size();i++) parent[i] = i;

        vector<int> rank(edges.size()+1, 1);
        vector<vector<int>> fin;

        for (auto it:edges){
            bool ans = uniono(it,parent,rank);
            if (!ans) fin.push_back(it);
        }

        return fin[fin.size()-1];

}

int main(){

    vector<vector<int>> vect = {
                { 1,2},
                { 1, 3},
                { 2,3}
    };

    vector<int> ans = findRedundantConnection(vect);
    cout<<ans[0]<<" "<<ans[1]<<"\n";
    return 0;

}


