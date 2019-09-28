

template <typename T>
struct Binary_tree
{
    using value_type = T;
    using size_type = size_t;
    using reference = value_type&;
    
    struct Node
    {
        value_type data;
        Node* m_right;
        Node* m_left;
        Node(value_type _data) : data(_data), m_right(nullptr), m_left(nullptr){};
    };
    
    size_type size;
    Node* head;
    Binary_tree() : head(nullptr);
    
    void push(const value_type& data)
    {
        if(head -> m_right && head -> m_left == nullptr)
        {
            
        }
    }
    
};

int main()
{
    return 0;
}
