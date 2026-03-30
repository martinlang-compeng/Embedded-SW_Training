class Solution {
public:
    bool isAnagram(string s, string t) {
        // If strings are not equal in size, we can return false right away
        if(s.length() != t.length()) {
            return false;
        }

        // One method is to keep a hash map for each string
        // Where the key is each unique letter, and the
        // value is how many times that letter appears

        // At the end, you compare the hash maps and if they 
        // are equal return true, if not return false

        std::unordered_map<char, int> s_map;
        std::unordered_map<char, int> t_map;

        for(unsigned i = 0; i < s.length(); i++) {
            s_map[s[i]]++;
            t_map[t[i]]++;
        }

        if(s_map == t_map)
            return true;
        else
            return false;

        // Another method is to sort both strings and compare them
        // std::sort(s.begin(), s.end());
        // std::sort(t.begin(), t.end());

        // if(s == t)
        //     return true;
        // return false;
    }
};
