int fire(struct Car *head) {
    struct Car *car;
    int count=0;
    int people=0;
    int ans=0;
    for(car=head ; car!=NULL ; car=car->next){
        if(count==0){
            car=car->next;
            count=1;
        }

        people+=car->passenger;

        if(car->flammable>people){
            ans++;
        }
        else{
            break;
        }
    }
    return ans;
}