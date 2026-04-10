int main(int argc, char *argv[]) {
  int ga[10];
  int value = 1;
  for (int *p = &ga[0]; p < &ga[10]; ++p) {
    *p = value;
    value *= 2;
  }
  return 0;
}
