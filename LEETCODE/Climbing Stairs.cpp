class Solution {
public:
    int climbStairs(int n) {
       int a=0;int b=1,next;
       for(int i=1;i<=n;i++)
       {
           next = a + b;
           a=b;
           b=next;
       }
       return next;
    }
};