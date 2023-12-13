class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum=0;
        while(n>0)
        {
            if(n&1==1) sum++;
              n>>=1;
        }
        return sum;
    
      
    }
};
//class Solution {
// public:
 // int hammingWeight(uint32_t n) {
  //  return __builtin_popcount(n);  //This function is used to count the number of set bits in an unsigned integer. In other words, it counts the number of 1's in the binary form of a positive integer.
 // }
//};
