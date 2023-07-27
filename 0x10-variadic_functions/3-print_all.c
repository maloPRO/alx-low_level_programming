#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...) {
    va_list args;
    char c;
    int i;
    double f;
    char *s;
    va_start(args, format);

    for (; *format; format++) {
        switch (*format) {
            case 'c':
                c = (char) va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                break;
            case 's':
                s = va_arg(args, char *);
                if (s == NULL) {
                    printf("(nil)");
                } else {
                    printf("%s", s);
                }
                break;
            default:
                break;
        }
        if (*(format + 1)) {
            printf(", ");
        }
    }
    printf("\n");
    va_end(args);
}

