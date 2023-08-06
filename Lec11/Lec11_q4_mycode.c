unsigned long sw(unsigned char p){
        if(p>='00' && p<='09') return p-'00'+0;
        else if(p>='0a' && p<='0f') return p-'0a'+10;
        else if(p>='10' && p<='19') return p-'10'+16;
        else if(p>='1a' && p<='1f') return p-'1a'+16+10;
        else if(p>='20' && p<='29') return p-'20'+16*2;
        else if(p>='2a' && p<='2f') return p-'2a'+16*2+10;
        else if(p>='30' && p<='39') return p-'30'+16*3;
        else if(p>='3a' && p<='3f') return p-'3a'+16*3+10;
        else if(p>='40' && p<='49') return p-'40'+16*4;
        else if(p>='4a' && p<='4f') return p-'4a'+16*4+10;
        else if(p>='50' && p<='59') return p-'50'+16*5;
        else if(p>='5a' && p<='5f') return p-'5a'+16*5+10;
        else if(p>='60' && p<='69') return p-'60'+16*6;
        else if(p>='6a' && p<='6f') return p-'6a'+16*6+10;
        else if(p>='70' && p<='79') return p-'70'+16*7;
        else if(p>='7a' && p<='7f') return p-'7a'+16*7+10;
        else if(p>='80' && p<='89') return p-'80'+16*8;
        else if(p>='8a' && p<='8f') return p-'8a'+16*8+10;
        else if(p>='90' && p<='99') return p-'90'+16*9;
        else if(p>='9a' && p<='9f') return p-'9a'+16*9+10;
        else if(p>='a0' && p<='a9') return p-'a0'+16*10;
        else if(p>='aa' && p<='af') return p-'aa'+16*10+10;
        else if(p>='b0' && p<='b9') return p-'b0'+16*11;
        else if(p>='ba' && p<='bf') return p-'ba'+16*11+10;
        else if(p>='c0' && p<='c9') return p-'c0'+16*12;
        else if(p>='ca' && p<='cf') return p-'ca'+16*12+10;
        else if(p>='d0' && p<='d9') return p-'d0'+16*13;
        else if(p>='da' && p<='df') return p-'da'+16*13+10;
        else if(p>='e0' && p<='e9') return p-'e0'+16*14;
        else if(p>='ea' && p<='ef') return p-'ea'+16*14+10;
        else if(p>='f0' && p<='f9') return p-'f0'+16*15;
        else if(p>='fa' && p<='ff') return p-'fa'+16*15+10;
}

unsigned long construct(unsigned char parts[16])
{
    unsigned long long ans;
    unsigned long long ans1;
    unsigned long long ans2;
    unsigned long long two[8];
    
    two[0]=1;
    for(int i=0 ; i<8 ; i++){
        two[i+1]=two[i]*256;
    }

	for(int i=0 ; i<8 ; i++){
    	ans1+=sw(parts[i])*two[i];
        ans2+=sw(parts[i+8])*two[i];
    }
    ans=ans1^ans2;
    return ans;
}