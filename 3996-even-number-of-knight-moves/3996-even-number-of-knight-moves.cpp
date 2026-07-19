class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) 
    {
        int s1=0;
        for(int i=0;i<start.size();i++)
        {
            s1=start[0]+start[1];
        }
        int s2=0;
        for(int j=0;j<target.size();j++)
        {
            s2=target[0]+target[1];
        }
        int r1=s1%2;
        int r2=s2%2;

        if(r1==r2)
        return true;
        else
        return false;
        
    }
};