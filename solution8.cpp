class Solution {
public:
    int isvalid(int i, int j, int rows, int cols){
        if(i<rows && j<cols && i>=0 && j>=0){
            return 1;
        }
        return 0;
    }
    int checkall(vector<vector<int>> grid,int r,int c){
        for(int i = 0; i<r; i++){
            for(int j = 0; j< c ; j++){
                if(grid[i][j]==1)
                    return true;
            }
        }
        return false;
    }
    struct ele{
        int x,y;
    };
    bool isdelim(ele temp) 
    { 
    return (temp.x == -1 && temp.y == -1); 
    } 
    int orangesRotting(vector<vector<int>>& grid) {
        // cout<<size(grid)<<endl<<size(grid[0]);
        int r = size(grid);
        int c = size(grid[0]);
        queue<ele> Q;
        ele temp;
        int ans = 0;
        
        for(int i = 0; i<r; i++){
            for(int j = 0; j< c ; j++){
                if(grid[i][j]==2)
                    {
                        temp.x = i;
                        temp.y = j;
                        Q.push(temp);
                        // cout<<"added"<<endl;
                    }
            }
        }
        temp.x=-1;
        temp.y=-1;
        Q.push(temp);
        
        
        while(!Q.empty())
        {
            
            bool flag = false; 
  
        // Process all the rotten oranges in current time frame. 
            while (!isdelim(Q.front())) 
            { 
                temp = Q.front();

                if(isvalid(temp.x+1,temp.y,r,c) && grid[temp.x+1][temp.y]==1){
                    if (!flag) ans++, flag = true; 

                    // Make the orange rotten 
                    grid[temp.x+1][temp.y] = 2; 

                    // push the adjacent orange to Queue 
                    temp.x++; 
                    Q.push(temp); 

                    temp.x--;
                }

                if(isvalid(temp.x-1,temp.y,r,c) && grid[temp.x-1][temp.y]==1){
                    if (!flag) ans++, flag = true; 

                    // Make the orange rotten 
                    grid[temp.x-1][temp.y] = 2; 

                    // push the adjacent orange to Queue 
                    temp.x--; 
                    Q.push(temp); 

                    temp.x++;
                }
                if(isvalid(temp.x,temp.y-1,r,c) && grid[temp.x][temp.y-1]==1){
                    if (!flag) ans++, flag = true; 

                    // Make the orange rotten 
                    grid[temp.x][temp.y-1] = 2; 

                    // push the adjacent orange to Queue 
                    temp.y--; 
                    Q.push(temp); 

                    temp.y++;
                }
                if(isvalid(temp.x,temp.y+1,r,c) && grid[temp.x][temp.y+1]==1){
                    if (!flag) ans++, flag = true; 

                    // Make the orange rotten 
                    grid[temp.x][temp.y+1] = 2; 

                    // push the adjacent orange to Queue 
                    temp.y++; 
                    Q.push(temp); 

                    temp.y--;
                }
                
                Q.pop();
        
            }
            
            Q.pop();
            
            if (!Q.empty()) { 
                temp.x = -1; 
                temp.y = -1; 
                Q.push(temp); 
               } 
            
        }
        
        return (checkall(grid,r,c))? -1: ans; 

        
        
                
        // return ans;
    }
        
};
