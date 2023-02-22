class Solution {
public:
    int help(vector<int>& w, int sum)
    {
        int temp{},d{};
      
        for(int i{};i<w.size();i++)
        {
            if(temp+w[i] <= sum){
                temp+=w[i];
            }
            else {
                d++;
                temp = w[i];
            }
        }
        d++;
        return d;
    }

    int shipWithinDays(vector<int>& w, int days) {
        int ts = 0, low = w[0];
        int n = w.size();
        for(int i=0;i<n;i++)
        { 
            ts+=w[i]; 
            low = max(low,w[i]);
        }
        int high = ts;
        while(low<=high) {
            int mid = (low+high)/2;
            int d = help(w,mid);
            //cout<<low<<" "<<mid<<" "<<high<<" "<<d<<endl;
            if(d<=days){
                high = mid-1;
            }
            else {
                low = mid+1; 
            }
        }
        return low;
    }
};