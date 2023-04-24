int64_t MISC_getStrLenWithMaxLen(DWORD arg1, int64_t arg2)
{
    char *pcVar1;
    undefined4 in_register_0000000c;
    
    pcVar1 = (char *)CONCAT44(in_register_0000000c, arg1);
    if (arg2 != 0) {
        do {
            arg2 = arg2 + -1;
            if (*pcVar1 == '\0') break;
            pcVar1 = pcVar1 + 1;
        } while (arg2 != 0);
    }
    return (int64_t)pcVar1 - CONCAT44(in_register_0000000c, arg1);
}
