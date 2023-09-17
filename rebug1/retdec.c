int main(int argc, char ** argv) {
    // 0x11c9
    int64_t v1; // bp-8, 0x11c9
    int64_t v2 = &v1; // 0x11ca
    printf("Enter the String: ");
    int64_t v3; // bp-1032, 0x11c9
    scanf("%s", &v3);
    int32_t v4 = 0; // 0x120d
    while (*(char *)(v2 - 1024 + (int64_t)v4) != 0) {
        // 0x1213
        v4++;
    }
    if (v4 != 12) {
        // 0x131e
        printf("that isn't correct, im sorry!");
        // 0x1332
        return 0;
    }
    // 0x122e
    puts("that's correct!");
    int64_t v5 = EVP_MD_CTX_new(); // 0x123d
    EVP_DigestInit_ex(v5, EVP_md5(), 0);
    EVP_DigestUpdate(v5, (int64_t)"12", 2);
    int32_t v6 = 16; // bp-1052, 0x127d
    int64_t v7; // bp-1048, 0x11c9
    EVP_DigestFinal_ex(v5, &v7, &v6, &v7);
    EVP_MD_CTX_free(v5);
    int64_t v8; // bp-1096, 0x11c9
    int64_t v9 = &v8; // 0x12ce
    for (int64_t i = 0; i < 16; i++) {
        unsigned char v10 = *(char *)(v2 - 1040 + i); // 0x12be
        sprintf((char *)(2 * i + v9), "%02x", (int32_t)v10);
    }
    // 0x12fe
    printf("csawctf{%s}\n", &v8);
    // 0x1332
    return 0;
}
