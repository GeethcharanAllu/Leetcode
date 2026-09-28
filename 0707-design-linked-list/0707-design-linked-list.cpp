class MyLinkedList {
private:
  struct Node{
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
  };
  Node* head;
  int size;
public:
    MyLinkedList() {
        head=nullptr;
        size=0;
    }
    
    int get(int index) {
        if(index>=size || index<0){
            return -1;
        }
        Node* temp=head;
        while(index>0){
            temp=temp->next;
            index--;
        }
        return temp->data;
    }
    
    void addAtHead(int val) {
        Node* newnode=new Node(val);
        newnode->next=head;
        head=newnode;
        size++;
    }
    
    void addAtTail(int val) {
        Node* newnode=new Node(val);
        if(head==NULL){
            head=newnode;
        }
        else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>size){
            return;
        }
        if(index==0){
            addAtHead(val);
            return;
        }
        if(index==size){
            addAtTail(val);
            return;
        }
        Node* newnode=new Node(val);
        index--;
        Node* temp=head;
        while(index>0 && temp->next!=NULL){
            temp=temp->next;
            index--;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        size++;

    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>size){
            return;
        }
        if(index==0){
            head=head->next;
            size--;
            return;
        }
        else{
        Node* temp=head;
        index--;
        while(index>0){
            temp=temp->next;
            index--;
        }
        if(temp!=NULL && temp->next!=NULL){
            temp->next=temp->next->next;
            size--;
        }
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */