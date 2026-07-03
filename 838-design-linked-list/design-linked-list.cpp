class Node {
    public:
    int val;
    Node* next;
    Node(int x){
        next = nullptr;
        val = x;
    }
};

class MyLinkedList {
public:
    Node* head;
    int size = 0;

    MyLinkedList() {
        head = nullptr;
    }
    
    int get(int index) {
        Node* current = head;
        if(index < 0 || index >= size) return -1;
        for(int i = 0 ; i < index ; i++){
            current = current->next;
        }
        return current->val;
    }
    
    void addAtHead(int val) {
        Node* newvar = new Node(val);
        if(this->head == nullptr) head = newvar;
        else{
            newvar->next = head;
            head = newvar;
        }
        size+=1;
    }

    void addAtTail(int val) {
        Node* newvar = new Node(val);
        Node* current = head;
        if(this->head == nullptr)head = newvar;
        else{
            for(int i = 0 ; i < size-1 ; i++) current = current->next;
            current->next = newvar;
        }
        size += 1;
    }
    
    void addAtIndex(int index, int val) {
        Node* current = head;
        if(index>size) return;
        else if(index == 0){
            addAtHead(val); return;
        }
        Node* newvar = new Node(val);
        for(int i = 1 ; i < index ; i++)current = current->next;
        newvar->next = current->next;
        current->next = newvar;
        size+=1;
    }
    
    void deleteAtIndex(int index) {
        if(index >= size) return;
        else if(index == 0) {
            Node* todelete = head;
            head = head->next;
            delete todelete; size -= 1; return;
        }
        Node* current = head;
        for(int i = 1 ; i < index ; i++)current = current->next;
        Node* save = (current->next)->next;
        delete current->next;
        current->next = save;

        size -= 1;
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