#include "inc/ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ret_ft;
    int ret_std;

    printf("--- Teste de Caracteres ---\n");
    ret_ft = ft_printf("Meu: %c\n", 'A');
    ret_std = printf("Std: %c\n", 'A');
    printf("Retornos: ft=%d | std=%d\n\n", ret_ft, ret_std);

    printf("--- Teste de Strings ---\n");
    ret_ft = ft_printf("Meu: %s\n", "Hello 42");
    ret_std = printf("Std: %s\n", "Hello 42");
    printf("Retornos: ft=%d | std=%d\n\n", ret_ft, ret_std);

    printf("--- Teste de Inteiros ---\n");
    ret_ft = ft_printf("Meu: %d | %i\n", 2147483647, -2147483648);
    ret_std = printf("Std: %d | %i\n", 2147483647, -2147483648);
    printf("Retornos: ft=%d | std=%d\n\n", ret_ft, ret_std);

    printf("--- Teste de Unsigned e Hexa ---\n");
    ret_ft = ft_printf("Meu: %u | %x | %X\n", 4294967295U, 255, 255);
    ret_std = printf("Std: %u | %x | %X\n", 4294967295U, 255, 255);
    printf("Retornos: ft=%d | std=%d\n\n", ret_ft, ret_std);

    printf("--- Teste de Ponteiro ---\n");
    void *ptr = &ret_ft;
    ret_ft = ft_printf("Meu: %p\n", ptr);
    ret_std = printf("Std: %p\n", ptr);
    printf("Retornos: ft=%d | std=%d\n\n", ret_ft, ret_std);

    printf("--- Teste de Porcentagem ---\n");
    ret_ft = ft_printf("Meu: %%\n");
    ret_std = printf("Std: %%\n");
    printf("Retornos: ft=%d | std=%d\n", ret_ft, ret_std);

    return (0);
}