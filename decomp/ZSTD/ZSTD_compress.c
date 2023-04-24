void ZSTD_compress(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg_28h)
{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    undefined auStackY_398 [32];
    int64_t var_378h;
    int64_t var_368h;
    int64_t var_360h;
    int64_t var_358h;
    int64_t var_350h;
    int64_t var_348h;
    int64_t var_338h;
    undefined4 uStack_330;
    undefined4 uStack_32c;
    int64_t var_328h;
    int64_t var_308h;
    undefined4 uStack_300;
    int64_t var_2fch;
    int64_t var_2e8h;
    int64_t var_258h;
    int64_t var_1d8h;
    undefined4 uStack_1d0;
    undefined4 uStack_1cc;
    int64_t var_1c8h;
    int64_t var_48h;
    
    var_48h = _data.142033548 ^ (uint64_t)auStackY_398;
    fcn.1414f4720(&var_2e8h, 0, 0x2a0);
    var_1d8h._0_4_ = 0;
    var_1d8h._4_4_ = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    var_1c8h = 0;
    piVar2 = (int64_t *)fcn.14157b830((int64_t)&var_338h, arg_28h & 0xffffffff, arg4, 0);
    var_368h = *piVar2;
    var_360h = piVar2[1];
    iVar1 = piVar2[2];
    uStack_300 = *(undefined4 *)(piVar2 + 3);
    var_358h._0_4_ = (undefined4)iVar1;
    var_358h._4_4_ = (undefined4)((uint64_t)iVar1 >> 0x20);
    var_378h = (uint64_t)var_378h._4_4_ << 0x20;
    var_308h._0_4_ = (undefined4)var_358h;
    var_308h._4_4_ = var_358h._4_4_;
    var_2fch._0_4_ = 1;
    var_348h = 0;
    var_350h = CONCAT44(1, uStack_300);
    var_358h = iVar1;
    uVar3 = fcn.14157d120((int64_t)&var_2e8h, (int64_t)&var_368h, arg4, 0, var_378h);
    if (uVar3 < 0xffffffffffffff89) {
        var_378h = arg4;
        fcn.14157a380((int64_t)&var_2e8h, arg1, arg2, arg3, arg4);
    }
    var_338h._0_4_ = 0;
    var_338h._4_4_ = 0;
    uStack_330 = 0;
    uStack_32c = 0;
    var_328h = 0;
    fcn.141582a50(var_258h, (int64_t)&var_338h);
    fcn.1414ed740((LPWSTR)(var_48h ^ (uint64_t)auStackY_398));
    return;
}
