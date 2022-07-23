class Solution {
public:
       void mergeSort(vector<int>& res, vector<pair<int,int>> &v,int i,int j){
        if(i>=j) 
           return;
        int mid= i+ (j-i)/2;
        mergeSort(res,v,i,mid);
        mergeSort(res,v,mid+1,j);
        int m=mid+1,k=i;
         while(k<=mid && m<=j){
            if(v[k].first<=v[m].first){
                res[v[k].second] += (m-mid-1);
                k++;
            }
            else
                m++;
        }
        while(k<=mid)
        {
            res[v[k].second] += (m-mid-1);
            k++;
        }
        inplace_merge(v.begin()+i,v.begin()+mid+1,v.begin()+j+1);

    }
    
    vector<int> countSmaller(vector<int>& nums) {
         int n= nums.size();
        vector<int> res(n,0);
        vector<pair<int,int>> v(n);
          for(int i=0;i<n;++i ){
            v[i].first=nums[i];
            v[i].second= i;
            
        }
       mergeSort(res,v,0,n-1); 
        return res;
    }
};