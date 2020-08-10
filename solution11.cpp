class Solution {
public:
    
    
    
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int s = size(nums);

        int no0 = 0;
        for(int i=0; i<s; i++){
            if(nums[i]==0)
                no0++;
        }
        
        for(int i=0 ;i<no0; i++){
            for(j=0;j<s-1;j++){
                if(nums[j]==0){
                    swap(nums[j],nums[j+1]);
                }
            }    
        }
    }
    };
