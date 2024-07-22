#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *prev;
    Node *next;
    Node(int d) {
        data = d;
        next = nullptr;
        prev = nullptr;
    }
};

void print(Node *head) {
    Node *curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

Node* insertEnd(Node *head, int data) {
    Node *temp = new Node(data);
    if (head == nullptr) 
        return temp;
    Node *curr = head;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

Node* rev(Node *head) {
    if (head == nullptr || head->next == nullptr)
        return head;
    Node *curr = head;
    Node *prev = nullptr;
    while (curr != nullptr) {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        head=curr;
        curr = curr->prev;
    }
    return head;
}

int main() {
    Node *head = nullptr;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);

    cout << "Original List: ";
    print(head);

    head = rev(head);

    cout << "Reversed List: ";
    print(head);

    return 0;
}

