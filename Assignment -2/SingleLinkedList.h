
class SingleLinkedList {
private:
    struct Node {
        int data;
        Node* next;

        Node(int value) : data(value), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    size_t num_items;

public:
    SingleLinkedList();
    ~SingleLinkedList();



    void push_front(const int& item);
    void push_back(const int& item);
    void pop_front();
    void pop_back();
    int front() const;
    int back() const;
    bool empty() const;
    void insert(size_t index, const int& item);
    bool remove(size_t index);
    size_t find(const int& item) const;
};


