/*Escreva uma função que retorne 1 se a string passada como parâmetro só contiver
caracteres imprimíveis e retorne 0 se a função contiver outros tipos de caracteres.
Ela deverá ser prototipada da seguinte maneira:
int ft_str_is_printable(char *str);
Ela deverá retornar 1 se str for uma string vazia.
*/
#include <stdio.h>
#include <unistd.h>
 
int ft_str_is_printable(char *str)
{
    int x;
    int i;
    i = 0;
    x = 1;
    
    while(str[i] != '\0')
    {
        if((str[i]< 33) || (str[i]== 127))
        {
            x=0;
        }
        i++;
    }
    return(x);
}
