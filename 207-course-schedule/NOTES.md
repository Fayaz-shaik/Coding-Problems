USING DFS :
​
class Solution {
public:
bool cyc(int k , vector<int> adj[],vector<int> &vis){
if(vis[k]==1){
return true;
}
if(vis[k]==0){
vis[k]=1;
for(auto it : adj[k]){
if(cyc(it,adj,vis))
return true;
}
}
vis[k]=2;
return false;
}
bool canFinish(int num, vector<vector<int>>& pre) {
vector<int> adj[num];
bool ans = true;
for(auto i :pre){
adj[i[1]].push_back(i[0]);
}
vector<int> vis(num,0);
for(int k=0;k<num;k++){
if(cyc(k,adj,vis)==true){
ans = false ;
}
}
return ans;
}
};