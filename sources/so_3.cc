#include <cstdio>
#include <cstring>

int copy_string(char *dest, const char *src, size_t len) {
  // Magic copy
  strncpy(dest, src, len - 1);
  if (len > 0)
    dest[len - 1] = '\0';
}

int main(int argc, char *argv[]) {
  char buffer[16];

  if (argc < 2) {
    printf("Usage: %s STRING\n", argv[0]);
    return 0;
  }

  copy_string(buffer, argv[1], sizeof(buffer));

  printf("Copied string, contents of the buffer:\n%s", buffer);

  return 0;
}
