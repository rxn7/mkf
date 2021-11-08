#include <stdio.h>

void print_usage(void) {
        puts("Usage:");
        puts("mkf <file(s)>");
}

void mkf(const char* path) {
        FILE* file;
        file = fopen(path, "w");

        if(!file) {
                perror("Failed to create file: ");
                return;
        }

        fclose(file);
}

int main(int argc, const char** argv) {
        if(argc < 2) {
                print_usage();
                return 1; 
        }

        for(unsigned short i=1; i<argc; ++i) {
                mkf(argv[i]);
        }
}
