undefined8 ZSTD_compressMemBlock(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    int32_t iVar1;
    undefined8 uVar2;
    uint64_t uVar3;
    uintmax_t arg1_00;
    int64_t arg_28h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t in_stack_ffffffffffffffe8;
    
    if (arg4 == 0) {
        uVar2 = LOG_write((uintmax_t)"d:\\projects\\rad\\dev\\src\\engine\\libs\\os\\czstdcompression.cpp", 0x78, 
                          (char *)0xe8cc523d0fc9e5fe, (int64_t)"Cannot compress memory block of size 0.", 
                          in_stack_ffffffffffffffe8);
    } else {
        uVar3 = ZSTD_compressBound(arg4);
        if (*(uint64_t *)arg2 < uVar3) {
            uVar2 = LOG_write((uintmax_t)"d:\\projects\\rad\\dev\\src\\engine\\libs\\os\\czstdcompression.cpp", 0x7d, 
                              (char *)0xe8cc523d0fc9e5fe, 
                              (int64_t)"Destination buffer not large enough to compress into", in_stack_ffffffffffffffe8
                             );
        } else {
            arg1_00 = ZSTD_compress(arg1, *(uint64_t *)arg2, arg3, arg4, 
                                    CONCAT44((int32_t)((uint64_t)in_stack_ffffffffffffffe8 >> 0x20), 1));
            iVar1 = ZSTD_validate(arg1_00);
            if (iVar1 == 0) {
                *(uintmax_t *)arg2 = arg1_00;
                uVar2 = 0;
            } else {
                arg_28h = ZSTD_getErrStr(arg1_00);
                uVar2 = LOG_write((uintmax_t)"d:\\projects\\rad\\dev\\src\\engine\\libs\\os\\czstdcompression.cpp", 0x82
                                  , (char *)0xe8cc523d0fc9e5fe, (int64_t)"Error performing zstd compression: %s", 
                                  arg_28h);
            }
        }
    }
    return uVar2;
}
