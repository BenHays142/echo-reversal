int64_t MISC_getStrLen(LPSTR arg1)
{
    char cVar1;
    char *pcVar2;
    
    cVar1 = *arg1;
    pcVar2 = arg1;
    while (cVar1 != '\0') {
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar2;
    }
    return (int64_t)pcVar2 - (int64_t)arg1;
}

