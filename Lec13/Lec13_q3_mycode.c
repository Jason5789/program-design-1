void MoveToTail() {
    int largest=-1000000;
    int largest_place=-1;
    int count=0;
    int count2=0;
    struct node *node1;
    struct node *node2;void MoveToTail() {
    int largest=-1000000;
    int largest_place=-1;
    int count=0;
    int count2=0;
    struct node *node1;
    struct node *node2;
    for(node1=head ; node1!=NULL ; node1=node1->next){
        if(largest<node1->val){
            largest=node1->val;
            largest_place=count;
        }
        count++;
    }
	
    for(node2=head ; node2->next!=NULL ; node2=node2->next){
        if(count2>=largest_place){
            node2->val=node2->next->val;
        }
        count2++;
    }
    
    if(node2->val!=largest){
        node2->val=largest;
    }
}
    for(node1=head ; node1!=NULL ; node1=node1->next){
        if(largest<node1->val){
            largest=node1->val;
            largest_place=count;
        }
        count++;
    }
	
    for(node2=head ; node2->next!=NULL ; node2=node2->next){
        if(count2>=largest_place){
            node2->val=node2->next->val;
        }
        count2++;
    }
    
    if(node2->val!=largest){
        node2->val=largest;
    }
}