# Echo VR Reversal Findings
## About
This is a list of all the important information (mostly addresses) myself or others have found for the file `echovr.exe` with the following sha256 checksum:
```
4e3f289421876494aadfdfb1d476ab365b13b8a64bd054ec0dc8fa2dc987b73b
```
The referenced file along with its sha256 checksum (shown above) can be found in the `./echo-files/` directory.

## Table of Contents
- [Directory Structure](#directory-structure)
- [Key](#key)
- [Functions](#functions)
- [ZSTD](#zstd)
- [config.json](#config-json)
- [Sockets](#sockets)
- [Logs](#logs)
- [Misc. Fns](#misc-fns)

## Directory Structure
```
.
├── README.md # you are here
├── decomp/
│   ├── ... # each function section (below) has its own subdirectory in the decomp directory
└── echo-files/
    ├── echovr.exe
    └── echovr.exe.sha256 # checksum file for echovr.exe
```

## Key
These symbols mean these things:
- `(?)` -> It's unclear if this is truly what the function at this address does; the description and/or function name may need to be changed.
- `(!)` -> I have no clue how to describe what this does because I don't understand it.

## Functions
[//]: # (Clicking a function name will take you to a version of it which has been decompiled and manually tweaked for clarity. Note that the code is only pseudo-c and will likely **not compile**. This line has been commented out for now as this isn't fully implemented yet.)

### ZSTD
Each function here utilizes Facebook's [ZSTD](https://github.com/facebook/zstd) for compression and decompression in some way.
| fn name     | fn args     | fn desc     | fn addr     |
| ----------- | ----------- | ----------- | ----------- |
| ZSTD_compress | UnknownType, UnknownType, UnknownType,<br>UnknownType, UnknownType | Compresses a buffer | 0x14156c510 |
| ZSTD_compressMemBlock | UnknownType, UnknownType, UnknownType,<br>UnknownType | Compresses a block of memory | 0x14152a4c0 |
| ZSTD_getErrStr | int | Converts a ZSTD error opcode<br>into a human-readable string | 0x141582a80 |
| ZSTD_compressBound | int | Takes the size of the uncompressed data as input and returns the maximum size of the compressed data that may result from compressing that data | 0x14157a190 |
| ZSTD_validate | UnknownType | Determines if certain bits of ZSTD-related data are valid | 0x141582aa0 |

### Config.json
Each function here references a JSON configuration file in some manner.
| fn name     | fn args     | fn desc     | fn addr     |
| ----------- | ----------- | ----------- | ----------- |
| CONFIG_applyFromFile | UnknownType | Sets game settings based on<br>the data in Echo's `config.json` | 0x140179fe0 |
| CONFIG_getValueIfPresentElseDefault | UnknownType, UnknownType, UnknownType,<br> UnknownType | Returns the value of a specified key<br>in the `config.json` file if present,<br>if not present returns a default value`(?)` | 0x1405fe290 |

### Sockets
Each function here references a WebSocket connection.
| fn name     | fn args     | fn desc     | fn addr     |
| ----------- | ----------- | ----------- | ----------- |
| SOCKET_createConnectionWithLoginSock | UnknownType | Creates a new connection with<br>the `wss://login.readyatdawn.com/rad/rad15_live`<br> websocket | 0x140181860 |
| SOCKET_doUnknownThingWithExistingConnection | UnknownType, UnknownType | `(!)` | 0x1401c4c20 |

### Logs
Each function here handles event logging.
| fn name     | fn args     | fn desc     | fn addr     |
| ----------- | ----------- | ----------- | ----------- |
| LOG_write | UnknownType, UnknownType, UnknownType,<br>UnknownType, UnknownType | Writes the specified message to<br>a log file, as well as doing other<br>things with the log str | 0x14151ddd0 |
| LOG_writeAlternate | UnknownType, UnknownType, UnknownType,<br>UnknownType | Same as LOG_write`(?)` | 0x1400ec0f0 |

### Misc. Fns
None of the functions below fit in a category above.
| fn name     | fn args     | fn desc     | fn addr     |
| ----------- | ----------- | ----------- | ----------- |
| entry0 | | This is the entry function,<br>akin to `int main()` | 0x1414ece30 |
