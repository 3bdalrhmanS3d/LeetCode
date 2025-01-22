class Solution {
private:
    int reverse(int n)
    {
        int ans = 0 ;
        while(n!=0)
        {
            int digit = n % 10 ;
            ans = ( ans * 10) + digit ;
            n /= 10 ;
        }

        return ans;
    }
public:
    bool sumOfNumberAndReverse(int num) {
        for(int i = num / 2; i<=num ;i++)
        {
            
            if( i + reverse(i) == num)
            {
                return true;
            }
        }

        return false;
    }
};