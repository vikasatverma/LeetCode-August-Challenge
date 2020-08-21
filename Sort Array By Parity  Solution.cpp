class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> anso, anse;
        for(auto& c:A){
            if(c%2==1)
                anse.push_back(c);
            else
                anso.push_back(c);
        }
        // memcpy(anso + int(size(anso)), anse, sizeof(anse));  
        anso.insert(anso.end(), anse.begin(), anse.end());

        return anso;
    }
};
