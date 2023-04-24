# Echo VR Reversal Notes
## Why??
The initial goal is to recreate Echo VR's servers, similar to what [Project Earth for Minecraft Earth](https://github.com/Project-Earth-Team) achieved. A slightly longer term goal, for myself at least, is to remove all Oculus VR requirements from Echo so it's possible to play without an Oculus headset, and more importantly to me - so it'd be possible to play Echo on Linux platforms through [Valve Proton](https://github.com/ValveSoftware/Proton/).
## About
This is a list of all the important information (mostly addresses) myself or others have found for the file `echovr.exe` with the following sha256 checksum:
```
4e3f289421876494aadfdfb1d476ab365b13b8a64bd054ec0dc8fa2dc987b73b
```
The referenced file along with its sha256 checksum (shown above) can be found in the `exe` directory.

## Table of Contents
- [Directory Structure](#directory-structure)
- [Credits](AUTHORS)
- [Notes](notes)
- [Decompiled Functions](decomp)
- [Echo VR Executable (links to file tree view)](exe)

## Directory Structure
```
.
├── AUTHORS
├── README.md # you are here
├── decomp/
│   ├── README.md
│   ├── [...]/ # each function section has its own subdirectory
├── exe/
│   ├── echovr.exe
│   └── echovr.exe.sha256
└── notes/
    ├── README.md
    ├── functions.md
    └── net/
        ├── known_http_apis.txt
        └── known_sockets.txt
```
