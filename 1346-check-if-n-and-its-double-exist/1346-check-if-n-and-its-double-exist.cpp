class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((long long)arr[i] == 2LL * arr[j] ||
                   (long long)arr[j] == 2LL * arr[i]){
                    return true;
                   }
            }
        }
        return false;
    }
};