/*
* В качестве параметров функций могут выступать не только ссылки на примитивные типы, но и ссылки, например, на массивы. Выглядеть ссылка на массив из трех значений типа int в параметре функции будет следующим образом:
* void foo(int (&a)[3]) {  ...  }
Обратите внимание, что скобки вокруг параметра a в данной конструкции обязательны - мы хотим передать ссылку на массив, а не массив ссылок.
Кажется, что такая конструкция не имеет особого смысла, ведь массивы при передаче в функцию не копируются.
Однако, такая конструкция запрещает компилятору игнорировать размер массива.
Например, следующий код не будет компилироваться:
int a[1] = {};
foo(a);
Компилятор g++ на это выдаст следующую ошибку:
        error: invalid initialization of reference of type ‘int (&)[3]’ from expression of type ‘int [1]’
Т. е. компилятор не может получить из массива из одного элемента ссылку на массив из трех элементов, что и ожидалось.
//////////////////////////
*
* Реализуйте функцию array_size, которая возвращает размер массива,
* переданного в качестве параметра.
* Функция должна работать только для массивов!
* Т. е. если функции передать указатель, должна произойти ошибка компиляции.
*
* Примеры:
int ints[] = {1, 2, 3, 4};
int *iptr = ints;
double doubles[] = {3.14};
array_size(ints); // вернет 4
array_size(doubles); // вернет 1
array_size(iptr); // тут должна произойти ошибка компиляции
Hint: в одной из первых недель мы вам показывали трюк с передачей массивов только заданного размера в функцию
(передача массива по ссылке),
совместите его с вашими знаниями о шаблонах.
* */

#include <cstddef> // size_t

// реализуйте шаблонную функцию array_size,
// которая возвращает значение типа size_t.

template <typename A, size_t size>
size_t array_size(A (&array)[size]) {
    return size;
}
