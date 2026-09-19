// 1. Shutdown Windows/Linux Shutdown Machine. [#include to be used for system () function] 
// DO NOT USE

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    printf("Choose your operating system: ");
    printf("1. Windows\n");
    printf("2. Linux\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Shutting down Windows...\n");
        system("shutdown /s /t 0");
    }
    else if (choice == 2)
    {
        printf("Shutting down Linux...\n");
        system("shutdown -h now");
    }
    else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}