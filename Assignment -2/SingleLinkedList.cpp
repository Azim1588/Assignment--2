#include "SingleLinkedList.h"

SingleLinkedList::SingleLinkedList() : head(nullptr), tail(nullptr), num_items(0) {}

SingleLinkedList::~SingleLinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void SingleLinkedList::push_front(const int& item) {
    Node* new_node = new Node(item);
    if (empty()) {
        head = tail = new_node;
    }
    else {
        new_node->next = head;
        head = new_node;
    }
    ++num_items;
}

void SingleLinkedList::push_back(const int& item) {
    Node* new_node = new Node(item);
    if (empty()) {
        head = tail = new_node;
    }
    else {
        tail->next = new_node;
        tail = new_node;
    }
    ++num_items;
}

void SingleLinkedList::pop_front() {
    if (!empty()) {
        Node* temp = head;
        head = head->next;
        delete temp;
        --num_items;
        if (empty()) {
            tail = nullptr;
        }
    }
}

void SingleLinkedList::pop_back() {
    if (!empty()) {
        if (head == tail) {
            delete head;
            head = tail = nullptr;
        }
        else {
            Node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = nullptr;
        }
        --num_items;
    }
}

int SingleLinkedList::front() const {
    return head->data;
}

int SingleLinkedList::back() const {
    return tail->data;
}

bool SingleLinkedList::empty() const {
    return (num_items == 0);
}

void SingleLinkedList::insert(size_t index, const int& item) {
    if (index >= num_items) {
        push_back(item);
        return;
    }

    if (index == 0) {
        push_front(item);
        return;
    }

    Node* new_node = new Node(item);
    Node* curr = head;
    for (size_t i = 0; i < index - 1; ++i) {
        curr = curr->next;
    }
    new_node->next = curr->next;
    curr->next = new_node;
    ++num_items;
}

bool SingleLinkedList::remove(size_t index) {
    if (index >= num_items || empty()) {
        return false;
    }

    if (index == 0) {
        pop_front();
        return true;
    }

    Node* curr = head;
    for (size_t i = 0; i < index - 1; ++i) {
        curr = curr->next;
    }
    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
    --num_items;
    return true;
}

size_t SingleLinkedList::find(const int& item) const {
    Node* curr = head;
    size_t index = 0;
    while (curr != nullptr) {
        if (curr->data == item) {
            return index;
        }
        curr = curr->next;
        ++index;
    }
    return num_items;
}
