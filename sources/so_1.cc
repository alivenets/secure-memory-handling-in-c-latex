#include <cstdio>
#include <cstring>

int copy_string(char *dest, const char *src) {
  // Magic copy
  strcpy(dest, src);
}

int main(int argc, char *argv[]) {
  char buffer[16];

  if (argc < 2) {
    printf("Usage: %s STRING\n", argv[0]);
    return 0;
  }

  copy_string(buffer, argv[1]);

  printf("Copied string, contents of the buffer:\n%s", buffer);

  return 0;
}
