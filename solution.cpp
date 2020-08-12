class Solution {
public:
    vector<int> getRow(int N) {
        long int prev = 1; 
        vector<int> ans = {1};
        cout << prev; 

        for (int i = 1; i <= N; i++) { 
            // nCr = (nCr-1 * (n - r + 1))/r 
            long int curr = (prev * (N - i + 1)) / i; 
            // cout << ", " << curr;
            ans.push_back(curr);
            prev = curr; 
        }
        return ans;
    }
};
