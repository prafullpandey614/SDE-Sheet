class Solution {
    public int maxAreaOfIsland(int[][] grid) {
        int m = 0;
        int n = grid.length;
        for(int i=0;i<n;++i){
            for(int j=0;j<grid[0].length;++j){
                m = Math.max(m,dfs(grid,i,j));
            }
        }
        return m;
    }
    public int dfs(int[][] grid,int i,int j){
        if(i<0 || i>=grid.length || j<0 || j>=grid[0].length ||  grid[i][j]==0){
            return 0;
        }
        grid[i][j]=0; // toggled the value of first occured 1 
        int count = 1; // That's why we added count = 1 because we already considered first 1
        count += dfs(grid,i+1,j);
                count += dfs(grid,i-1,j);
                count += dfs(grid,i,j-1);
                        count += dfs(grid,i,j+1);

        return count;
    }
