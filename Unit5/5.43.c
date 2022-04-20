#include <stdio.h>



int main()

{

    static int counter = 1;
    printf("%d\n", counter++);
    main();

    if (counter > 1000)
        return 0;

}
