class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& pre) {
        vector<int> adj[num];
        for(auto it : pre){
            adj[it[1]].push_back(it[0]);
        }
        queue<int> q;
        vector<int> ind(num,0);
        for(int  i =0;i<num;i++){
            for(auto it : adj[i]){
                ind[it]++;
            }
        }
        for(int i =0;i<num;i++){
            if(ind[i]==0){
                q.push(i);
            }
        }
        int cnt =0;
        while(q.empty()==false){
            int n = q.front();
            q.pop();
            cnt++;
            for(auto it : adj[n]){
                ind[it]--;
                if(ind[it]==0){
                    q.push(it);
                }
            }
        }
        return (cnt == num);
    }
};