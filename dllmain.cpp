// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "lzari.h"

#define GMEXPORT extern "C"  __declspec (dllexport)

GMEXPORT const char* get_version() {
    return "v1.1";
}

GMEXPORT double encode_file(const char* infile,const char* outfile) {
    LZARI liz;
    liz.Compress(infile, outfile);
    liz.Release();
    return EXIT_SUCCESS;
}

GMEXPORT double decode_file(const char* infile, const char* outfile) {
    LZARI liz;
    liz.UnCompress(infile, outfile);
    liz.Release();
    return EXIT_SUCCESS;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

