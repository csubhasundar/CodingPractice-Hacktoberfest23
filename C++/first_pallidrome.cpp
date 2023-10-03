class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            string str=words[i];
            reverse(str.begin(),str.end());
            if(str==words[i])
                return words[i];
        }
        return "";
    }
};