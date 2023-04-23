public class Solution {
    public int solve(ArrayList<Integer> A) {
        Collections.sort(A);
        for(int i=0; i<A.size(); i++) {
            int cnt = 0;
            int p = A.get(i);
            int j = i+1;
            while(j<A.size() && A.get(i)==A.get(j)) {
                j++;
            }
            cnt = A.size()-j;
            if(cnt == p) {
                return 1;
            }
        }
        return -1;
    }
}