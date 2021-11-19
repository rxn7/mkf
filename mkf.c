#include <stdio.h>

static void mkf(const char *path) {
        FILE *file;
        file = fopen(path, "w");

        if(!file) {
                perror("Failed to create file");
                return;
        }

        fclose(file);
}

int main(int argc, const char **argv) {
        if(argc < 2) {
                puts("Usage: mkf <files(s)>");
                return 1; 
        }

        for(unsigned short i=1; i<argc; ++i) {
                mkf(argv[i]);
        }

        return 0;
}
