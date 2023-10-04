class Solution {
  public:
    int romanToDecimal(string &str) {
       
        int n=str.length();
        unordered_map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int ans=0;
        int last=0;
        for(int i=n-1;i>=0;i--){
            char ch=str[i];
            
            if(mp[ch]>=last){
                ans+=mp[ch];
            }
            else{
                ans-=mp[ch];
            }
            last=mp[ch];
            
        }
       return ans;
        
    }

 

};
