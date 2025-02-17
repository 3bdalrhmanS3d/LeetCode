class Solution {
public:
    int sumOfUnique(vector<int>& n) {
        
        int freq[101] = {0};
        for(int i : n)
        {
            freq[i]++;
        }

        int total =0;
        for(int  i= 0; i < 101;i++)
        {
            if(freq[i] == 1)
            {
                total += i ;
            }
        }

        return total;
    }
};