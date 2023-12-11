string Solution::findDigitsInBinary(int A) {
    string bin = "";
    if(A == 0) return "0";
    while(A) {
        int bit = (A & 1);
        bin += to_string(bit);
        A = A >> 1;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}