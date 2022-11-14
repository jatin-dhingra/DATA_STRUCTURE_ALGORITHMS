/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void swap(vector<int> &arr,
          int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
    int minswap(vector<int>arr,
             int N)
{
  int ans = 0;
  vector<int>temp = arr;
 
  // Hashmap which stores the
  // indexes of the input array
  map <int, int> h;
 
  sort(temp.begin(), temp.end());
  for (int i = 0; i < N; i++)
  {
    h[arr[i]] = i;
  }
  for (int i = 0; i < N; i++)
  {
    // This is checking whether
    // the current element is
    // at the right place or not
    if (arr[i] != temp[i])
    {
      ans++;
      int init = arr[i];
 
      // If not, swap this element
      // with the index of the
      // element which should come here
      swap(arr, i, h[temp[i]]);
 
      // Update the indexes in
      // the hashmap accordingly
      h[init] = h[temp[i]];
      h[temp[i]] = i;
    }
  }
  return ans;
}
    int minimumOperations(TreeNode* root) 
    {
        vector<vector<int>>v;
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            vector<int>vp;
            for(int i{};i<s;i++)
            {
                TreeNode* r=q.front();
                q.pop();
                vp.push_back(r->val);
                if(r->left!=NULL)
                {
                    q.push(r->left);
                }
                if(r->right!=NULL)
                {
                    q.push(r->right);
                }
            }
            v.push_back(vp);
        }
        int count{};
        // for(auto i:v)
        // {
        //     //sort(i.begin(),i.end());
        //     for(auto j:i)
        //     {
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
       
        for(auto i:v)
        {
            int ans=minswap(i,i.size());
            count+=ans;
        }
        return count;
        
    }
};