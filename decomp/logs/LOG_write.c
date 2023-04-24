undefined4 LOG_write(uintmax_t arg1, uintmax_t arg2, char *arg3, int64_t arg4, int64_t arg_28h)
{
    undefined4 uVar1;
    int64_t iVar2;
    int64_t var_20h;
    int64_t var_e58h;
    int64_t var_e50h;
    char *var_e48h;
    int64_t var_e40h;
    int64_t in_stack_fffffffffffff1d8;
    int64_t var_a40h;
    int64_t var_840h;
    undefined4 var_838h;
    
    var_840h._0_4_ = (undefined4)arg2;
    uVar1 = 0xffffffff;
    var_e50h._0_4_ = 0xffffffff;
    var_e58h = (int64_t)vtable.NRadEngine::CBasicErr.0;
    var_e48h = arg3;
    fcn.1400cf2c0((LPCWSTR)&var_e40h, 0, 0x400);
    fcn.1400db780((int64_t)&var_a40h, arg1);
    var_840h._4_4_ = 0;
    var_e58h = (int64_t)vtable.NRadEngine::CErrMsg.0;
    fcn.1400cf2c0(&var_838h, 0, 0x800);
    if (arg4 != 0) {
        fcn.1400de660((int64_t)&var_838h, 0x800, arg4, (LPCWSTR)&arg_28h);
        iVar2 = fcn.1400ddfd0((DWORD)&var_838h, 0x800);
        if (iVar2 + 1U < 0x800) {
            fcn.1414f4720((int64_t)&var_838h + iVar2 + 1, 0, 0x800 - (iVar2 + 1U));
        }
    }
    iVar2 = fcn.1400eb900();
    if (iVar2 == 0) {
        (**(code **)(var_e58h + 0x20))(&var_e58h);
    } else {
        uVar1 = fcn.140fa39b0(iVar2, (int64_t)&var_e58h, in_stack_fffffffffffff1d8);
    }
    return uVar1;
}
