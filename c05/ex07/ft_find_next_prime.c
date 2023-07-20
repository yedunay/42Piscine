int ft_is_prime(int prime)
{
    int i;

    i = 2;
    if(prime <= 1)
        return 0;
    while(i < prime)
    {
        if(prime % i == 0)
            return 0;
        i++;
    }
    return 1;
}
int ft_find_next_prime(int nb)
{
    int i;

    i = 1;
    if(nb <= 2)
        return 2;
    while(nb + i)
    {
        if(ft_is_prime(nb + i))
            return nb + i;
        i++;
    }
    return 0;
}