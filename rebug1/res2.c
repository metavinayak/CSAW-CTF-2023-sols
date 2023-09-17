int32_t main(int32_t argc, char** argv, char** envp)
{
    printf("Enter the String: ");
    void var_408;
    __isoc99_scanf(&data_2017, &var_408);
    int32_t var_c = 0;
    while (*(&var_408 + var_c) != 0)
    {
        var_c = (var_c + 1);
    }
    if (var_c != 0xc)
    {
        printf("that isn't correct, im sorry!");
    }
    else
    {
        puts("that's correct!");
        int64_t rax_5 = EVP_MD_CTX_new();
        EVP_DigestInit_ex(rax_5, EVP_md5(), 0);
        EVP_DigestUpdate(rax_5, &data_202a, 2, &data_202a);
        int32_t var_41c = 0x10;
        void var_418;
        EVP_DigestFinal_ex(rax_5, &var_418, &var_41c, &var_418);
        EVP_MD_CTX_free(rax_5);
        void var_448;
        for (int32_t var_10_1 = 0; var_10_1 <= 0xf; var_10_1 = (var_10_1 + 1))
        {
            sprintf((&var_448 + (var_10_1 + var_10_1)), "%02x", *(&var_418 + var_10_1));
        }
        printf("csawctf{%s}\n", &var_448);
    }
    return 0;
}
