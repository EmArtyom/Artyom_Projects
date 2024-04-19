#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size = 10, count = 0;
    int *arr = calloc(size, sizeof(int));

    while (1) {
        scanf("%d", &arr[count]); /* проверка условий - ннадо? */

        if (count == size) {
            size += 10;
            arr = realloc(arr, size * sizeof(int)); /* выделить память ещё, если надо */
        }
        if (arr[count] == -1) break; /* вобрать в себя массив до -1 */
        count++;
    }

    /* напечатать массив */

    for (int i = 0; i < count; i++) {
        printf("%d", arr[i]);
        if (i < count - 1) printf(" ");
    }

    free(arr);

    return 0;
}
