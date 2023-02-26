#include <stdio.h>
#define KERWI 2
int main() {
#if KERWI == 1
    printf("两驱舒适的车机代码");
#elif KERWI == 2
    printf("两驱风尚的车机代码");
#elif KERWI == 3
    printf("两驱风尚的车机代码");
#else
    printf("两驱爵士的车机代码");
#endif
}
