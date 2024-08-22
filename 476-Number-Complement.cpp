class Solution {
public:
    long long findComplement(int num) {
        //
        /*long long bits_num = sizeof(num) * 8;
        int leadingZeros = __builtin_clz(num);
        int bit = bits_num - leadingZeros;

        unsigned long long bits = (1ULL << bit) - 1;

        return (num ^ bits);*/

    
        int m = num ;
        int mask = 0 ;
        if(num == 0)
        {
            return 1;
        }
        while(m != 0)
        {
            mask = ( mask << 1 ) | 1 ;
            m = m >> 1 ;
        }
        int ans = ( ~num ) & mask ;
        return ans ;
    }
};