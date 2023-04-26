public class Solution {
    // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
    public int singleNumber(final int[] A) {
        int xor = 0;
        for(int i : A) {
            xor = xor^i;
        }
        return xor;
    }
}