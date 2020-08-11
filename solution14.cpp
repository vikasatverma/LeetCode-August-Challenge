class Solution {
public:
    int hIndex(vector<int>& c) {
        int l=size(c),i;
        sort(c.begin(),c.end(),greater<>());
        for( i=0;i<l && i+1<=c[i];i++);
        // ans = i;
        
        
        return i;
    }
};
