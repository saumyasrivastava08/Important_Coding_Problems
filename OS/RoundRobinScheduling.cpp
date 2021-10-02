#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int mutex = 1, full = 0, empty = 5, x = 0;

int main()
{
    int n;
    cout << "Enter the size of Buffer : ";
    cin >> empty;
    void producer();
    void consumer();
    int wait(int);
    int signal(int);

    while (1)
    {
        cout << "\nEnter\n1.To Produce \t2.To Consume \t3.To Exit \n";
        cin >> n;

        switch (n)
        {
        case 1:
            if ((mutex == 1) && (empty != 0))
                producer();
            else
                cout << "\nBuffer is full";

            break;
        case 2:
            if ((mutex == 1) && (full != 0))
                consumer();
            else
                cout << "\nBuffer is empty";
            break;
        case 3:
            exit(0);
            break;
        }
    }

    return 0;
}

int wait(int s)
{
    return (--s);
}

int signal(int s)
{
    return (++s);
}

void producer()
{
    mutex = wait(mutex);
    full = signal(full);
    empty = wait(empty);
    x++;
    cout << "\nProduces the items : " << x;

    mutex = signal(mutex);
}

void consumer()
{
    mutex = wait(mutex);
    full = wait(full);
    empty = signal(empty);
    cout << "\nConsumes items : " << x;
    x--;
    mutex = signal(mutex);
}
