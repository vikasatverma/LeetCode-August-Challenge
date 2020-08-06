class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        vector<int> v={};
        int s = size(a);
        for(int i=0; i<s; i++ ){
            int x = a[abs(a[i])-1];
            if(x>0)
                a[abs(a[i])-1] = -x;
            else
                v.push_back(abs(a[i]));
        }
        
        return v;
    }
};
