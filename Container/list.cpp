#include <cstddef>


template <typename T>
struct List
{
    using value_type = T;
    using size_type = std::size_t;
    using reference = T&;
    
    struct Node;

    struct iterator
    {
        Node* m_current;
        
        iterator(Node* current): m_current(current) { };

        reference operator*()
        {
            m_current = m_current -> data;
        }

        iterator& operator++()
        {
            m_current = m_current -> next;
            return *this;
        }

        iterator& operator--()
        {
            m_current = m_current -> prev;
            return *this;
        }
    };
    


    struct Node
    {
        value_type data;
        Node* next;
        Node* prev;
        Node(value_type _data) : data(_data), next(nullptr), prev(nullptr){};
    };
    
    Node* head;
    Node* tail;
    size_type size;
    
    List() : head(nullptr), tail(nullptr), size(NULL){};
    

    iterator begin();
    iterator end();

    void push_back(value_type data)
    {
        if(head == nullptr)
        {        
            head = new Node(data);
        }
        else if(tail == nullptr)
        {
            tail = new Node(data);
            head -> next = tail;
            tail -> prev = head;
            tail -> next = nullptr;
            head -> prev = nullptr;
        }
        else
        {
            tail -> next = new Node(data);
            tail = tail -> next;
        }    
    }




               
};

int main()
{
    List<int> l;
    l.push_back(3);
    l.push_back(5);
    l.push_back(10);
    return 0;
}
