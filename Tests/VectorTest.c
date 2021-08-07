#include <stdio.h>
#include <stdlib.h>
#include <vector.h>

int main(int argc, char **argv){
    if(argc < 3){
        printf("To few arguments");
        return 1;
    }
    Vector *vec;
    size_t size = strtoul(argv[1], NULL, 10);
    size_t iterations = strtoul(argv[2], NULL, 10);
    for(size_t i = 0; i < iterations; i++){
        vec = vector_init(10, sizeof(size_t));
        for(size_t j = 0; j < size; j++)
            vector_append(vec, &j, 1);
        vector_free(vec);
    }
	return 0;
}
