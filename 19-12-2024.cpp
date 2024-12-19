class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size(), part = 0;
        for(int j = 1; j < n; j++){
            int maxi = INT_MIN, mini = INT_MAX;
            for(int i = 0; i < j; i++){
                maxi = max(maxi, arr[i]);
            }
            for(int k = j; k < n; k++){
                mini = min(mini, arr[k]);
            }
            if(mini >= maxi)part++;
        }
        return part + 1;
    }
};