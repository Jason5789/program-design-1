Location *parse_url(char *url)
{
    Location *locat;
    locat=malloc(sizeof(Location));
    int special[4];
    int special_i[5];
    int special_int=0;
    int path_time=0;
    int port_time=0;
    int have_port=0;
    char* spec_char[5]={":","/","?","#","\n"};

    for(int i=0 ; i<5 ; i++){
        special[i]=-1;
        special_i[i]=4;
    }
    special_i[4]=4;

    for(int i=0 ; i<strlen(url) ; i++){
        if(url[i]==':' &&port_time<2){
            port_time++;
            if(port_time==2){
                special[0]=i;
                special_i[special_int++]=0;
                have_port=1;
            }
        }
        else if(url[i]=='/'&&path_time<3){
            path_time++;
            if(path_time==3){
                special[1]=i;
                special_i[special_int++]=1;
            }
        }
        else if(url[i]=='?'){
            special[2]=i;
            special_i[special_int++]=2;
        }
        else if(url[i]=='#'){
            special[3]=i;
            special_i[special_int++]=3;
        }
    }
    
    locat->protocol=strtok(url,"://");
    locat->host=strtok(NULL,spec_char[special_i[have_port++]]);
    if(special[1]!=-1){
        locat->pathname=strtok(NULL,spec_char[special_i[have_port++]]);
    }
    if(special[2]!=-1){
        locat->search=strtok(NULL,spec_char[special_i[have_port++]]);
    }
    if(special[3]!=-1){
        locat->hash=strtok(NULL,spec_char[special_i[have_port++]]);
    }

    locat->port=0;
    if(special[0]!=-1){
        locat->host=strtok(locat->host,":");
        char* portstr=strtok(NULL,"\n");
        int numlen=strlen(portstr);
        for(int i=0 ; i<numlen ; i++){
            int ans=portstr[i]-'0';
            locat->port=locat->port*10+ans;
        }
    }

    if(locat->pathname==NULL){
        locat->pathname="";
    }
    if(locat->search==NULL){
        locat->search="";
    }
    if(locat->hash==NULL){
        locat->hash="";
    }

    for(int i=0 ; i<strlen(locat->host) ; i++){
        locat->host=strtok(locat->host,"/");
    }

    return locat;
}