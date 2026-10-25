class Solution {
public:
    int calculateScore(int a, int b) {
        string s1 = bitset<8>(a).to_string();
        string s2 = bitset<8>(b).to_string();
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='1'){
                cnt1++;
            }
        }
        for(int j=0;j<s2.size();j++){
            if(s2[j]=='1'){
                cnt2++;
            }
        }
        if(cnt1>=cnt2) return cnt1*cnt2;
        else return cnt2/cnt1;
     }
};