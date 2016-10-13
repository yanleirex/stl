//
// Created by yanlei on 16-10-12.
//

#ifndef STL_COUNTPTR_HPP
#define STL_COUNTPTR_HPP

template <class T>
class CounterPtr
{
private:
    T* ptr;     //pointer to the value
    long* count;    //shared number of owners

public:
    //initialize pointer with existing pointer
    //-required that the pointer p is a return value of new
    explicit CounterPtr(T* p=0):ptr(p), count(new long(1))
    {

    }

    CounterPtr(const CounterPtr<T>& p) throw()
    : ptr(p.ptr), count(p.count)
    {
        ++*count;
    }

    ~CounterPtr()throw()
    {
        dispose();
    }

    //assignment
    CounterPtr<T>&operator=(const CounterPtr<T>& p) throw()
    {
        if(this!=&p)
        {
            dispose();
            prt = p.ptr;
            count = p.count;
            ++*count;
        }
        return *this;
    }

    //access the value to which the pointer refers
    T&operator*() const throw()
    {
        return *ptr;
    }
    T*operator->() const throw()
    {
        return ptr;
    }

private:
    void dispose()
    {
        if(--*count==0)
        {
            delete count;
            delete ptr;
        }
    }
};

#endif //STL_COUNTPTR_HPP
