class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       // return binary_search(matrix.begin(),matrix.end(),target);
        //time complexity - O(M+N)
        //start from right-top most index and if target is les than matrix[r][c] then go backward in coloumns c--  else if target is greater than matrix[r][c] then go downward   by increasing column number if Element is found then directly return true , that's all ;) Good Question
        int r = 0;
        int c = matrix[0].size()-1;
        while(r<matrix.size() && c>=0){
            if(matrix[r][c]>target){
                c--;
            }
            else if(matrix[r][c]<target){
                r++;
            }
            else{
                return 1;
            }
        }
        return  0;
    }
};
