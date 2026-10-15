class LinkedListStack {
    struct node{
        int data;
        node* next;

        node(int x){
            data = x;
            next = NULL;
        }
    };
    node* head;
public:
    LinkedListStack() {
        head = NULL;

    }
    
    void push(int x) {
        
        node*temp = new node(x);
        temp->next = head ;
        head = temp;
   
    }
    
    int pop() {
        if(head== NULL){
            return -1;
        }
        node* temp = head;
        int x = temp->data;
        head = head->next;
        delete temp;
        return x;
  
    }
    
   int top() {
        if (head == NULL) {
            return -1;
        }
        return head->data;
    }

    bool isEmpty() {
        return head == NULL;
    }
};
