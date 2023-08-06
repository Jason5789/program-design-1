float me[1024][256] = {0};

void print_C(unsigned int mask[][MAX_SIZE])
{
    for(int i=0 ; i<H ;i++){
        for(int j=0;j<W;j++){
            me[i][j]=mask[i][j];
        }
    }
}

void print_M(unsigned int mask[][MAX_SIZE])
{
	for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
        	me[i+1*H][j]=mask[i][j];
    	}
    }
}

void print_Y(unsigned int mask[][MAX_SIZE])
{
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
        	me[i+2*H][j]=mask[i][j];
    	}
    }
}

void print_K(unsigned int mask[][MAX_SIZE])
{
	for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
        	me[i+3*H][j]=mask[i][j];
    	}
    }
}

void CMYK_to_RGB()
{
    float a,b,c;
    int x,y,z;
	for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
        	a=255.0*(100.0-me[i][j])*(100.0-me[i+3*H][j])/10000.0;
            b=255.0*(100.0-me[i+H][j])*(100.0-me[i+3*H][j])/10000.0;
            c=255.0*(100.0-me[i+2*H][j])*(100.0-me[i+3*H][j])/10000.0;
            
            int x=a+0.5;
            int y=b+0.5;
            int z=c+0.5;
            
            image[i][j]=x*256*256+y*256+z;
    	}
    }
}