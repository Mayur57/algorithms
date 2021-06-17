#include <bits/stdc++.h>

#define pb push_back

using namespace std;

class Solution
{
public:
bool isAlienSorted(vector<string>& words, string order) {
        int tokens[26];
        int iter = 0;
        
        for(const auto& letter : order) {
            tokens[letter - 'a'] = iter++;
        }
        
        auto compare = [&](const string& word1, const string& word2) {
            auto pos = 0;
            auto w1_size = word1.size();
            auto w2_size = word2.size();
            
            while (pos < min(w1_size, w2_size)) {
                auto w1_index = word1[pos] - 'a';
                auto w2_index = word2[pos] - 'a';
                auto w1_rank = tokens[w1_index];
                auto w2_rank = tokens[w2_index];
                
                if (w1_rank < w2_rank) return true;
                if (w1_rank > w2_rank) return false;
                
                pos++;
            }
            
            return w1_size < w2_size; 
        };
        
        return is_sorted(words.begin(), words.end(), compare);
    }
};

int main()
{
    vector<string> words;
    words.pb("word");
    words.pb("worda");

    string order = "worldabcefghijkmnpqstuvxyz";

    cout << isAlienSorted(words, order);

    return 0;
}