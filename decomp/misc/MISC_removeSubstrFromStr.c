void MISC_removeSubstrFromStr(DWORD arg1, uintmax_t arg2, DWORD arg3)
{
    char cVar1;
    int64_t iVar2;
    undefined4 in_register_0000000c;
    char *arg1_00;
    char *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    undefined4 in_R8;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    
    arg1_00 = (char *)CONCAT44(in_register_0000000c, arg1);
    cVar1 = *arg1_00;
    pcVar3 = arg1_00;
    while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
    }
    iVar4 = (int64_t)pcVar3 - (int64_t)arg1_00;
    if (iVar4 != 0) {
        cVar1 = *(char *)arg2;
        pcVar3 = (char *)arg2;
        while (cVar1 != '\0') {
            pcVar3 = pcVar3 + 1;
            cVar1 = *pcVar3;
        }
        iVar5 = (int64_t)pcVar3 - arg2;
        if (iVar5 != 0) {
            iVar2 = MISC_indexOfSubstrInStr((uintmax_t)arg1_00, arg2, CONCAT44(in_R8, arg3));
            while (iVar2 != -1) {
                fcn.1400d0410((int64_t)(arg1_00 + iVar2), (uintmax_t)(arg1_00 + iVar2 + iVar5), 
                              ((iVar4 - iVar2) - iVar5) + 1);
                iVar4 = iVar4 - iVar5;
                if (iVar4 == 0) {
                    return;
                }
                iVar2 = MISC_indexOfSubstrInStr((uintmax_t)arg1_00, arg2, (uint64_t)arg3);
            }
        }
    }
    return;
}
