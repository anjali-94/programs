#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = data;
    p->next = NULL;
    return p;
}

struct Node* mergeSortedLists(struct Node* q, struct Node* r) {
    struct Node dummy;
    struct Node* tail = &dummy;

    while (q && r) {
        if (q->data <= r->data) {
            tail->next = q;
            q = q->next;
        } else {
            tail->next = r;
            r = r->next;
        }
        tail = tail->next;
    }

    tail->next = (q != NULL) ? q : r;

    return dummy.next;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}


int main() {
    struct Node* q = createNode(5);
    struct Node* q1 = createNode(8);
    struct Node* q2 = createNode(9);
    q->next = q1;
    q1->next = q2;

    struct Node* r = createNode(3);
    struct Node* r1 = createNode(4);
    struct Node* r2 = createNode(6);
    r->next = r1;
    r1->next = r2;

    struct Node* mergedList = mergeSortedLists(q, r);
    printf("Merged List: ");
    printList(mergedList);



    return 0;
}
