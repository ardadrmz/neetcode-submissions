class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        std::unordered_map<char,int> freq;
        for(char c : s){
            freq[c]++;
        }
        for(char c : t){
            freq[c]--;
        }
        for(const auto &[ch,count] : freq){
            if(count != 0){
                return false;
            }
        }
        return true;
    }
};
