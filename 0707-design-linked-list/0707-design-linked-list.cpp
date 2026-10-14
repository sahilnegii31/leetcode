
class node {
public:
    int val;
    node* next;

    node(int val) {
        this->val = val;
        next = NULL;
    }
};

class MyLinkedList {
public:
    node* head;
    int size;

    MyLinkedList() {
        head = NULL;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) {
            return -1;
        }

        node* temp = head;

        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }

        return temp->val;
    }

    void addAtHead(int val) {
        node* temp = new node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void addAtTail(int val) {
        node* p = new node(val);

        if (head == NULL) {
            head = p;
            size++;
            return;
        }

        node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = p;
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) {
            return;
        }

        if (index == 0) {
            addAtHead(val);
            return;
        }

        node* temp = head;

        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        node* p = new node(val);
        p->next = temp->next;
        temp->next = p;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        }

        if (index == 0) {
            node* del = head;
            head = head->next;
            delete del;
            size--;
            return;
        }

        node* temp = head;

        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        node* del = temp->next;
        temp->next = del->next;
        delete del;
        size--;
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