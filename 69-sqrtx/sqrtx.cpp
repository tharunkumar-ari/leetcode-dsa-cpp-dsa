class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return 0;
        int l=1;
        int r=x;
        while(l<=r){
            int m=l+(r-l)/2;
            long long mr=(long)m*m;
            if(mr==x){
                return m;
            }
            else if(mr<x){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
       return r; 
    }
};