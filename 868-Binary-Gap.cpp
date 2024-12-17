class Solution {
public:
    int binaryGap(int n) {
        vector<int> vec ;
        int i = 1 ;
        while(n>0)
        {
            if(n%2==1)
            {
                vec.push_back(i) ;
            }
            i++ ;
            n /= 2 ;
        }

        if (vec.size() < 2) {
            return 0;
        }

        int mx = 0 ;
        for(int i = 1 ; i < vec.size() ; i++)
        {
            mx = max(mx,abs(vec[i] - vec[i-1])) ;
        }
        return mx ;
    }
};