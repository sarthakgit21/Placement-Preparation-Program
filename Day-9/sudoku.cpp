class Solution {
public:
    bool  isSafe(vector<vector<char>>&board,int row,int col,char value,int n){
        for(int i=0;i<n;i++){
            //for row
            if(board[row][i]==value){ 
                return false;
            }

            //for col
            if(board[i][col]==value){ 
                return false;
            }

            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==value){
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>&board){
        //get the size
        int n=board.size();

        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(board[row][col]=='.'){

                
                    for(char i='1';i<='9';i++){

                        if(isSafe(board,row,col,i,n))
                        {
                            board[row][col]=i;
                        
                            bool isSolutionPossible=solve(board);

                            if(isSolutionPossible){
                                return true;
                            }
                            else{
                            
                                board[row][col]='.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
       
        bool possible = solve(board);
        return ;
    }
};
