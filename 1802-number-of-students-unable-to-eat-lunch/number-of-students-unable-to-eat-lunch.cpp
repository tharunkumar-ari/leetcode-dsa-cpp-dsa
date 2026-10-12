class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        for(auto student:students){
            q.push(student);
        }
        int i=0;
        int r=0;
        while(!q.empty()&&r<q.size()){
            int student=q.front();
            q.pop();
            if(student==sandwiches[i]){
                i++;
                r=0;
            }
            else{
                q.push(student);
                r++;
            }
        }
        return q.size();
    }
};