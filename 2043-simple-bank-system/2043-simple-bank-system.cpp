class Bank {
public:
    vector<long long >vec;
        int n{};
    Bank(vector<long long>& balance)
    {
        
        vec=balance;
        n=vec.size();
        
    }
    
    bool transfer(int account1, int account2, long long money) {
        account1--;
        account2--;
        if((account1>=0 && account1<=n) && (account2>=0 && account2<=n))
        {
            if(vec[account1]>=0 && money<=vec[account1])
            {
                vec[account1]-=money;
                vec[account2]+=money;
                return true;
            }
        }
        return false;
    }
    
    bool deposit(int account, long long money) 
    {
        account--;
        if(account>n|| account<0)
        {
            return false;
        }
        vec[account]+=money;
        return true;
        
    }
    
    bool withdraw(int account, long long money)
    {
        account--;
        if(account>=0 && account<=n)
        {
            if(money<=vec[account])
            {
                vec[account]-=money;
                return true;
            }
            else
            {
                return false;
            }
        }
        return false;
        
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */