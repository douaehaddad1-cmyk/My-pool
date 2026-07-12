#include <unistd.h>
int     main(void)
{
        char alpha;
        char alpha2;
        int c;
        c = 0;
        while(c < 26)
        {
                if(c % 2 == 0)
                {
                        alpha = 'z' - c;
                        write(1, &alpha, 1);
                }
                else
                {
                        alpha2 = 'Z' - c;
                        write(1, &alpha2, 1);
                }
                c++;
        }
        write(1, "\n", 1);
        return (0);
}

