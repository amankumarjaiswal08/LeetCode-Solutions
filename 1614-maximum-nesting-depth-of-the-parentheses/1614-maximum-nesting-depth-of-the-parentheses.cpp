class Solution {
public:
    int maxDepth(string s) {
        int brackets = 0;
        int result = 0;
        for(char &ch : s){
            if(ch=='('){
                brackets++;
            }
            else if(ch==')'){
                brackets--;
            }
            result = max(result , brackets);
        }
        return result;
    }
};