// function address: 0x1414ece30
uint64_t entry0(void)
{
    code *pcVar1;
    bool bVar2;
    char cVar3;
    undefined uVar4;
    undefined2 uVar5;
    int32_t iVar6;
    uint32_t uVar7;
    int64_t *piVar8;
    undefined8 uVar9;
    uint64_t uVar10;
    uint64_t unaff_RBX;
    undefined8 unaff_retaddr;
    int64_t var_8h;
    int64_t var_18h;
    
    fcn.1414edd80();
    cVar3 = fcn.1414ec9c4(1);
    if (cVar3 == '\0') {
        fcn.1414ed7ec(7, unaff_retaddr);
    } else {
        bVar2 = false;
        uVar4 = fcn.1414ec988();
        unaff_RBX = CONCAT71((unkint7)(unaff_RBX >> 8), uVar4);
        if (_data.1420feac8 != 1) {
            if (_data.1420feac8 == 0) {
                _data.1420feac8 = 1;
                iVar6 = fcn.1413245d0((uintmax_t)data.1416c8cf8, (uintmax_t)data.1416c8d48);
                if (iVar6 != 0) {
                    return 0xff;
                }
                fcn.14132456c((uintmax_t)data.1416c2c90, (uintmax_t)data.1416c8cd8);
                _data.1420feac8 = 2;
            } else {
                bVar2 = true;
            }
            fcn.1414ecb34(uVar4);
            piVar8 = (int64_t *)fcn.1414ede5c();
            if ((*piVar8 != 0) && (cVar3 = fcn.1414eca9c((int64_t)piVar8), cVar3 != '\0')) {
                case.0x1415080f2.0(0, 2);
            }
            piVar8 = (int64_t *)fcn.1414ede64();
            if ((*piVar8 != 0) && (cVar3 = fcn.1414eca9c((int64_t)piVar8), cVar3 != '\0')) {
                fcn.14130e7b8(*piVar8);
            }
            uVar5 = fcn.1414ed938();
            uVar9 = fcn.1415696bc();
            uVar7 = fcn.14151cfe0(data.140000000, 0, uVar9, uVar5);
            unaff_RBX = (uint64_t)uVar7;
            cVar3 = fcn.1414ed974();
            if (cVar3 != '\0') {
                if (!bVar2) {
                    fcn.14130e79c();
                }
                fcn.1414ecb58(1, 0);
                return unaff_RBX;
            }
            goto code_r0x0001414ece1d;
        }
    }
    fcn.1414ed7ec(7, unaff_retaddr);
code_r0x0001414ece1d:
    fcn.14130e7f4(unaff_RBX & 0xffffffff);
    fcn.14130e7ac(unaff_RBX & 0xffffffff);
    pcVar1 = (code *)swi(3);
    uVar10 = (*pcVar1)();
    return uVar10;
}
