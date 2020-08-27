long long binpow(long long b, long long e, long long m) {
    b %= m;
    long long res = 1;
    while (e > 0) {
        if (e & 1)
            res = res * b % m;
        b = b * b % m;
        e >>= 1;
    }
    return res;
}
