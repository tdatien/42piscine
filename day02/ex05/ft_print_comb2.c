void ft_putchar(char c);

void ft_print_comb2(void)
{
    char c;
    c = '0';
    ft_putchar(c);
    int comb1;
    int comb2;
    comb1 = 0;
    comb2 = 0;
    while ( comb1 <= 98 && comb2 <= 99)
    {
        // if (comb2 / 10 && comb2 % 10)
        // {
        ft_putchar(32);
        ft_putchar(comb1/10 + '0');
        ft_putchar(comb1%10 + '0');
        ft_putchar(32);
        ft_putchar(comb2/10 + '0');
        ft_putchar(comb2%10 + '0');
        ft_putchar(44);
        comb2++;
    }
}