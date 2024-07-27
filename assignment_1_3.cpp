
// ---------------------------------------------------------------------------
// 2. Write a program to perform following operations on a circular doubly linked list
// 1. Insert an element at the beginning, middle ,end
// 2. Delete an element from the beginning, middle, end
// 3. Reverse the list
// 4. Search an element
// 5. Sort the list
// 6. Insert data in sorted order
// 7. Update a given element
// 8. From a given list delete data in sorted order.
// ---------------------------------------------------------------------------
#include <iostream>
using namespace std;
struct Node {
 int data;
 Node* next;
 Node* prev;
 Node(int d) : data(d), next(NULL), prev(NULL) {}
};
class CircularDoublyLinkedList {
private:
 Node* head;
public:
 CircularDoublyLinkedList() : head(NULL) {}
 void insertAtBeginning(int data) {
 Node* newNode = new Node(data);
 if (!head) {
 head = newNode;
 head->next = head->prev = head;
 } else {
 newNode->next = head;
 newNode->prev = head->prev;
 head->prev->next = newNode;
 head->prev = newNode;
 head = newNode;
 }
 }
 void insertAtMiddle(int data) {
 if (!head) {
 cout << "List is empty. Inserting at middle not possible." << endl;
 return;
 }
 int count = 0;
 Node* temp = head;
 do {
 count++;
 temp = temp->next;
 } while (temp != head);
 int middle = count / 2;
 temp = head;
 for (int i = 1; i < middle; i++) {
 temp = temp->next;
 }
 Node* newNode = new Node(data);
 newNode->next = temp->next;
 newNode->prev = temp;
 temp->next->prev = newNode;
 temp->next = newNode;
 }
 void insertAtEnd(int data) {
 Node* newNode = new Node(data);
 if (!head) {
 head = newNode;
 head->next = head->prev = head;
 } else {
 newNode->prev = head->prev;
 newNode->next = head;
 head->prev->next = newNode;
 head->prev = newNode;
 }
 }
 void deleteFromBeginning() {
 if (!head) {
 cout << "List is empty. No element to delete." << endl;
 return;
 }
 Node* temp = head;
 if (head->next == head) {
 delete head;
 head = NULL;
 } else {
 head->next->prev = head->prev;
 head->prev->next = head->next;
 head = head->next;
 delete temp;
 }
 }
 void deleteFromMiddle() {
 if (!head) {
 cout << "List is empty. No element to delete." << endl;
 return;
 }
 int count = 0;
 Node* temp = head;
 do {
 count++;
 temp = temp->next;
 } while (temp != head);
 int middle = count / 2;
 temp = head;
 for (int i = 1; i < middle; i++) {
 temp = temp->next;
 }
 Node* toDelete = temp->next;
 temp->next = toDelete->next;
 toDelete->next->prev = temp;
 delete toDelete;
 }
 void deleteFromEnd() {
 if (!head) {
 cout << "List is empty. No element to delete." << endl;
 return;
 }
 Node* temp = head->prev;
 if (head->next == head) {
 delete head;
 head = NULL;
 } else {
 temp->prev->next = head;
 head->prev = temp->prev;
 delete temp;
 }
 }
 void reverse() {
 if (!head) {
 cout << "List is empty." << endl;
 return;
 }
 Node* temp = head;
 do {
 Node* nextNode = temp->next;
 temp->next = temp->prev;
 temp->prev = nextNode;
 temp = nextNode;
 } while (temp != head);
 head = head->prev;
 }
 bool search(int key) {
 if (!head) {
 return false;
 }
 Node* temp = head;
 do {
 if (temp->data == key) {
 return true;
 }
 temp = temp->next;
 } while (temp != head);
 return false;
 }
 void sort() {
 if (!head) {
 cout << "List is empty." << endl;
 return;
 }
 Node* current = head;
 Node* index = NULL;
 int temp;
 if (current->next != head) {
 index = current->next;
 }
 while (current != head) {
 while (index != head) {
 if (current->data > index->data) {
 temp = current->data;
 current->data = index->data;
 index->data = temp;
 }
 index = index->next;
 }
 current = current->next;
 if (current->next != head) {
 index = current->next;
 }
 }
 }
 void insertInSortedOrder(int data) {
 if (!head) {
 insertAtBeginning(data);
 return;
 }
 Node* current = head;
 while (current->next != head && current->next->data < data) {
 current = current->next;
 }
 Node* newNode = new Node(data);
 newNode->next = current->next;
 newNode->prev = current;
 current->next->prev = newNode;
 current->next = newNode;
 }
 void updateElement(int oldData, int newData) {
 if (!head) {
 cout << "List is empty." << endl;
 return;
 }
 Node* temp = head;
 do {
 if (temp->data == oldData) {
 temp->data = newData;
 return;
 }
 temp = temp->next;
 } while (temp != head);
 cout << "Element not found." << endl;
 }
 void display() {
 if (!head) {
 cout << "List is empty." << endl;
 return;
 }
 Node* temp = head;
 cout << "List: ";
 do {
 cout << temp->data << " ";
 temp = temp->next;
 } while (temp != head);
 cout << endl;
 }
 ~CircularDoublyLinkedList() {
 if (!head) return;
 Node* temp = head;
 do {
 Node* nextNode = temp->next;
 delete temp;
 temp = nextNode;
 } while (temp != head);
 }
};
int main() {
 CircularDoublyLinkedList list;
 int choice;
 int data, oldData, newData;
 do {
 cout << "\nCircular Doubly Linked List Operations:\n";
 cout << "1. Insert at Beginning\n";
 cout << "2. Insert at Middle\n";
 cout << "3. Insert at End\n";
 cout << "4. Delete from Beginning\n";
 cout << "5. Delete from Middle\n";
 cout << "6. Delete from End\n";
 cout << "7. Reverse the List\n";
 cout << "8. Search an Element\n";
 cout << "9. Sort the List\n";
 cout << "10. Insert Data in Sorted Order\n";
 cout << "11. Update an Element\n";
 cout << "12. Display List\n";
 cout << "13. Exit\n";
 cout << "Enter your choice: ";
 cin >> choice;
 switch (choice) {
 case 1:
 cout << "Enter data to insert at beginning: ";
 cin >> data;
 list.insertAtBeginning(data);
 break;
 case 2:
 cout << "Enter data to insert at middle: ";
 cin >> data;
 list.insertAtMiddle(data);
 break;
 case 3:
 cout << "Enter data to insert at end: ";
 cin >> data;
 list.insertAtEnd(data);
 break;
 case 4:
 list.deleteFromBeginning();
 break;
 case 5:
 list.deleteFromMiddle();
 break;
 case 6:
 list.deleteFromEnd();
 break;
 case 7:
 list.reverse();
 break;
 case 8:
 cout << "Enter data to search: ";
 cin >> data;
 cout << "Element " << data << " found: " << (list.search(data) ? "Yes" : "No") << endl;
 break;
 case 9:
 list.sort();
 cout << "List sorted." << endl;
 break;
 case 10:
 cout << "Enter data to insert in sorted order: ";
 cin >> data;
 list.insertInSortedOrder(data);
 break;
 case 11:
 cout << "Enter the element to be updated: ";
 cin >> oldData;
 cout << "Enter new data: ";
 cin >> newData;
 list.updateElement(oldData, newData);
 break;
 case 12:
 list.display();
 break;
 case 13:
 cout << "Exiting program." << endl;
 break;
 default:
 cout << "Invalid choice. Please try again." << endl;
 break;
 }
 } while (choice != 13);
 return 0;
}
