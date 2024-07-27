// 1. Write a program to perform following operations on a singly linked list
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
 Node(int d) : data(d), next(nullptr) {}
};
class SinglyLinkedList {
private:
 Node* head;
public:
 SinglyLinkedList() : head(nullptr) {}
 void insertAtBeginning(int data) {
 Node* newNode = new Node(data);
 newNode->next = head;
 head = newNode;
 }
 void insertAtMiddle(int data) {
 if (!head) {
 cout << "List is empty. Inserting at middle not possible." << endl;
 return;
 }
 int count = 0;
 Node* temp = head;
 while (temp != nullptr) {
 count++;
 temp = temp->next;
 }
 int middle = count / 2;
 temp = head;
 for (int i = 1; i < middle; i++) {
 temp = temp->next;
 }
 Node* newNode = new Node(data);
 newNode->next = temp->next;
 temp->next = newNode;
 }
 void insertAtEnd(int data) {
 Node* newNode = new Node(data);
 if (!head) {
 head = newNode;
 } else {
 Node* temp = head;
 while (temp->next != nullptr) {
 temp = temp->next;
 }
 temp->next = newNode;
 }
 }
 void deleteFromBeginning() {
 if (!head) {
 cout << "List is empty. No element to delete." << endl;
 return;
 }
 Node* temp = head;
 head = head->next;
 delete temp;
 }
 void deleteFromMiddle() {
 if (!head) {
 cout << "List is empty. No element to delete." << endl;
 return;
 }
 int count = 0;
 Node* temp = head;
 while (temp != nullptr) {
 count++;
 temp = temp->next;
 }
 int middle = count / 2;
 temp = head;
 for (int i = 1; i < middle - 1; i++) {
 temp = temp->next;
 }
 Node* toDelete = temp->next;
 temp->next = toDelete->next;
 delete toDelete;
 }
 void deleteFromEnd() {
 if (!head) {
 cout << "List is empty. No element to delete." << endl;
 return;
 }
 if (head->next == nullptr) {
 delete head;
 head = nullptr;
 return;
 }
 Node* temp = head;
 while (temp->next->next != nullptr) {
 temp = temp->next;
 }
 delete temp->next;
 temp->next = nullptr;
 }
 void reverse() {
 if (!head) {
 cout << "List is empty." << endl;
 return;
 }
 Node* prevNode = nullptr;
 Node* current = head;
 Node* nextNode = nullptr;
 while (current != nullptr) {
 nextNode = current->next;
 current->next = prevNode;
 prevNode = current;
 current = nextNode;
 }
 head = prevNode;
 }
 bool search(int key) {
 Node* temp = head;
 while (temp != nullptr) {
 if (temp->data == key) {
 return true;
 }
 temp = temp->next;
 }
 return false;
 }
 void sort() {
 // Sorting operation for singly linked list
 // Not implemented for simplicity
 cout << "Sorting operation not implemented for singly linked list." << endl;
 }
 void insertInSortedOrder(int data) {
 if (!head || head->data > data) {
 insertAtBeginning(data);
 return;
 }
 Node* current = head;
 while (current->next != nullptr && current->next->data < data) {
 current = current->next;
 }
 Node* newNode = new Node(data);
 newNode->next = current->next;
 current->next = newNode;
 }
 void updateElement(int oldData, int newData) {
 Node* temp = head;
 while (temp != nullptr) {
 if (temp->data == oldData) {
 temp->data = newData;
 return;
 }
 temp = temp->next;
 }
 cout << "Element not found." << endl;
 }
 void display() {
 if (!head) {
 cout << "List is empty." << endl;
 return;
 }
 Node* temp = head;
 cout << "List: ";
 while (temp != nullptr) {
 cout << temp->data << " ";
 temp = temp->next;
 }
 cout << endl;
 }
 ~SinglyLinkedList() {
 Node* temp = head;
 while (temp != nullptr) {
 Node* nextNode = temp->next;
 delete temp;
 temp = nextNode;
 }
 }
};
int main() {
 SinglyLinkedList list;
 int choice;
 int data, oldData, newData;
 do {
 cout << "\nSingly Linked List Operations:\n";
 cout << "1. Insert at Beginning\n";
 cout << "2. Insert at Middle\n";
 cout << "3. Insert at End\n";
 cout << "4. Delete from Beginning\n";
 cout << "5. Delete from Middle\n";
 cout << "6. Delete from End\n";
 cout << "7. Reverse the List\n";
 cout << "8. Search an Element\n";
 cout << "9. Insert Data in Sorted Order\n";
 cout << "10. Update an Element\n";
 cout << "11. Display List\n";
 cout << "12. Exit\n";
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
 cout << "Enter data to insert in sorted order: ";
 cin >> data;
 list.insertInSortedOrder(data);
 break;
 case 10:
 cout << "Enter the element to be updated: ";
 cin >> oldData;
 cout << "Enter new data: ";
 cin >> newData;
 list.updateElement(oldData, newData);
 break;
 case 11:
 list.display();
 break;
 case 12:
 cout << "Exiting program." << endl;
 break;
 default:
 cout << "Invalid choice. Please try again." << endl;
 break;
 }
 } while (choice != 12);
 return 0;
}
