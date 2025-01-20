class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        string s =\\;
        int sum = 0, carry = 0 ;
        for(int i =0 ; i < a.size() || i < b.size(); i++)
        {
            int digitA = (i < a.size()) ? (a[i] - '0') : 0; 
            int digitB = (i < b.size()) ? (b[i] - '0') : 0;

            sum = digitA + digitB + carry ;

            carry = sum / 2 ;

            s += ( sum % 2 ) + '0' ;
        }

        if(carry )
        {
            s += '1' ;
        }

        reverse(s.begin(), s.end());

        return s ;
    }
};