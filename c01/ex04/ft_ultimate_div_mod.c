void ft_ultimate_div_mod(int *a, int *b) //função void(não retorna valor) que recebe como parametro os ponteiros '*a' e '*b'.
{
	int var = *a / *b; //definindo uma variável para guardar o valor da divisão entre os ponteiros '*a' e '*b'.
	*b = *a % *b; //calculando o módulo entre o ponteiro '*a' e '*b' e salvando o resultado no ponteiro '*b'.
	*a = var; //passando o valor armazenado na variável 'var' para o ponteiro '*a'.
}