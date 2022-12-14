#include <cstddef>
#include <iostream>
typedef unsigned char byte;
template <typename T>
class Array
{
    size_t _size;
    byte *data;
    void swap(Array<T> &arr){
        std::swap(_size, arr._size);
        std::swap(data, arr.data);
    }
public:
    // Список операций:
    //   конструктор класса, который создает
    //   Array размера size, заполненный значениями
    //   value типа T. Считайте что у типа T есть
    //   конструктор, который можно вызвать без
    //   без параметров, либо он ему не нужен.
    //
    Array(size_t size, const T& value = T()) {
        _size = size;
        data = new byte[_size * sizeof(T)];
        T * ptr = (T*)data;
        for(size_t i = 0; i < _size; ++i)
            new(ptr + i) T(value);
    }
    //   конструктор класса, который можно вызвать
    //   без параметров. Должен создавать пустой
    //   Array.
    //
    Array() {
        _size = 0;
        data = 0;
    }
    //   конструктор копирования, который создает
    //   копию параметра. Для типа T оператор
    //   присвивания не определен.
    //
    Array(const Array<T> &arr) {
        _size = arr._size;
        data = new byte[_size * sizeof(T)];
        T * ptr = (T*)data;
        for(size_t i = 0; i < _size; ++i)
            new (ptr + i) T(arr[i]);
    }
    //   деструктор, если он вам необходим.
    //
    ~Array() {
        T * ptr = (T*)data;
        for(size_t i = 0; i < _size; ++i)
            ptr[i].~T();
        delete[] data;
    }    
    //   оператор присваивания.
    //
    Array& operator=(const Array<T> &arr) {
        if(this != &arr) {
            Array<T> temp(arr);
            temp.swap(*this);
        }
        return *this;
    }
    //
    //   возвращает размер массива (количество
    //                              элемнтов).
    size_t size() const {
        return _size;
    }
    //   две версии оператора доступа по индексу.
    //
    T& operator[](size_t i) {
        T *ptr = (T*)data;
        return *(ptr + i);
    }
    const T& operator[](size_t i) const {
        T *ptr = (T*)data;
        return *(ptr + i);
    }    
};