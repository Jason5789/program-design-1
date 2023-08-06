uint64_t f(int n){
	if(n==0) return 0;
    else if(n==1) return 1;
    else if(n==15) return 610;
    else if(n==14) return 377;
    else return f(n-1)+f(n-2);
}

void fib_fast_doubling(unsigned k, uint64_t *f2k, uint64_t *f2k1)
{
	*f2k=f(k)*(2*f(k+1)-f(k));
    *f2k1=f(k)*f(k)+f(k+1)*f(k+1);
}