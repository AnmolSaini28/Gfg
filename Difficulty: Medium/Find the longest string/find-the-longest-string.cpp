class Solution {
  public:
    static bool cmp(string &a, string &b)
    {
        if(a.size() != b.size())
            return a.size() < b.size();
        else
            return a > b;
    }
    string longestString(vector<string> &words) 
    {
        unordered_map<string,int> mp;
        for(int i = 0; i < words.size(); i++)
            mp[words[i]]++;
        string ans="";
        string flag = "Found";
        sort(words.begin(), words.end(),cmp);
        for(int i = words.size() - 1; i >= 0; i--)
        {
            string temp = "";
            string temp_string = words[i];
            flag = "Found";
            for(int j = 0; j < words[i].size(); j++)
            {
                temp += temp_string[j];
                if(mp.find(temp) == mp.end())
                {
                    flag = "Not Found";
                    break;
                }
            }
            if(flag == "Found")
                return words[i];
            
        }
        
        return ans;
        // code here
        
    }
};