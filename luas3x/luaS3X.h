#include <Windows.h>

/*
Luas3x is a project aimming to recreate the usage of the luau api. If you haven't been in this community long enough, you wouldn't know roblox inlined almost all luau functions around 2021 destroying the usage of very common luau functions like pushnil, pushnumber, etc.
This project attempts to recreate everything; and some even call directly from address! While some were inlined, some are easy to recreate for other purposes. 

This is not the SAME exact thing as luac or luau as ours is slightly modified; you need to either refer to the function itself from source, or read the documentation which hopefully will be out soon.
Another thing to note is you need to keep the addresses class up to date otherwise your functions will not work. 

Import this into your project by either downloading this as zip, extracting into your projects directory, and including it.
You can just simply copy paste this into your header but since luas3x relies on other files in this folder (that we hope you haven't deleted), you may get errors with it.

Written by speednextdoor. Modifications are always welcome, just make sure to post it with credits and letting us know! :)
*/



const char* version = "1.0";
static bool beta = true;
const char* naming = "luas3x beta";

bool luas3x_engine;

#define fconv __fastcall
#define rls DWORD64

#define addtop
#define subtop

class addresses {
public:
    DWORD64 lual_checklstring = 0x22ED380;
    DWORD64 lual_optstring = 0x22ED380;
    DWORD64 lual_register = 0x22ED380;
    DWORD64 lual_findtable = 0x22ED380;

    addresses() = default;
};

namespace luas3x {

};
