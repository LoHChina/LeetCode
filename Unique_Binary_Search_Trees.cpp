class Solution {
public:
    int numTrees(int n) {
        if(n==1) return 1;
        return (2*(2*n-1)*numTrees(n-1))/(n+1);
    }
}; 