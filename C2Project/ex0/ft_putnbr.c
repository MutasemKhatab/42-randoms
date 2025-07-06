#include <unistd.h>

void ft_putnbr(int nb)
{
    char buffer[10];
    int i = 0;

    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }

    if (nb == 0)
    {
        char c = '0';
        write(1, &c, 1);
        return;
    }

    // Store digits in reverse
    while (nb > 0)
    {
        buffer[i++] = (nb % 10) + '0';
        nb /= 10;
    }

    // Print digits in correct order
    while (i--)
        write(1, &buffer[i], 1);
}

int main(void)
{
    ft_putnbr(42); // Output will be 42
    return 0;
}

