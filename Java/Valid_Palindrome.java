class Solution {
    public boolean validPalindrome(String s) {
        int l=0;
        int r=s.length()-1;
        while(l<r && s.charAt(l)==s.charAt(r))
        {
            l++;
            r--;
        }
        return (valid(l+1,r,s) || valid(l,r-1,s));
    }

public boolean valid(int l,int r, String s)
{
    
    while(l<r)
    {
        if(s.charAt(l)!=s.charAt(r))
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
}