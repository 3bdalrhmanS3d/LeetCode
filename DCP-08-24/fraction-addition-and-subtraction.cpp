public class Solution {
    public string FractionAddition(string expression) {
        int numerator = 0;
        int denominator = 1 ;

        int i =0 ;
        while(i < expression.Length )
        {
            int sign = 1 ;
            if( expression[i] == '-' || expression[i] == '+')
            {
                sign = expression[i] == '-' ? -1 : 1 ;
                i++;
            }


            int num =0 ;
            while(i < expression.Length && char.IsDigit(expression[i]) )
            {
                num = num * 10 + ( expression[i] - '0') ;
                i++;
            }
            num *= sign ;

            i++ ;
            // هعندي هنا ال كسر 

            int denom = 0 ;
            while (i < expression.Length && char.IsDigit(expression[i])) 
            {
                denom = denom * 10 + (expression[i] - '0');
                i++;
            }
            
            // sum expression 
            numerator = numerator * denom + num * denominator ;
            denominator *= denom ;

            int gcd = GCD(Math.Abs(numerator), denominator);
            numerator /= gcd;
            denominator /= gcd;

        }

        return numerator + "/" + denominator;

    }

    private int GCD(int a, int b) 
    {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}
