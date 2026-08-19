class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        // int a=numOnes+numZeros;
        if(numOnes>=k)  return k;
        if(numOnes+numZeros>=k) return numOnes;
        return numOnes-(k-numOnes-numZeros)*(-1);
        // if(k<=a)    return num;
        // return a-((k-a)*-1);
    }
};