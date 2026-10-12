class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int, int>> q;

        for (int i = 0; i < tickets.size(); i++) {
            q.push({i, tickets[i]});
        }

        int time = 0;

        while (!q.empty()) {
            auto person = q.front();  // 0,2
            q.pop(); // 0 pops 

            person.second--; 
            time++; 
            if (person.second > 0) {
                q.push(person); //1 
            } else if (person.first == k) {
                return time;
            }
        }

        return time;
    }
};