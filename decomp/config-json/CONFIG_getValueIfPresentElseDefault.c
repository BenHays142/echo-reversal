int64_t CONFIG_getValueIfPresentElseDefault(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    uintmax_t uVar1;
    uintmax_t arg1_00;
    int32_t *arg1_01;
    int64_t *arg4_00;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_418h;
    
    uVar1 = _data.1420b1ed8;
    if (_data.1420b1ee0 != 1) {
        uVar1 = fcn.1400ceb40();
    }
    arg1_00 = fcn.1400ceb40();
    fcn.1400d08f0(uVar1);
    uVar1 = *(uintmax_t *)(arg1 + 8);
    arg1_01 = (int32_t *)fcn.1405fcea0(arg2, *(int64_t *)arg1, arg4 & 0xffffffffU, uVar1);
    if ((arg1_01 == (int32_t *)0x0) || (*arg1_01 != 2)) {
        if ((int32_t)(arg4 & 0xffffffffU) != 0) {
            fcn.1400cf2c0((LPCWSTR)&var_418h, 0, 0x400);
            fcn.1400dcdf0((int64_t)&var_418h, (int64_t)"$ json path: [%s] not found or not a string.", arg2, uVar1);
            LOG_writeAlternate(8, 0, (int64_t)data.1416ccac0, uVar1);
            arg4_00 = &var_418h;
            LOG_writeAlternate(8, 0, (int64_t)data.1416cca34, (int64_t)arg4_00);
            LOG_writeAlternate(8, 0, (int64_t)data.1416ccac0, (int64_t)arg4_00);
        }
    } else {
        arg3 = fcn.14135bf60((uintmax_t)arg1_01);
    }
    fcn.1400d08f0(arg1_00);
    return arg3;
}
