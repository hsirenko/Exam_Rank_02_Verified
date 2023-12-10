#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int start;
    int end;
    int flag = 0;

    if (argc > 1 && argv[1][0]) // argv[1][0] checks if the first character of the second argument is not the null character.
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        start = i;
        while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
            i++;
        end = i;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i] != '\0')
        {
            while ((argv[1][i] == ' ' &&  argv[1][i + 1] == ' ')
            || (argv[1][i] == '\t' &&  argv[1][i + 1] == '\t'))
                i++;
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                flag = 1;
            write(1, &argv[1][i], 1);
            i++;
        }
        if (flag)
        write(1, " ", 1);
        while (end > start)
        {
            write(1, &argv[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
}