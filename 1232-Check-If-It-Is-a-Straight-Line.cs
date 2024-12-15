public class Solution {
    public bool CheckStraightLine(int[][] coordinates) 
    {
        int x1 = coordinates[0][0] , y1 = coordinates[0][1] ,
        x2 = coordinates[1][0] , y2 = coordinates[1][1] , x3 = 0, y3 = 0 ;

        int dx = x2 - x1, dy = y2- y1 ;

        for(int i =2 ; i < coordinates.Length; i++)
        {
            x3 = coordinates[i][0] ;
            y3 = coordinates[i][1] ;

            if(  (y3 - y2) * dx !=  (x3 - x2) * dy  )
            {
                return false ;
            } 
        }

        return true ;

    }
}