int cmp(const void *a, const void *b) {
    struct ESPer aa = *(struct ESPer *)a;
    struct ESPer bb = *(struct ESPer *)b;
    if(aa.level<bb.level){
        return -1;
    }
    else if(aa.level==bb.level){
        return 0;
    }
    else{
        return 1;
    }
}

void sort_level(struct ESPer *arr, int length) {
    qsort(arr,length,sizeof(struct ESPer),cmp);
}