# Functions
Most of the fields in the table are self explanatory, but in case they aren't, here's a key:
- `fn name`: The name this function has been given that correlates to what "section" it belongs to, and what it does.
- `fn args`: A list of all the argument types passed when the function is called. For now, most of these are "UnknownType" because we have no clue what arguments most functions accept.
- `fn desc`: This is the description of the function that has been given so it's easier to understand what it does.
- `fn addr`: This is the address of the function.
- `eg call`: This is the address of an example where this function was called in the program.

And here's a key for the "flags" I give to some functions:
- `(?)` -> It's unclear if this is truly what the function at this address does; the description and/or function name may need to be changed.
- `(!)` -> I have no clue how to describe what this does because I don't understand it.

## ZSTD
Each function here utilizes Facebook's [ZSTD](https://github.com/facebook/zstd) for compression and decompression in some way.
| fn name     | fn args     | fn desc     | fn addr     | eg call     |
| ----------- | ----------- | ----------- | ----------- | ----------- |
| ZSTD_compress | UnknownType, UnknownType, UnknownType, UnknownType, UnknownType | Compresses a buffer | 0x14156c510 | 0x14152a557 |
| ZSTD_compressMemBlock | UnknownType, UnknownType, UnknownType, UnknownType | Compresses a block of memory | 0x14152a4c0 | 0x140cd4489 |
| ZSTD_getErrStr | int | Converts a ZSTD error opcode into a human-readable string | 0x141582a80 | 0x14152a56e |
| ZSTD_compressBound | int | Takes the size of the uncompressed data as input and returns the maximum size of the compressed data that may result from compressing that data | 0x14157a190 | 0x14152a511 |
| ZSTD_validate | UnknownType | Determines if certain bits of ZSTD-related data are valid | 0x141582aa0 | 0x14152a562 |

## Config.json
Each function here references the `config.json` game configuration file.
| fn name     | fn args     | fn desc     | fn addr     | eg call     |
| ----------- | ----------- | ----------- | ----------- | ----------- |
| CONFIG_applyFromFile | UnknownType | Sets game settings based on the data in Echo's `config.json` | 0x140179fe0 | 0x140173975 |
| CONFIG_getValueIfPresentElseDefault | UnknownType, UnknownType, UnknownType,  UnknownType | Returns the value of a specified key in the `config.json` file if present, if not present returns a default value`(?)` | 0x1405fe290 | 0x140181881 |

## Sockets
Each function here references a WebSocket connection.
| fn name     | fn args     | fn desc     | fn addr     | eg call     |
| ----------- | ----------- | ----------- | ----------- | ----------- |
| SOCKET_createConnectionWithLoginSock | UnknownType | Creates a new connection with the `wss://login.readyatdawn.com/rad/rad15_live` websocket`(?)` | 0x140181860 | 0x140157f5c |
| SOCKET_doUnknownThingWithExistingConnection | UnknownType, UnknownType | `(!)` | 0x1401c4c20 | 0x1401ac86d |

## Logs
Each function here handles event logging.
| fn name     | fn args     | fn desc     | fn addr     | eg call     |
| ----------- | ----------- | ----------- | ----------- | ----------- |
| LOG_write | UnknownType, UnknownType, UnknownType, UnknownType, UnknownType | Writes the specified message to a log file, as well as doing other things with the log str | 0x14151ddd0 | 0x14152a504 |
| LOG_writeAlternate | UnknownType, UnknownType, UnknownType, UnknownType | Same as LOG_write`(?)` | 0x1400ec0f0 | 0x1400cd9ae |

## Misc. Fns
None of the functions below fit in a category above.
| fn name     | fn args     | fn desc     | fn addr     | eg call     |
| ----------- | ----------- | ----------- | ----------- | ----------- |
| entry0 | | This is the entry function, akin to `int main()` | 0x1414ece30 | N/A |
| MISC_strContainsSubstr | char*, char*, UnknownType, UnknownType | Determines if a str contains a substr | 0x1400dd4c0 | 0x1400e0f0b |
| MISC_indexOfSubstrInStr | char*, char*, UnknownType | Returns the index of a substr in a str | 0x1400dda40 | 0x1400dd567 |
| MISC_removeSubstrFromStr | char*, char*, UnknownType | Removes a substr from a str | 0x1400de050 | 0x1400db6ac |
| MISC_getStrLen | char* | Gets the length of a str | 0x1400ddfb0 | 0x1400a6126 |
| MISC_getStrLenWithMaxLen | char*, int | Gets the length of a str and if that len is greater than a certain threshold (argument 2 of the function), return the threshold | 0x1400ddfd0 | 0x1400a60e1 |
