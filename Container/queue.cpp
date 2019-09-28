#include <deque>

template<typename T, typename Container = std::deque<T>>
struct Queue
{
    using container_type = Container;
    using value_type = typename Container::value_type;
    using reference = typename Container::reference;
    using size_type = typename Container::size_type;
    
    container_type cont;

    reference back()
    {
        return cont.back();
    }
    reference front()
    {
        return cont.front();
    }

    size_type size()
    {
        return cont.size();
    }

    void push(const reference value)
    {
        cont.push_back(value);
    }
    void pop()
    {
        cont.pop_front();
    }

};

int main()
{
    return 0;
}
