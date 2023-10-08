class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string ans;
        while(n)
        {
            n--;
            int rem = n % 26;
            ans = char('A' + rem)+ans;
            n = n / 26;
        }
        return ans;
    }
};
