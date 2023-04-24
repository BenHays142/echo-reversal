// function address: 0x141582a80
code * ZSTD_getErrStr(uintmax_t arg1)
{
    int32_t iVar1;
    
    if (arg1 < 0xffffffffffffff89) {
        iVar1 = 0;
    } else {
        iVar1 = -(int32_t)arg1;
    }
    // switch table (103 cases) at 0x14159b2e8
    switch(iVar1) {
    case 0:
        return (code *)"No error detected";
    case 1:
        return (code *)"Error (generic)";
    default:
        return data.141dc7698;
    case 10:
        return (code *)"Unknown frame descriptor";
    case 0xc:
        return (code *)"Version not supported";
    case 0xe:
        return (code *)"Unsupported frame parameter";
    case 0x10:
        return (code *)"Frame requires too much memory for decoding";
    case 0x14:
        return (code *)"Corrupted block detected";
    case 0x16:
        return (code *)"Restored data doesn\'t match checksum";
    case 0x1e:
        return (code *)"Dictionary is corrupted";
    case 0x20:
        return (code *)"Dictionary mismatch";
    case 0x22:
        return (code *)"Cannot create Dictionary from provided samples";
    case 0x28:
        return (code *)"Unsupported parameter";
    case 0x2a:
        return (code *)"Parameter is out of bound";
    case 0x2c:
        return (code *)"tableLog requires too much memory : unsupported";
    case 0x2e:
        return (code *)"Unsupported max Symbol Value : too large";
    case 0x30:
        return (code *)"Specified maxSymbolValue is too small";
    case 0x3c:
        return (code *)"Operation not authorized at current processing stage";
    case 0x3e:
        return (code *)"Context should be init first";
    case 0x40:
        return (code *)"Allocation error : not enough memory";
    case 0x46:
        return (code *)"Destination buffer is too small";
    case 0x48:
        return (code *)"Src size is incorrect";
    case 100:
        return (code *)"Frame index is too large";
    case 0x66:
        return (code *)"An I/O error occurred when reading/seeking";
    }
}
