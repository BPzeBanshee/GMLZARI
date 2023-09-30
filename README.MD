# GMLZARI
Experimental GameMaker DLL for the purposes of dealing with files compressed using the **LZARI** algorithm, such as those present in SimTunes' "TUNERES.DAT".

**Personal note:**
The original `lzari.c` compiles with little required alterations in VS2022 but wasn't designed for consistent encapsulated functions. The C++ variant made in 2004 attempts to solve this, but I've found that while decryption of LZARI blobs from SimTunes works fine, encrypting them again is currently not reliable. Help from interested parties would be appreciated.

## Credit
* Haruhiko Okumura (晴彦 奥村), author of LZARI/lzari.c
* Que Rongwen (阙荣文) for his C++ implementation shown here: https://com.8s8s.com/it/it26843.htm
* Hexed.it and QuickBMS authors for sending me down this rabbithole of ancient digital East Asian engineering in the first place