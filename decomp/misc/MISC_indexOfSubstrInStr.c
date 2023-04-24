int64_t MISC_indexOfSubstrInStr(uintmax_t arg1, uintmax_t arg2, int64_t arg3)
{
    char cVar1;
    int64_t iVar2;
    char *arg1_00;
    char *pcVar3;
    char *pcVar4;
    int64_t in_R9;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    
    cVar1 = *(char *)arg2;
    pcVar3 = (char *)arg2;
    while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
    }
    cVar1 = *(char *)arg1;
    pcVar4 = (char *)arg1;
    while (cVar1 != '\0') {
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar4;
    }
    arg1_00 = (char *)(arg1 + in_R9);
    while( true ) {
        if (pcVar4 + -((int64_t)pcVar3 - arg2) < arg1_00) {
            return -1;
        }
        iVar2 = MISC_strContainsSubstr(arg1_00, arg2, arg3 & 0xffffffff, (int64_t)pcVar3 - arg2);
        if (iVar2 == 0) break;
        arg1_00 = arg1_00 + 1;
    }
    return (int64_t)arg1_00 - arg1;
}
