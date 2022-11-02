class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) 
    {
        
        vector<char> mut = {'A','C','G','T'};
        unordered_map<string,bool> visited;
        for(auto str: bank)
            visited[str] = false;
        // if(visited.find(end) == visited.end())
        //     return -1;
        queue<string> q;
        q.push(start);
        int ans=-1;
        while(!q.empty())
        {
            ans++;
            int n = q.size();
            for(int i=0; i<n; i++)
            {
                string curr = q.front();
                q.pop();
                if(curr==end)
                {
                    return ans;
                }
                for(int j=0; j<8; j++)
                {
                    char oc = curr[j];
                    for(int k=0; k<4; k++)
                    {
                        curr[j] = mut[k];
                        if(visited.find(curr)!=visited.end() && visited[curr]==false)
                        {
                            q.push(curr);
                            visited[curr] = true;
                        }
                    }
                    curr[j]=oc;
                }
            }
        }
        return -1;
    }
};