

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;

void enqueue_struct(Queue* , int);
int dequeue_struct(Queue *);

void enqueue_struct(Queue* q, int x){
  NodePtr new_node=(NodePtr) malloc(sizeof(Node));
if(new_node){ 
  /*Finish enqueue */
  new_node->data = x;  
  new_node->nextPtr = NULL; 
    if(q->size == 0) {
      q->headPtr = new_node;  
      q->tailPtr = new_node; }
    else {
      q->tailPtr->nextPtr = new_node;  
      q->tailPtr = new_node; }
    q->size++;
 }
}


int dequeue_struct(Queue *q){
   
if(q->size == 0)
    {
      printf("Empty queue\n");
        return 0;
    }
    NodePtr t = q->headPtr;  
    int value = t->data;
    q->headPtr = t->nextPtr;  
    if (q->size == 1) {
        q->tailPtr = NULL;  
    }
    q->size--;  
    free(t);
       /*Finish dequeue */  
   return value;

   

   }
   
   
   


