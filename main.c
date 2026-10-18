#include <stdio.h>

int main(void){
    int numbers[4] = {0};
    int biggest, smallest;
    printf("Enter the 4 numbers you wanna find the smallest and the biggest number among them: \n");
    for(int i = 0; i < 4; i++)
        scanf("%d", &numbers[i]);

    biggest = numbers[0];
    smallest = numbers[0];

    for(int i = 0; i < 4; i++){
        if(biggest < numbers[i])
            biggest = numbers[i];
        if(smallest > numbers[i])
            smallest = numbers[i];
    }

    printf("The biggest number  : %d\n", biggest);
    printf("The smallest number : %d\n", smallest);
    return 0;
}
