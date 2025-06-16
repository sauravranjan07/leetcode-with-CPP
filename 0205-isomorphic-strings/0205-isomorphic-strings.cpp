class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        unordered_map<char,char> seen;
        string ans;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=t[i];
                if(seen.find(t[i])!=seen.end()){
                    return false;
                }
                seen[t[i]]=s[i];
                ans+=t[i];
            }else{
                ans+=mp[s[i]];
                seen[t[i]]=s[i];
            }
            
        }
        return ans==t?true:false;
    
        
    }
};