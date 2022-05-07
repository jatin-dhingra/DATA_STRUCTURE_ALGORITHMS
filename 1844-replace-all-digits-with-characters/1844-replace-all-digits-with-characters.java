class Solution {
    public String replaceDigits(String s) 
    
    {
       
        for(int i=1;i<s.length();i+=2)
        {
            int val=s.charAt(i-1)+(s.charAt(i)-'0');
            char x=(char)val;
            s=s.substring(0,i)+(x)+s.substring(i+1);
            
        }
        return s;
        
    }
}