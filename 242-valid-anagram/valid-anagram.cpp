class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        // optimal logic
         int freq[26] = {0};
        for(int i = 0; i < s.size(); ++i){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
       for(auto x : freq){
           if(x != 0)return false;
       }
       return true;


       //sorting logic

       //sort(s.begin(),s.end());
       //sort(t.begin(),t.end());
       //return s == t;
    }
};