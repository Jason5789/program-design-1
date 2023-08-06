void solve(int *A, int *B, int *op_cnt){
	for(int i=0 ; i<N ; i++){
    	if( B[i] > A[i] ){
            *op_cnt += 1;
        	A[i] = B[i];
        }
    }
}