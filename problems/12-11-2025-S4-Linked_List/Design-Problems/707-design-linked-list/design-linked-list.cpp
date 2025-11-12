class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = nullptr;
    }
};
class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    MyLinkedList() {

        head = tail = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if(index<0 || index>=size) return -1;
        else if(index==0) return head->val;
        else if(index==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=1;i<=index;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    
    void addAtHead(int val) {
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* temp = new Node(val);
        if(size==0) head = tail = temp; 
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>size) return;
        if(index==0){
            addAtHead(val);
            return;
        }
        if(index==size){
            addAtTail(val);
            return;
        }

        Node* temp = new Node(val);
        Node* t = head;
        for(int i=1;i<=index-1;i++){
            t = t->next;
        }
        temp->next = t->next;
        t->next = temp;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=size) return;
        else if(index == 0){
            head = head->next;
            size--;
            return;
        }
        else if(index==size-1){
            Node* temp = head;
            while(temp->next!=tail){
                temp = temp->next;
            }
            temp->next = nullptr;
            tail = temp;
            size--;
        }
        else{
            Node* temp = head;
            for(int i=1;i<=index-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next; 
            size--;
        }
    }
};