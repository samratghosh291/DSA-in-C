#include <stdio.h>
int n, q[100], ch, f = -1, r = -1, item;

void insertion(void);
void deletion(void);
void display(void);

int main()
{

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\n\n Queue operation using array");
    printf("\n1.Intertion\n2.Deletion\n3.Display\n4.Exit!");
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            insertion();
            break;
        }
        case 2:
        {
            deletion();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\nExit!");
            break;
        }

        default:
        {
            printf("\nWrong choice!");
        }
        }

    } while (ch != 4);
    {
        return 0;
    }

    return 0;
}

void insertion()
{
    if (r == n - 1)
    {
        printf("\nQueue overflow!");
        return;
    }
    else
    {

        printf("\nEnter the element: ");
        scanf("%d", &item);
        if (f == -1)
        {
            f = 0;
        }
        r = r + 1;

        q[r] = item;
    }
}

void deletion()
{
    if (f == -1 && r == -1)
    {
        printf("\nQueue is empty!");
        return;
    }
    else
    {
        printf("%d Deleted.\n", q[f]);
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f = f + 1;
        }
    }
}

void display()
{
    if (f == -1 && r == -1)
    {
        printf("\nQueue is empty!\n");
    }
    else
    {
        for (int i = f; i <= r; i++)
        {
            printf("%d ", q[i]);
        }
    }
}
