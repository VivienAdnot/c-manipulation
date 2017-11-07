
int addition(int x, int y) {
    int sum = x ^ y;
    int carry = x & y;

    while (carry != 0)
    {
        carry <<= 1;
        x = sum;
        y = carry;

        sum = x ^ y;
        carry = x & y;
    }

    return sum;
}
