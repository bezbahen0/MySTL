#include <deque>
#include <cstddef>
#include <iostream>

template <class T, class Container = std::deque<T>>
struct Stack
{
        
    using value_type = typename Container::value_type;
    using size_type = typename Container::size_type;
    using reference = typename Container::reference;
    Container cont;

    Stack() = default;
    reference top()
    {
        return cont.back();     
    }

    void push(value_type value)
    {
        cont.push_back(value);
    }

    void pop()
    {
        cont.pop_back();
    }

    size_type size()
    {
        return cont.size();
    }


};
template <class TP, class Cont>
bool operator== (const Stack<TP, Cont>& lhs, const Stack<TP, Cont>& rhs)
{
    return lhs.cont == rhs.cont;
}

template <class TP, class Cont>
bool operator!= (const Stack<TP, Cont>& lhs, const Stack<TP, Cont>& rhs)
{
    return lhs.cont != rhs.cont;
}


int main()
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    std::cout << s.top() << std::endl;

    return 0;
}
