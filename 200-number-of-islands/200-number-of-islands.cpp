class Solution {
public:
    void traverse(vector<vector<char>>& grid,int i,int j,int m,int n){
        while(i<0 || i==m || j<0 || j==n || grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';
        traverse(grid,i-1,j,m,n);
        traverse(grid,i+1,j,m,n);
        traverse(grid,i,j-1,m,n);
        traverse(grid,i,j+1,m,n);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int islands =0;
        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    islands++;
                    traverse(grid,i,j,m,n);
                }
            }
        }
        return islands;
    }
};