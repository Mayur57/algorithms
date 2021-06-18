#include<stdio.h>

using namespace std;

vector<string> reorderLogFiles(vector<string>& logs) {

    auto iter = stable_partition(logs.begin(), logs.end(), [](string& s) {
        return isalpha(s[s.find(" ") + 1]);
    });

    sort(logs.begin(), iter, [](string& s1, string& s2) {
        auto indexOfS1 = s1.find(" ");
        auto indexOfS2 = s2.find(" ");

        auto s1_substring = string(s1.begin() + indexOfS1, s1.end());
        auto s2_substring = string(s2.begin() + indexOfS2, s2.end());

        return (s1_substring == s2_substring) ? s1 < s2 : s1_substring < s2_substring;
    });

    return logs;
}

int main {

    return 0;
}