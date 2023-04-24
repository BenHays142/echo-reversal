int64_t ZSTD_compressBound(uintmax_t arg1)
{
    if (arg1 < 0x40000) {
        return (arg1 >> 8) + (0x40000 - arg1 >> 0xc) + arg1;
    }
    return (arg1 >> 8) + arg1;
}
