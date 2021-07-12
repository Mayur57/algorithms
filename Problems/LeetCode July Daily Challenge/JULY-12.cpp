class Solution {
public:
    bool helper(string s, string t) {
        unordered_map<char, char> letterMap;

        letterMap[s[0]] = t[0];
        for (int i = 1; i <= s.length(); i++) {
            if (letterMap.find(s[i]) == letterMap.end()) {
                letterMap[s[i]] = t[i];
            }
            else {
                if (letterMap.at(s[i]) != t[i])
                    return false;
            }
        }

        for (auto i = letterMap.begin(); i != letterMap.end(); i++)
            cout << i->first << "\t" << i->second << "\n";

        return true;
    }

    bool isIsomorphic(string s, string t) {
        return helper(s, t) && helper(t, s);
    }
};