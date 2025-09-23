class Solution {
public:
    int strStr(string haystack, string needle) {
        bool choice =false;
        int index =-1;
        if(haystack.size()<needle.size()) return -1;
        for(int i=0;i<=haystack.size()-needle.size();i++)
        {
            if(haystack[i]==needle[0])
            {
                choice=true;
                index=i;
                for(int j=1;j<needle.size();j++)
                {
                    if(haystack[i+j]!=needle[j])
                    {
                        choice= false;
                        break;
                    }
                }
                    if(choice)
                    {
                        return index;
                    }
                
            }
        }
            return -1;
    }
};