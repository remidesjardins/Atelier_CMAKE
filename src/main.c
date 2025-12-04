#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]){
    
    // Cas 2 arguments : car <valeur>
    if (argc == 3 && strcmp(argv[1], "car") == 0) {
        char* a = argv[2];
        double r = car(atof(a));
        printf("%lf", r);
        return 0;
    }

    // Cas normal avec deux opérandes (add, sub, mul, div)
    if (argc == 4)
    {
        char* op = argv[1];
        char* a = argv[2];
        char* b = argv[3];
        double r = 0;

        if (strcmp(op, "add") == 0) {
            r = _add(atof(a), atof(b));
        }
        else if (strcmp(op, "sub") == 0) {
            r = _sub(atof(a), atof(b));
        }
        else if (strcmp(op, "mul") == 0) {
            r = _mul(atof(a), atof(b));
        }
        else if (strcmp(op, "div") == 0) {
            r = _div(atof(a), atof(b));
        }
        else {
            printf("Erreur de parametres");
            return 1;
        }

        printf("%lf", r);
    }
    else {
        printf("Erreur de parametres");
    }

    return 0;
}
