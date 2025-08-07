struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;
bool isHappy(int n);

int searchLinkedList(int x) {
    struct Node* curr = head;

    while (curr != NULL) {
        if (curr->data == x) {
            return 1;
        }
        curr = curr->next;
    }
    return 0;
}

void insertAtFirst(int data) {
    struct Node* ptr;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;
};

bool isHappy(int n) {
    head = NULL;
    insertAtFirst(n);

    while (1) {
        int sq = 0;
        while (n > 0) {
            int digit = n % 10;
            sq += digit * digit;
            n = n / 10;
        }

        if (sq == 1) {
            return true;
        }

        if (searchLinkedList(sq)) {
            return false; 
        }

        insertAtFirst(sq);
        n = sq;
    }
}