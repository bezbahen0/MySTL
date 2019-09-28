#include <cstddef> 
#include <iostream>

template <typename T>
struct Forward_list
{

    using value_type = T;
    using size_type = std::size_t;
    using referense = T&;
    using iterator = T*;
    
    struct Node
    {
        value_type data;
        Node* next;

        Node(value_type _data): data(_data), next(nullptr){};
    };

    struct Iterator
    {
        Node* m_current = nullptr;
        
        Iterator() = default;
        Iterator(Node* current): m_current(current) {};

        referense operator*()
        {
            return m_current -> value;
        }

        Node* operator++ ()
        {
            m_current = m_current -> next;
        }

    };

    Node* head;
    size_type size;

    Forward_list()
    {
        head = nullptr;
        size = 0;
    }

    void push_back(value_type data)
    {
        if(head == nullptr)
        {
            head = new Node(data);
        }
        else
        {
            Node* temp = head -> next;
            while(temp -> next != nullptr)
            {
                temp = temp -> next;
            }
            temp -> next = new Node(data);
        }
        ++size;
    }

    void push_front(value_type data)
    {
        Node* nNode = new Node(data);
        nNode -> next = head;
        head = nNode;

    }

    void pop_back()
    {
        Node* temp = head -> next;
        while(temp -> next != nullptr)
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = nullptr; 
    }
};

int main()
{
    Forward_list<int> list;
    list.push_back(3);
    list.push_back(5);
    list.push_back(3);
 
    return 0;
}
