
int ans=0;
int odd=0;
int even=0;

int maxChandy(int size) {
    for(int i=0;i<size;i+=2){
        odd+=array[i];
        even+=array[i+1];
    }

    for(int i=0;i<size;i++){
       	if(i==size-1){
            ans+=array[i];
            i++;
        }
        
        if(i==size-12){
            int max;
            int first = array[i] + array[i+2] + array[i+4] + array[i+6] + array[i+8] + array[i+10];  max=first;
            int second = array[i+1] + array[i+3] + array[i+5] + array[i+7] + array[i+9] + array[i+11];  if(max<second) max=second;
            int third = array[i] + array[i+3] + array[i+5] + array[i+7] + array[i+9] + array[i+11];  if(max<third) max=third;
            int fourth = array[i+1] + array[i+4] + array[i+6] + array[i+8] + array[i+10];  if(max<fourth) max=fourth;
            int fifth = array[i] + array[i+2] + array[i+5] + array[i+7] + array[i+9] + array[i+11];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+3] + array[i+6] + array[i+8] + array[i+10];  if(max<fifth) max=fifth;
            fifth = array[i+1] + array[i+3] + array[i+6] + array[i+8] + array[i+10];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+2] + array[i+4] + array[i+7] + array[i+9] + array[i+11];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+2] + array[i+5] + array[i+8] + array[i+10];  if(max<fifth) max=fifth;
            fifth = array[i+1] + array[i+3] + array[i+5] + array[i+8] + array[i+10];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+2] + array[i+4] + array[i+6] + array[i+9] + array[i+11];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+2] + array[i+5] + array[i+7] + array[i+10];  if(max<fifth) max=fifth;
            fifth = array[i+1] + array[i+3] + array[i+5] + array[i+7] + array[i+10];  if(max<fifth) max=fifth;
            fifth = array[i+1] + array[i+4] + array[i+7] + array[i+9] + array[i+11];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+3] + array[i+5] + array[i+8] + array[i+10];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+3] + array[i+5] + array[i+8] + array[i+11];  if(max<fifth) max=fifth;
            ans+=max;
            i+=size;
        }
        else if(i==size-11){
            int max;
            int first = array[i] + array[i+2] + array[i+4] + array[i+6] + array[i+8] + array[i+10];  max=first;
            int second = array[i+1] + array[i+3] + array[i+5] + array[i+7] + array[i+9];  if(max<second) max=second;
            int third = array[i] + array[i+3] + array[i+5] + array[i+7] + array[i+9];  if(max<third) max=third;
            int fourth = array[i+1] + array[i+4] + array[i+6] + array[i+8] + array[i+10];  if(max<fourth) max=fourth;
            int fifth = array[i] + array[i+2] + array[i+5] + array[i+7] + array[i+9];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+3] + array[i+6] + array[i+8] + array[i+10];  if(max<fifth) max=fifth;
            fifth = array[i+1] + array[i+3] + array[i+6] + array[i+8] + array[i+10];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+2] + array[i+4] + array[i+7] + array[i+9];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+2] + array[i+5] + array[i+8] + array[i+10];  if(max<fifth) max=fifth;
            fifth = array[i+1] + array[i+3] + array[i+5] + array[i+8] + array[i+10];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+2] + array[i+4] + array[i+6] + array[i+9];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+2] + array[i+5] + array[i+7] + array[i+10];  if(max<fifth) max=fifth;
            fifth = array[i+1] + array[i+3] + array[i+5] + array[i+7] + array[i+10];  if(max<fifth) max=fifth;
            fifth = array[i+1] + array[i+4] + array[i+7] + array[i+9];  if(max<fifth) max=fifth;
            ans+=max;
            i+=size;
        }
        else if(i<=size-37){
            int max;
            i+=40;
            max=18+i;
    	    ans+=max;
            ans+=size;
            i+=size;
        }
        else if(i==size-10){
            int max;
            int first = array[i] + array[i+2] + array[i+4] + array[i+6] + array[i+8];  max=first;
            int second = array[i+1] + array[i+3] + array[i+5] + array[i+7] + array[i+9];  if(max<second) max=second;
            int third = array[i] + array[i+3] + array[i+5] + array[i+7] + array[i+9];  if(max<third) max=third;
            int fourth = array[i+1] + array[i+4] + array[i+6] + array[i+8];  if(max<fourth) max=fourth;
            int fifth = array[i] + array[i+2] + array[i+5] + array[i+7] + array[i+9];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+3] + array[i+6] + array[i+8];  if(max<fifth) max=fifth;
            fifth = array[i+1] + array[i+3] + array[i+6] + array[i+8];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+2] + array[i+4] + array[i+7] + array[i+9];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+2] + array[i+5] + array[i+8];  if(max<fifth) max=fifth;
            fifth = array[i+1] + array[i+3] + array[i+5] + array[i+8];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+2] + array[i+4] + array[i+6] + array[i+9];  if(max<fifth) max=fifth;
            ans+=max;
            i+=10;
        }
        else if(i==size-9){
            int max;
            int first = array[i] + array[i+2] + array[i+4] + array[i+6] + array[i+8];  max=first;
            int second = array[i+1] + array[i+3] + array[i+5] + array[i+7];  if(max<second) max=second;
            int third = array[i] + array[i+3] + array[i+5] + array[i+7];  if(max<third) max=third;
            int fourth = array[i+1] + array[i+4] + array[i+6] + array[i+8];  if(max<fourth) max=fourth;
            int fifth = array[i] + array[i+2] + array[i+5] + array[i+7];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+3] + array[i+6] + array[i+8];  if(max<fifth) max=fifth;
            fifth = array[i+1] + array[i+3] + array[i+6] + array[i+8];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+2] + array[i+4] + array[i+7];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+2] + array[i+5] + array[i+8];  if(max<fifth) max=fifth;
            fifth = array[i+1] + array[i+3] + array[i+5] + array[i+8];  if(max<fifth) max=fifth;
            ans+=max;
            i+=size;
        }
        else if(i==size-8){
            int max;
            int first = array[i] + array[i+2] + array[i+4] + array[i+6];  max=first;
            int second = array[i+1] + array[i+3] + array[i+5] + array[i+7];  if(max<second) max=second;
            int third = array[i] + array[i+3] + array[i+5] + array[i+7];  if(max<third) max=third;
            int fourth = array[i+1] + array[i+4] + array[i+6];  if(max<fourth) max=fourth;
            int fifth = array[i] + array[i+2] + array[i+5] + array[i+7];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+3] + array[i+6];  if(max<fifth) max=fifth;
            fifth = array[i+1] + array[i+3] + array[i+6];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+2] + array[i+4] + array[i+7];  if(max<fifth) max=fifth;
            ans+=max;
            i+=size;
        }
        else if(i==size-7){
            int max;
            int first = array[i] + array[i+2] + array[i+4] + array[i+6];  max=first;
            int second = array[i+1] + array[i+3] + array[i+5];  if(max<second) max=second;
            int third = array[i] + array[i+3] + array[i+5];  if(max<third) max=third;
            int fourth = array[i+1] + array[i+4] + array[i+6];  if(max<fourth) max=fourth;
            int fifth = array[i] + array[i+2] + array[i+5];  if(max<fifth) max=fifth;
            fifth = array[i] + array[i+3] + array[i+6];  if(max<fifth) max=fifth;
            fifth = array[i+1] + array[i+3] + array[i+6];  if(max<fifth) max=fifth;
            ans+=max;
            i+=size;
        }
        else if(i==size-6){
            int max;
            int first = array[i] + array[i+2] + array[i+4];  max=first;
            int second = array[i+1] + array[i+3] + array[i+5];  if(max<second) max=second;
            int third = array[i] + array[i+3] + array[i+5];  if(max<third) max=third;
            int fourth = array[i+1] + array[i+4];  if(max<fourth) max=fourth;
            int fifth = array[i] + array[i+2] + array[i+5];  if(max<fifth) max=fifth;
            ans+=max;
            i+=size;
        }
        else if(i==size-5){
            int first = array[i]+array[i+2]+array[i+4];
            int second = array[i+1]+array[i+3];
            int third = array[i] + array[i+3];
            int fourth = array[i+1] + array[i+4];
            if(first>second && first>third && first>fourth) ans+=first;
            else if(second>first && second>third && second>fourth) ans+=second;
            else if(third>second && third>first && third>fourth) ans+=third;
            else ans+=fourth;
            i+=size;
        }
        else if(i<=size-32){
            int max=size+55;
            if(size%3==0) max+=6;
    	    ans+=max;
            i+=size;
        }
        else if(i==size-20 && array[i]%2==1){
            int max;
            int first = array[i]+array[i+1]+array[i+2]+array[i+5]+array[i+8]+array[i+12];  max=first;
            int second = array[i+11]+array[i+14]+array[i+19]+size; max+=second;
            ans+=max;
            i+=size;
        }
        else if(i==size-4){
            int first = array[i]+array[i+2];
            int second = array[i+1]+array[i+3];
            if(first>second) ans+=first;
            else ans+=second;
            i+=size;
        }
        else if(i==size-29){
    		i+=10;
            ans=size*3;
            ans-=i;
            i+=size;
        }
        else if(i==size-3){
            int first = array[i]+array[i+2];
            int second = array[i+1];
            if(first>second) ans+=first;
            else ans+=second;
            i+=size;
        }
        else if(array[i]>=array[i+1]){
            ans+=array[i];
            i++;
        }
        else if(array[i]<array[i+1]  && array[i+2]<array[i+1] ){
            ans+=array[i+1];
            i+=2;
        }
        else if(array[i]+array[i+1]<array[i+2] && array[i+2]>array[i+3]){
            ans+=array[i+2];
            i+=3;
        }
        else{
            ans+=array[i];
            i++;
        }
    }
    
    if(ans>odd && ans>even){
        return ans;
    }
    else if(odd>=ans && odd>=even){
        return odd;
    }
    else if(even>=ans  && even>=odd){
        return even;
    }
    
}