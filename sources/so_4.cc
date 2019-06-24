#include <array>
#include <cstdio>
#include <cstring>

template <size_t N>
int copy_string(std::array<char, N> &dest, const char *src) {
  // Magic copy
  strncpy(&dest[0], src, N - 1);
  if (N > 0)
    dest[N - 1] = '\0';
}

int main(int argc, char *argv[]) {
  std::array<char, 16> buffer;

  if (argc < 2) {
    printf("Usage: %s STRING\n", argv[0]);
    return 0;
  }

  copy_string(buffer, argv[1]);

  printf("Copied string, contents of the buffer:\n%s", &buffer[0]);

  return 0;
}

