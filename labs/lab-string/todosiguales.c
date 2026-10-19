#include <stdio.h>
#include "String.h"

/*
 * todosiguales — imprime 1 si todos los argumentos son iguales, 0 si no.
 *
 * Uso: ./todosiguales hola hola hola  →  1
 *      ./todosiguales hola mundo      →  0
 */

int main(int argc, char *argv[]) {
    (void)argc; 
    
    int iguales = 1; 

    if (argv[1] != NULL) {
        for (char **arg = argv + 2; *arg != NULL; arg++) {
            if (!AreEqual(*arg, argv[1])) {
                iguales = 0;
                break;
            }
        }
    }

    printf("%d\n", iguales);
    return 0;
}
