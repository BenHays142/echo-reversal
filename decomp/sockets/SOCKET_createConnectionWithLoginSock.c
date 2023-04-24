undefined8 SOCKET_createConnectionWithLoginSock(int64_t arg1)
{
    undefined8 uVar1;
    uintmax_t arg1_00;
    uintmax_t arg1_01;
    int32_t *arg1_02;
    
    uVar1 = CONFIG_getValueIfPresentElseDefault
                      ((int64_t)(int64_t *)(arg1 + 0x63238), (int64_t)"login_host", 
                       (int64_t)"wss://login.readyatdawn.com/rad/rad15_live", 0);
    arg1_00 = _data.1420b1ed8;
    if (_data.1420b1ee0 != 1) {
        arg1_00 = fcn.1400ceb40();
    }
    arg1_01 = fcn.1400ceb40();
    fcn.1400d08f0(arg1_00);
    arg1_02 = (int32_t *)
              fcn.1405fcea0((int64_t)"loginservice_host", *(int64_t *)(arg1 + 0x63238), 0, *(int64_t *)(arg1 + 0x63240))
    ;
    if ((arg1_02 != (int32_t *)0x0) && (*arg1_02 == 2)) {
        uVar1 = fcn.14135bf60((uintmax_t)arg1_02);
    }
    fcn.1400d08f0(arg1_01);
    return uVar1;
}
