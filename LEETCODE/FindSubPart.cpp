class Solution {
public:
    int strStr(string haystack, string needle) {
        bool matches = false;
        int index = -1;
        
        if (needle.size() > haystack.size()) return -1;
        
        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            if (haystack[i] == needle[0]) {
                index = i;
                matches = true;

                for (int j = 1; j < needle.size(); j++) {
                    if (haystack[i + j] != needle[j]) {
                        matches = false;
                        break;
                    }
                }

                if (matches) {
                    return index;
                }
            }
        }

        return -1;
    }
};