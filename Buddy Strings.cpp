class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        vector<int> diff_indices;
        vector<char> diff_chars;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != goal[i]) {
                diff_indices.push_back(i);
                diff_chars.push_back(s[i]);
            }
        }

        if (diff_indices.size() == 0) {
            // If both strings are equal, check if there are duplicate characters in s
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
                if (count[c - 'a'] > 1) {
                    return true;
                }
            }
            return false;
        }

        if (diff_indices.size() != 2) {
            return false;
        }

        int i = diff_indices[0];
        int j = diff_indices[1];

        return (s[i] == goal[j] && s[j] == goal[i]);
    }
};
