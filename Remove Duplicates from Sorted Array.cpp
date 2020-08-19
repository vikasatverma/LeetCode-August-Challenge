class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        if(n.empty())
            return 0;
        int lasti=0;
        for(int i=1;i<size(n);i++){
            if(n[lasti]==n[i])
                continue;
            else{
                n[++lasti] = n[i];
            }
        }
        return lasti+1;
    }
};
