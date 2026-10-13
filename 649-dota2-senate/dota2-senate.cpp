class Solution {
public: //r->bans d , so return rediant, rememeber we choose circular moves to move the queue;
    string predictPartyVictory(string senate) {
        int n=senate.length();
        queue<int>r;
        queue<int>d;
        for(int i=0;i<n;i++){
            if(senate[i]=='R'){
                r.push(i);
            }
            else{
                d.push(i);
            }
        }
        while(!r.empty()&&!d.empty()){   //whenever i push the r 
          int x=r.front();
          int m=d.front();
           r.pop();
           d.pop();
         (x<m)?r.push(x+n):d.push(m+n);
          
        }
      return (r.size()>d.size())?"Radiant":"Dire";
    }
};