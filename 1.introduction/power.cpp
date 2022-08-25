// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
//

int power(int x, unsigned p) {
    if (p == 0) return 1;
    return x*power(x,p - 1);
}