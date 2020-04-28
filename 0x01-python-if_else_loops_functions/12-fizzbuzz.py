#!/usr/bin/python3
def fizzbuzz():
    for i in range(1, 101):
        if ((i % 3 == 0) and (i % 5 == 0)):
            print("{}".format("FizzBuzz"), end=' ')
        elif (i % 3 == 0):
            print("{}".format("Fizz"), end=' ')
        elif (i % 5 == 0):
            print("{}".format("Buzz"), end=' ')
        else:
            print("{:d}".format(i), end= ' ');
        if (i != 100):
            print("{}".format(""), end='')

'''
int main(void)
{
    int i;

    for (i = 1; i <= 100 ; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            printf("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz");
        }
        else
        printf("%d", i);
        if (i != 100)
        printf(" ");
    }
    printf("\n");
    return (0);
}
'''
