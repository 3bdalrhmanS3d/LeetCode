public class Solution {
    public int[] FindThePrefixCommonArray(int[] A, int[] B) {
        int n = A.Length;
        var visitedA = new HashSet<int>();
        var visitedB = new HashSet<int>();
        var result = new int[n];

        for (int i = 0; i < n; i++)
        {
            visitedA.Add(A[i]);
            visitedB.Add(B[i]);

            result[i] = visitedA.Intersect(visitedB).Count();
        }

        return result;
    }
}