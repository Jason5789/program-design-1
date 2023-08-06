int full_adder_c(int a, int b ,int c) {
    int ans = ( a+b+c>1 )?1:0;
    return ans;
}

int full_adder_x(int a, int b, int c) {
    int ans = ( a+b+c==3 || a+b+c==1 )?1:0;
    return ans;
}