#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#include "LSL.h"

template<typename T>
class Cola
{
private:
    LSL<T> lista;

public:
    Cola(){}

    bool empty()const;
    size_t size()const;
    const T& front()const;
    const T& back()const;
    void push(const T& element);
    void pop();
};

template<typename T>
bool Cola<T>::empty()const
{
    return lista.empty();
}

template<typename T>
size_t Cola<T>::size()const
{
    return lista.size();
}

template<typename T>
const T& Cola<T>::front()const
{
    if(empty())
        throw range_error("front() on empty queue");
    return lista.front();
}

template<typename T>
const T& Cola<T>::back()const
{
    if(empty())
        throw range_error("back() on empty queue");
    return lista.back();
}

template<typename T>
void Cola<T>::push(const T& element)
{
    lista.push_back(element);
}

template<typename T>
void Cola<T>::pop()
{
    if(empty())
        throw range_error("pop() on empty queue");
    lista.pop_front();
}

#endif // COLA_H_INCLUDED
