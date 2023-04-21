int soma(int A, int B) {
    if (A == B) {
        return A;
    } else {
        return A + soma(A + 1, B);
    }
}