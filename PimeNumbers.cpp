vector<int> Solution::sieve(int A) {
    vector<int> prime(A+1, 1);
    for(int i = 2; i <= (A/2); i++) {
        for(int j = i*2; j <= A; j += i) {
            prime[j] = 0;
        }
    }
    vector<int> listPrime;
    for(int i = 2; i <= A; i++) {
        if(prime[i] == 1) {
            listPrime.push_back(i);
        }
    }
    return listPrime;
}
