class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;

        int i = 0;
        int rotations = 0;

        for(int student : students)
        q.push(student);

        while(!q.empty()){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                rotations = 0;
            }else{
                q.push(q.front());
                q.pop();
                rotations++;
            }
            if(rotations==q.size()){
                return q.size();
            }
        }
        return 0;
    }
};