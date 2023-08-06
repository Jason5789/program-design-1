void enqueue(prio_queue_t *const queue, int value, int weight) {
    struct node_s *new_node;
    node_t *node;
    node_t *node_last;
    new_node=malloc(sizeof(struct node_s));
    new_node->value=value;
    new_node->weight=weight;

    for(node = queue->head , node_last=NULL ; node ; node_last=node , node = node->next){
        if(node->weight>weight){
            break;
        }
    }

    new_node->next=node;
    if(node_last==NULL){
        queue->head=new_node;
    }
    else{
        node_last->next=new_node;
    }

}

node_t *dequeue(prio_queue_t *const queue) {
	if(queue->head!=NULL){
		struct node_t *delete;
        delete=queue->head;
        queue->head=queue->head->next;
        return delete;
	}
    else{
		return NULL;
	}
}