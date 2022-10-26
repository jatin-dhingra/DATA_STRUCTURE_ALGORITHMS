class Solution {
public:
    bool hasAlternatingBits(int n) 
    {
        long long k=n;
        k>>=1;
        
        //cout<<k+n<<endl;
        long long newnum=k+n;
       return ((newnum+1)&newnum)==0?1:0;
    }
};