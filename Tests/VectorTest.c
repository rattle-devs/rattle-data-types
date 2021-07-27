#include <stdio.h>
#include <stdlib.h>
#include <vector.h>

int main(int argc, char **argv){
    if(argc < 2){
        printf("To few arguments");
        return 1;
    }
    Vector *vec = vector_init(10, sizeof(size_t));
    size_t iterations = strtoul(argv[1], NULL, 10);
    for(size_t i = 0; i < iterations; i++){
        vector_append(vec, &i, 1);
    }
	return 0;
}
