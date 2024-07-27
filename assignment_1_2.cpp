// ---------------------------------------------------------------------------
// 1. Write a program to perform following operations on a circular singly linked list
// 1. Insert an element at the beginning, middle ,end
// 2. Delete an element from the beginning, middle,end
// 3. Reverse the list
// 4. Search an element
// 5. Sort the list
// 6. Insert data in sorted order
// 7. Update a given element
// 8. From a given list delete data in sorted order.
// ---------------------------------------------------------------------------
#include <iostream>
using namespace std;
// Node structure for circular singly linked list
struct Node {
 int data;
 Node* next;
 Node(int d) : data(d), next(nullptr) {}
};
class CircularSinglyLinkedList {
private:
 Node* head;
public:
 CircularSinglyLinkedList() : head(nullptr) {}
 // Function to insert an element at the beginning of the list
 void insertAtBeginning(int data) {
 Node* newNode = new Node(data);
 if (!head) {
 newNode->next = newNode;
 head = newNode;
 } else {
 newNode->next = head->next;
 head->next = newNode;
 }
 }
 // Function to insert an element at the middle of the list
 void insertAtMiddle(int data) {
 if (!head) {
 cout << "List is empty. Inserting at middle not possible." << endl;
 return;
 }
 // Counting the number of nodes in the list
 int count = 0;
 Node* temp = head->next;
 do {
 count++;
 temp = temp->next;
 } while (temp != head->next);
 // Finding the middle position
 int middle = count / 2;
 // Moving the temporary pointer to the middle position
 temp = head->next;
 for (int i = 1; i < middle; i++) {
 temp = temp->next;
 }
 // Creating a new node with the provided data
 Node* newNode = new Node(data);

 // Inserting the new node after the middle node
 newNode->next = temp->next;
 temp->next = newNode;
 }
 // Function to insert an element at the end of the list
 void insertAtEnd(int data) {
 Node* newNode = new Node(data);
 if (!head) {
 newNode->next = newNode;
 head = newNode;
 } else {
 newNode->next = head->next;
 head->next = newNode;
 head = newNode;
 }
 }
 // Function to delete an element from the beginning of the list
 void deleteFromBeginning() {
 if (!head) {
 cout << "List is empty. No element to delete." << endl;
 return;
 }
 Node* temp = head->next;
 if (temp == head) {
 delete head;
 head = nullptr;
 } else {
 head->next = temp->next;
 delete temp;
 }
 }
 // Function to delete an element from the middle of the list
 void deleteFromMiddle() {
 if (!head) {
 cout << "List is empty. No element to delete." << endl;
 return;
 }
 // Counting the number of nodes in the list
 int count = 0;
 Node* temp = head->next;
 do {
 count++;
 temp = temp->next;
 } while (temp != head->next);
 // Finding the middle position
 int middle = count / 2;
 // Moving the temporary pointer to the middle position
 temp = head->next;
 Node* prev = head;
 for (int i = 1; i < middle; i++) {
 prev = temp;
 temp = temp->next;
 }
 // Deleting the middle node
 prev->next = temp->next;
 delete temp;
 }
 // Function to delete an element from the end of the list
 void deleteFromEnd() {
 if (!head) {
 cout << "List is empty. No element to delete." << endl;
 return;
 }
 Node* temp = head->next;
 if (temp == head) {
 delete head;
 head = nullptr;
 return;
 }
 while (temp->next != head) {
 temp = temp->next;
 }
 temp->next = head->next;
 delete head;
 head = temp;
 }
 // Function to reverse the list
 void reverse() {
 if (!head) {
 cout << "List is empty." << endl;
 return;
 }
 Node* prev = nullptr;
 Node* current = head->next;
 Node* nextNode;
 do {
 nextNode = current->next;
 current->next = prev;
 prev = current;
 current = nextNode;
 } while (current != head->next);
 head->next = prev;
 head = prev;
 }
 // Function to search for an element
 bool search(int key) {
 if (!head) {
 return false;
 }
 Node* temp = head->next;
 do {
 if (temp->data == key) {
 return true;
 }
 temp = temp->next;
 } while (temp != head->next);
 return false;
 }
 // Function to sort the list (insertion sort)
 void sort() {
 if (!head) {
 cout << "List is empty." << endl;
 return;
 }
 Node* current = head->next;
 Node* index = nullptr;
 int temp;
 if (current != head) {
 index = current->next;
 }
 while (current != head) {
 while (index != head->next) {
 if (current->data > index->data) {
 temp = current->data;
 current->data = index->data;
 index->data = temp;
 }
 index = index->next;
 }
 current = current->next;
 if (current != head) {
 index = current->next;
 }
 }
 }
 // Function to insert data in sorted order
 void insertInSortedOrder(int data) {
 if (!head) {
 insertAtBeginning(data);
 return;
 }
 if (data <= head->next->data) {
 insertAtBeginning(data);
 return;
 }
 Node* current = head->next;
 while (current->next != head && current->next->data < data) {
 current = current->next;
 }
 Node* newNode = new Node(data);
 newNode->next = current->next;
 current->next = newNode;
 }
 // Function to update a given element
 void updateElement(int oldData, int newData) {
 if (!head) {
 cout << "List is empty." << endl;
 return;
 }
 Node* temp = head->next;
 do {
 if (temp->data == oldData) {
 temp->data = newData;
 return;
 }
 temp = temp->next;
 } while (temp != head->next);
 cout << "Element not found." << endl;
 }
 // Function to display the list
 void display() {
 if (!head) {
 cout << "List is empty." << endl;
 return;
 }
 Node* temp = head->next;
 cout << "List: ";
 do {
 cout << temp->data << " ";
 temp = temp->next;
 } while (temp != head->next);
 cout << endl;
 }
 // Destructor to free memory
 ~CircularSinglyLinkedList() {
 if (!head) return;
 Node* temp = head->next;
 Node* nextNode;
 while (temp != head) {
 nextNode = temp->next;
 delete temp;
 temp = nextNode;
 }
 delete head;
 }
};
int main() {
 CircularSinglyLinkedList list;
 int choice;
 int data, oldData, newData;
 do {
 cout << "\nCircular Singly Linked List Operations:\n";
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
