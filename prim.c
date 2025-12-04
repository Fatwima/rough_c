#include <stdio.h>

int main() {
   


  //CAN COMPLETELY WITHOUT REMAINING DEVISOR 1 OR NUM ITSELF 
    int n, i, flag = 0;
    scanf("%d", &n);

    if (n <= 1)
        flag = 1;

    for (i = 2; i * i <= n; i++)
        if (n % i == 0)
            flag=1;
            
    if (flag == 0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}