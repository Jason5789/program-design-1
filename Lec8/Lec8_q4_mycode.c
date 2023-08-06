int calcul_GCD(int in_a,int in_b){
    if(in_a%in_b==0){
        return in_b;
    }
	else{
        return calcul_GCD(in_b,in_a%in_b);
    }
}

void fraction_adder(int a_numerator, int a_denominator, int b_numerator, int b_denominator, int *c_numerator_ptr, int *c_denominator_ptr) {
	int lcm=a_denominator*b_denominator/calcul_GCD(a_denominator,b_denominator);
	
    a_numerator*=lcm/a_denominator;
    b_numerator*=lcm/b_denominator;
    
    int d=a_numerator+b_numerator;
    int newgcd=calcul_GCD(d,lcm);
    
    *c_numerator_ptr=d/newgcd;
    *c_denominator_ptr=lcm/newgcd;
}