undefined8 CONFIG_applyFromFile(int64_t arg1)
{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    int32_t iVar9;
    char *arg4;
    undefined8 uVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    int64_t iVar13;
    int64_t var_8h;
    int64_t var_438h;
    int64_t var_428h;
    int64_t var_420h;
    int64_t var_410h;
    int64_t var_408h;
    int64_t var_208h;
    
    fcn.1400cf2c0((LPCWSTR)&var_408h, 0, 0x200);
    arg4 = (char *)fcn.140112c90(*(int64_t *)(arg1 + 8));
    if ((arg4 == (char *)0x0) || (*arg4 == '\0')) {
        uVar10 = fcn.141520be0(_data.14209eed8);
        arg4 = "config.json";
        fcn.1400dcd90((int64_t)&var_408h, (int64_t)"%s|%s", uVar10, (int64_t)"config.json");
    } else {
        uVar10 = fcn.141339600(_data.14209eed8);
        var_438h = (int64_t)str.config.json;
        fcn.1400dcd90((int64_t)&var_408h, (int64_t)"%s|%s|%s", uVar10, (int64_t)arg4);
    }
    fcn.14151ff30((int64_t)&var_408h, var_428h);
    iVar9 = fcn.1400e0f70(&var_408h);
    if (iVar9 != 0) {
        iVar13 = 4;
        piVar11 = &var_208h;
        piVar12 = &var_408h;
        do {
            uVar1 = *(undefined4 *)((int64_t)piVar12 + 4);
            uVar2 = *(undefined4 *)(piVar12 + 1);
            uVar3 = *(undefined4 *)((int64_t)piVar12 + 0xc);
            uVar4 = *(undefined4 *)(piVar12 + 2);
            uVar5 = *(undefined4 *)((int64_t)piVar12 + 0x14);
            uVar6 = *(undefined4 *)(piVar12 + 3);
            uVar7 = *(undefined4 *)((int64_t)piVar12 + 0x1c);
            *(undefined4 *)piVar11 = *(undefined4 *)piVar12;
            *(undefined4 *)((int64_t)piVar11 + 4) = uVar1;
            *(undefined4 *)(piVar11 + 1) = uVar2;
            *(undefined4 *)((int64_t)piVar11 + 0xc) = uVar3;
            uVar1 = *(undefined4 *)(piVar12 + 4);
            uVar2 = *(undefined4 *)((int64_t)piVar12 + 0x24);
            uVar3 = *(undefined4 *)(piVar12 + 5);
            uVar8 = *(undefined4 *)((int64_t)piVar12 + 0x2c);
            *(undefined4 *)(piVar11 + 2) = uVar4;
            *(undefined4 *)((int64_t)piVar11 + 0x14) = uVar5;
            *(undefined4 *)(piVar11 + 3) = uVar6;
            *(undefined4 *)((int64_t)piVar11 + 0x1c) = uVar7;
            uVar4 = *(undefined4 *)(piVar12 + 6);
            uVar5 = *(undefined4 *)((int64_t)piVar12 + 0x34);
            uVar6 = *(undefined4 *)(piVar12 + 7);
            uVar7 = *(undefined4 *)((int64_t)piVar12 + 0x3c);
            *(undefined4 *)(piVar11 + 4) = uVar1;
            *(undefined4 *)((int64_t)piVar11 + 0x24) = uVar2;
            *(undefined4 *)(piVar11 + 5) = uVar3;
            *(undefined4 *)((int64_t)piVar11 + 0x2c) = uVar8;
            uVar1 = *(undefined4 *)(piVar12 + 8);
            uVar2 = *(undefined4 *)((int64_t)piVar12 + 0x44);
            uVar3 = *(undefined4 *)(piVar12 + 9);
            uVar8 = *(undefined4 *)((int64_t)piVar12 + 0x4c);
            *(undefined4 *)(piVar11 + 6) = uVar4;
            *(undefined4 *)((int64_t)piVar11 + 0x34) = uVar5;
            *(undefined4 *)(piVar11 + 7) = uVar6;
            *(undefined4 *)((int64_t)piVar11 + 0x3c) = uVar7;
            uVar4 = *(undefined4 *)(piVar12 + 10);
            uVar5 = *(undefined4 *)((int64_t)piVar12 + 0x54);
            uVar6 = *(undefined4 *)(piVar12 + 0xb);
            uVar7 = *(undefined4 *)((int64_t)piVar12 + 0x5c);
            *(undefined4 *)(piVar11 + 8) = uVar1;
            *(undefined4 *)((int64_t)piVar11 + 0x44) = uVar2;
            *(undefined4 *)(piVar11 + 9) = uVar3;
            *(undefined4 *)((int64_t)piVar11 + 0x4c) = uVar8;
            uVar1 = *(undefined4 *)(piVar12 + 0xc);
            uVar2 = *(undefined4 *)((int64_t)piVar12 + 100);
            uVar3 = *(undefined4 *)(piVar12 + 0xd);
            uVar8 = *(undefined4 *)((int64_t)piVar12 + 0x6c);
            *(undefined4 *)(piVar11 + 10) = uVar4;
            *(undefined4 *)((int64_t)piVar11 + 0x54) = uVar5;
            *(undefined4 *)(piVar11 + 0xb) = uVar6;
            *(undefined4 *)((int64_t)piVar11 + 0x5c) = uVar7;
            uVar4 = *(undefined4 *)(piVar12 + 0xe);
            uVar5 = *(undefined4 *)((int64_t)piVar12 + 0x74);
            uVar6 = *(undefined4 *)(piVar12 + 0xf);
            uVar7 = *(undefined4 *)((int64_t)piVar12 + 0x7c);
            *(undefined4 *)(piVar11 + 0xc) = uVar1;
            *(undefined4 *)((int64_t)piVar11 + 100) = uVar2;
            *(undefined4 *)(piVar11 + 0xd) = uVar3;
            *(undefined4 *)((int64_t)piVar11 + 0x6c) = uVar8;
            *(undefined4 *)(piVar11 + 0xe) = uVar4;
            *(undefined4 *)((int64_t)piVar11 + 0x74) = uVar5;
            *(undefined4 *)(piVar11 + 0xf) = uVar6;
            *(undefined4 *)((int64_t)piVar11 + 0x7c) = uVar7;
            iVar13 = iVar13 + -1;
            piVar11 = piVar11 + 0x10;
            piVar12 = piVar12 + 0x10;
        } while (iVar13 != 0);
        fcn.141520090(&var_208h);
        uVar10 = fcn.1405f0990(arg1 + 0x63238, (int64_t)&var_208h, 1, arg4, var_438h);
        if ((int32_t)uVar10 != 0) {
            return uVar10;
        }
        var_428h = (int64_t)vtable.NRadEngine::CJsonTraversal.0;
        var_410h = 0;
        _var_420h = ZEXT816(0);
        fcn.1405fe600((int64_t)&var_428h, arg1 + 0x63238, *(int64_t *)(arg1 + 8) + 0x8bf8);
        fcn.1405f1380(arg1 + 0x63238);
    }
    return 0;
}
