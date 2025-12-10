char* toHex(int num) {
    const char *map = "0123456789abcdef";
    char temp[20];      
    int idx = 0;

    if (num == 0) {
        char *res = malloc(2);
        res[0] = '0';
        res[1] = '\0';
        return res;
    }

    unsigned int n = (unsigned int)num;

    while (n > 0) {
        int rem = n % 16;
        temp[idx++] = map[rem];
        n /= 16;
    }
    char *out = malloc(idx + 1);
    for (int i = 0; i < idx; i++) {
        out[i] = temp[idx -1- i];
    }
    out[idx] = '\0';
      return out;

}
