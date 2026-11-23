#include<iostream>
#include<string>


int minus(int left, int right);

int main()
{
    int first = 30;

    int *p_first;
    p_first = &first;

    std::cout << p_first << std::endl;

    // int second = 20;

    // int result = minus(first, second);
    // int result_2 = minus(second , first);

    // std::cout << result << std::endl;
    // std::cout << result_2 << std:: endl;

    return 0;
}


int minus(int left, int right)
{
    int result = left - right;
    return result;
}
