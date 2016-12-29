class Solution {
public:
    bool wordPattern(string pattern, string str) {
        istringstream ss(str);
        string word;
        unordered_map<char,string> bmap;
        unordered_map<string,char> rbmap;
        for(char c : pattern)
        {
            if(!(getline(ss,word,' ')))
                return false;
            if(bmap.emplace(c,word).first->second!=word)
                return false;
            if(rbmap.emplace(word,c).first->second!=c)
                return false;
        }
        return ! getline(ss, word, ' ');
    }
};
