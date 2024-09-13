#include<stdio.h>
#include<stdio.h>
struct Node{
int data;
struct Node*next;
};
struct Node* createNode(int data)
 {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = NULL;
return newNode;
}

void insertAtBeginning (struct Node** head, int data) {
struct Node* newNode = createNode(data);
newNode->next = *head;
*head = newNode;
}
void deleteNode(struct Node** head, int value) {
 struct Node* temp = *head;
struct Node* prev = NULL;
if (temp != NULL && temp->data == value) {
*head = temp->next;
free(temp);
return;
}
while (temp != NULL && temp->data != value) {
{
prev = temp;
temp = temp->next;
}
}

if (temp == NULL) return;

prev->next = temp->next;
void traverseList(struct Node* head) {
struct Node* temp = head;
while (temp != NULL) {
}

printf("%d -> ", temp->data);

temp = temp->next;

}

int main() {
struct Node* head = NULL;
insertAtBeginning(&head, 10);
insertAtBeginning(&head, 20);
insertAtBeginning(&head, 30);
printf("Linked List after insertion:\n");
traverseList(head);
deleteNode(&head, 20);
printf("Linked List after deletion:\n");
traverseList(head);
return 0;
}
