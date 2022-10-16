#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number; //56248746
    int count_num;
    int value;

    printf("Please enter a number: ");
    scanf("%d",&number);

    count_num = counted_nums(number);
    printf("number count = %d \n",count_num);

    value = rev_num(number, count_num);

    if(value == number){
        printf("This number is an armstrong number");
    }
    else{
        printf("It's not an armstrong number");
    }

    return 0;
}


int rev_num(int a, int b){
    int reversed_num;
    int add_pow;

    while(a > 0){
        reversed_num = a % 10;
        int result = pow(reversed_num , b);
        a = a / 10;

        add_pow = add_pow + result;
    }
    return add_pow;

}

int counted_nums(int a){
    int each;
    int counter = 0;

    while(a > 0){
        each = a % 10;
        a = a / 10;
        counter++;
    }
    return counter;
}
