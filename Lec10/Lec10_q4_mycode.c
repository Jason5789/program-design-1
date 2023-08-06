void convert(char *arr[], int count){
    for(int i=0 ; i<count ; i++){
        int leng=strlen(arr[i]);
        char str[leng];

        strcpy(str,arr[i]);
        strcpy(arr[i],"");
        
        for(int j=0 ; j<leng ; j++){
            switch(str[j]){
                case 'a':
                    strcat(arr[i],"(2)1");
                    break;
                case 'b':
                    strcat(arr[i],"(2)2");
                    break;
                case 'c':
                    strcat(arr[i],"(2)3");
                    break;
                case 'd':
                    strcat(arr[i],"(3)1");
                    break;
                case 'e':
                    strcat(arr[i],"(3)2");
                    break;
                case 'f':
                    strcat(arr[i],"(3)3");
                    break;
                case 'g':
                    strcat(arr[i],"(4)1");
                    break;
                case 'h':
                    strcat(arr[i],"(4)2");
                    break;
                case 'i':
                    strcat(arr[i],"(4)3");
                    break;
                case 'j':
                    strcat(arr[i],"(5)1");
                    break;
                case 'k':
                    strcat(arr[i],"(5)2");
                    break;
                case 'l':
                    strcat(arr[i],"(5)3");
                    break;
                case 'm':
                    strcat(arr[i],"(6)1");
                    break;
                case 'n':
                    strcat(arr[i],"(6)2");
                    break;
                case 'o':
                    strcat(arr[i],"(6)3");
                    break;
                case 'p':
                    strcat(arr[i],"(7)1");
                    break;
                case 'q':
                    strcat(arr[i],"(7)2");
                    break;
                case 'r':
                    strcat(arr[i],"(7)3");
                    break;
                case 's':
                    strcat(arr[i],"(7)4");
                    break;
                case 't':
                    strcat(arr[i],"(8)1");
                    break;
                case 'u':
                    strcat(arr[i],"(8)2");
                    break;
                case 'v':
                    strcat(arr[i],"(8)3");
                    break;
                case 'w':
                    strcat(arr[i],"(9)1");
                    break;
                case 'x':
                    strcat(arr[i],"(9)2");
                    break;
                case 'y':
                    strcat(arr[i],"(9)3");
                    break;
                case 'z':
                    strcat(arr[i],"(9)4");
                    break;
                case ' ':
                    strcat(arr[i],".");
                    break;
                case '\n':
                    strcat(arr[i],"?");
                    break;
            }
        }

        for(int k=0 ; k<strlen(arr[i]) ; k++){
            if(arr[i][k]=='.'){
                arr[i][k]=' ';
            }
            else if(arr[i][k]=='?'){
                arr[i][k]='\n';
            }
        }

    }
}