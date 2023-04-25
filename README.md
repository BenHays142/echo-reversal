# Echo VR Reversal Notes
## Table of Contents
- [Legal Disclaimer](#legal-disclaimer)
- [Why?](#why)
- [About](#about)
- [Credits/Authors](AUTHORS)
- [Notes](notes)
- [Decompiled Functions](decomp)
- [Echo VR Executable and Checksum (links to file tree view)](exe)

## Legal Disclaimer
The legality of a project like this is incredibly questionable, especially because the code that's being reverse engineered was funded by Meta. I'm not sure if it's fully legal or fully illegal, but tread with caution. Also, "distribution of proprietary software" is generally the issue, so in the near future I may remove the `./exe/` directory to avoid unnecessary conflict. Note that this repository itself is licensed under the MIT license; for more information, reference the LICENSE.md file.

## Why?
The goal is to recreate Echo VR's servers, similar to what [Project Earth for Minecraft Earth](https://github.com/Project-Earth-Team) achieved.

## About
This is a collection of all the important information myself or others have found about Echo's inner workings. The binary reverse engineering is being done to the `echovr.exe` file with the following sha256 checksum:
```
4e3f289421876494aadfdfb1d476ab365b13b8a64bd054ec0dc8fa2dc987b73b
```
Both the executable file and its corresponding checksum (which should match the above) file (`echovr.exe`, `echovr.exe.sha256`) can be found in the `./exe` directory.
