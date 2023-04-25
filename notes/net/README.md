# Net
This directory contains notes related to the networking APIs of Echo VR. Not much is known about any of this yet, as it likely relies on a proprietary custom protocol for most, if not every, API.

## Compression
Due to the presence of references to these files in Echo VR's readable strings:

- `d:\projects\rad\dev\src\engine\libs\os\clz4compression.cpp`
- `d:\projects\rad\dev\src\engine\libs\os\czstdcompression.cpp`
- `d:\projects\rad\dev\src\engine\libs\os\czlibcompression.cpp`

Echo VR's networking APIs likely utilize a combination of the [LZ4](https://github.com/lz4/lz4), [ZSTD](https://github.com/facebook/zstd), and [ZLIB](https://github.com/madler/zlib) compression.
