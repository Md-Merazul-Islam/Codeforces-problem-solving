#include <stdio.h>

int main()
{
    printf("Enter the number of elements you want to insert: ");
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter your value: ");
        scanf("%d", &arr[i]);
    }

    // Insertion
    printf("Enter the index where you want to insert a new element: ");
    int index;
    scanf("%d", &index);

    int value;
    printf("Enter the value you want to insert: ");
    scanf("%d", &value);

    if (index < n && 0 < index)
    {

        for (int i = n; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[index] = value; // Insert the value

        printf("The final array is: ");
        for (int i = 0; i < n+1; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("Invalid Index!");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    printf("Enter the number of elements you want to insert: ");
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter your value: ");
        scanf("%d", &arr[i]);
    }

    // Deletion
    printf("Enter the index,which do you delete : ");
    int index;
    scanf("%d", &index);

    if (index < n && index > 0)
    {

        for (int i = index; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }

        printf("The final array is: ");
        for (int i = 0; i < n - 1; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("Invalid Index!");
    }

    return 0;
}
