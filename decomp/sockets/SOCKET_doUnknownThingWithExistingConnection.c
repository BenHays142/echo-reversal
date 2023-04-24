// function address: 0x1401c4c20
void SOCKET_doUnknownThingWithExistingConnection(int64_t arg1, int64_t arg2)
{
    uint64_t *puVar1;
    int32_t iVar2;
    uint32_t uVar3;
    uintmax_t arg1_00;
    code *arg4;
    char *pcVar4;
    int64_t arg4_00;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_58h;
    int64_t in_stack_ffffffffffffffb0;
    int64_t var_48h;
    undefined8 uStack_40;
    int64_t var_2ch;
    undefined4 in_stack_ffffffffffffffec;
    
    fcn.1405ece30((int64_t)&var_58h, arg2);
    fcn.1405eea70((uintmax_t)&var_58h, (int64_t)"server_api_key", 0);
    arg4 = data.1416cbd9f;
    arg1_00 = fcn.1405f1dc0((int64_t)&var_58h, (int64_t)&var_48h, 0, (int64_t)data.1416cbd9f, var_58h, 
                            in_stack_ffffffffffffffb0);
    if (*(int64_t *)(arg1_00 + 0x30) != 0) {
        arg4 = (code *)fcn.1400d5fd0(arg1_00);
    }
    LOG_writeAlternate(2, 0, (int64_t)"[NETGAME] Server settings received: %s", (int64_t)arg4);
    if ((((uint32_t)var_2ch & 4) != 0) || (((uint32_t)var_2ch & 2) != 0)) {
        fcn.1400d50f0(&var_48h);
    }
    fcn.1400d2a00((sockaddr *)&var_48h);
    fcn.1405ece60((int64_t)&var_58h);
    uVar3 = **(uint32_t **)(arg1 + 0x2d98);
    arg4_00 = 0;
    iVar2 = fcn.1405ee870(arg2, (int64_t)"disable_afk_timeout", 0, 0);
    if ((uVar3 >> 0x1d & 1) != (uint32_t)(iVar2 == 0)) {
        puVar1 = *(uint64_t **)(arg1 + 0x2d98);
        if ((iVar2 == 0) == 0) {
            *puVar1 = *puVar1 & 0xffffffffdfffffff;
            pcVar4 = "[NETGAME] AFK detection disabled (by server settings)";
        } else {
            *puVar1 = *puVar1 | 0x20000000;
            pcVar4 = "[NETGAME] AFK detection enabled (by server settings)";
        }
        LOG_writeAlternate(2, 0, (int64_t)pcVar4, arg4_00);
    }
    fcn.1405ece90(arg1 + 0x63278, arg2);
    if (*(uintmax_t *)(arg1 + 0x2a98) != 0) {
        uVar3 = fcn.140174e80(*(uintmax_t *)(arg1 + 0x2a98));
        fcn.14151e9c0((uint64_t)uVar3, 8);
    }
    pcVar4 = *(char **)(arg1 + 0x2b08);
    if ((pcVar4 == (char *)0x0) || ((~*(uint32_t *)(pcVar4 + 0xc40) & 1) == 0)) {
        pcVar4 = *(char **)(arg1 + 0x2b00);
        if (((pcVar4 != (char *)0x0) && ((~*(uint32_t *)(pcVar4 + 0xc40) & 1) != 0)) ||
           (pcVar4 = *(char **)(*(int64_t *)(arg1 + 8) + 0x7af8), pcVar4 != (char *)0x0)) {
            uStack_40 = 0x1401aa24b;
            fcn.140510040(pcVar4, 0xa633c357831c881a, (char *)0xffffffffffff, 0xffffffffffffffff, 
                          CONCAT44(in_stack_ffffffffffffffec, 1));
        }
    } else {
        uStack_40 = 0x1401aa1aa;
        fcn.140510040(pcVar4, 0xa633c357831c881a, (char *)0xffffffffffff, 0xffffffffffffffff, 
                      CONCAT44(in_stack_ffffffffffffffec, 1));
        if ((*(uint8_t *)(*(int64_t *)(arg1 + 0x2b00) + 0xc40) & 0x80) != 0) {
            uStack_40 = 0x1401aa1ea;
            fcn.14050fc70(*(int64_t *)(arg1 + 0x2b00), -0x59cc3ca87ce377e6, (char *)0xffffffffffff, -1, 
                          CONCAT44(in_stack_ffffffffffffffec, 1));
            return;
        }
    }
    return;
}
