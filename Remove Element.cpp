class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c=0;
        for(int i=0;i<size(nums);i++){
            if(nums[i]==val) {
                nums[i]=INT_MAX;
                c++;
            }
        }
        sort(nums.begin(),nums.end());
        return size(nums)-c;
    }
};
