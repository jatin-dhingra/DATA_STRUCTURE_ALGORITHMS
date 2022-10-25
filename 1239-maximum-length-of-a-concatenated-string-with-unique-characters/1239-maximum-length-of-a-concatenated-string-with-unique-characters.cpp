class Solution {
public:

  void f(int ind,vector<int> vis,vector<string>& arr,int currLen,int& maxLen){
      
      if(ind<0){
           maxLen=max(maxLen,currLen);
      return ;
      }
         
      int n=arr[ind].size();
      int flag=0;
      vector<int> t=vis;
      
      for(int i=0;i<n;i++){
          char ch=arr[ind][i];
          if(t[ch - 'a'] == 1){
              flag=1;
              break;
          }
          t[ch - 'a']=1;
      }
      
      if(flag == 0)
          f(ind-1,t,arr,currLen+arr[ind].size(),maxLen);
      
      f(ind-1,vis,arr,currLen,maxLen);
      
  }
      
      
     
int maxLength(vector<string>& arr) {
    
      int currLen=0;
      int n = arr.size();
      vector<int> vis(26,0);
      int maxLen=0;
      
    f(n-1,vis,arr,currLen,maxLen);
    
    return maxLen;
}
};