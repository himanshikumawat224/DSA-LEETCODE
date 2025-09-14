class Solution {
    private: 
    void bfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>>& grid)
    {
             int n = grid.size();
        int m = grid[0].size();
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});

        while(!q.empty())
        {
            int row= q.front().first;
            int col= q.front ().second;
            q.pop();
            //traverse the neighbour and mark them as if its land 
int drow[4] = {-1, 0, 1, 0};
        int dcol[4] = {0, 1, 0, -1};
//             
            for(int i=0; i<4; i++) {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                   if(nrow >= 0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol])
                   {
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                   }
                }
            }
        }
   
public:

   
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt=0;
        for(int row=0;row<n;row++)
        {
            for(int col = 0 ;col<m;col++)
            {
                if(!vis[row][col]&&grid[row][col]=='1')
                {
                    cnt++;
                    bfs(row,col,vis,grid);
                }
            }
        }
        return cnt;
    }
};
