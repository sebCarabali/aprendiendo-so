/**
 * @file
 * @ingroup kernel_code 
 * @author Erwin Meza <emezav@gmail.com>
 * @copyright GNU Public License. 
 *
 * @brief Código de inicialización del kernel en C
 *
 * Este codigo recibe el control de start.S y continúa con la ejecución.
*/
 #include <stdlib.h>
 #include <console.h>

void cmain(){
    __asm__ __volatile__("xchg %bx, %bx");
    console_clear();
    console_printf("Hello, world!\n");
}
