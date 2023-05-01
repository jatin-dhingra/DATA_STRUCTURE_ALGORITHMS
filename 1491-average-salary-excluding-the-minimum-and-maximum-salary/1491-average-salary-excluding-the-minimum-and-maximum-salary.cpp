class Solution {
public:
    double average(vector<int>& salary) {
        int maxx=*max_element(salary.begin(),salary.end());
        int minn=*min_element(salary.begin(),salary.end());
        //return maxx;
        int sum{};
        double len=salary.size()-2;
        for(int i{};i<salary.size();i++)
        {
            if(salary[i]!=maxx || salary[i]!=minn)
            {
                
                sum+=salary[i];
            }
        }
        double summ=sum-maxx-minn;
        double final{};
        final=summ/len;
        return final;
    }
};