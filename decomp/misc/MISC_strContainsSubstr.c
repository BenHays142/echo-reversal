uint64_t MISC_strContainsSubstr(char *arg1, int64_t arg2, int64_t arg3, uintmax_t arg4)
{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    char cVar4;
    int64_t var_8h;
    int64_t var_10h;
    
    if (arg4 != 0) {
        iVar3 = (int64_t)arg1 - arg2;
        do {
            cVar2 = *(char *)(arg2 + iVar3);
            if ((cVar2 == '\0') && (*(char *)arg2 == '\0')) {
                return 0;
            }
            cVar4 = *(char *)arg2;
            arg2 = arg2 + 1;
            if ((int32_t)arg3 == 0) {
                cVar1 = cVar2 + ' ';
                if (0x19 < (uint8_t)(cVar2 + 0xbfU)) {
                    cVar1 = cVar2;
                }
                cVar2 = cVar1;
                if ((uint8_t)(cVar4 + 0xbfU) < 0x1a) {
                    cVar4 = cVar4 + ' ';
                }
            }
            if (cVar2 < cVar4) {
                return 0xffffffffffffffff;
            }
            if (cVar4 < cVar2) {
                return (uint64_t)(cVar4 < cVar2);
            }
            arg4 = arg4 - 1;
        } while (arg4 != 0);
    }
    return 0;
}
