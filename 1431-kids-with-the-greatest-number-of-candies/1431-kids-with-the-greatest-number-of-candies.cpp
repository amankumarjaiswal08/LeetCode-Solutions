class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int Candies = candies[0];
        for(int i=1 ; i<n ; i++){
            if(candies[i]>Candies){
                Candies = candies[i];
            }
        }
        vector<bool> ans;
        for(int i=0 ; i<n ; i++){
            if(candies[i]+extraCandies>=Candies){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};