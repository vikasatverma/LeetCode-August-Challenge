// #include <algorithm> 
class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        make_heap(s.begin(), s.end());
        while(size(s)>1){
            int a = s.front();
            pop_heap(s.begin(), s.end());
            s.pop_back(); 

            int b = s.front();
            pop_heap(s.begin(), s.end());
            s.pop_back(); 
            
            s.push_back(abs(a-b));
            push_heap(s.begin(), s.end());
            // cout<<size(s)<<endl;
        }
        return s[0];
    }
};
