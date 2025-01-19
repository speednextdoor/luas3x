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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char* version = "1.0";
static bool beta = true;
const char* naming = "luas3x beta";

bool luas3x_engine; 

#define fconv __fastcall
#define rls DWORD64

#define addtop
#define subtop

// thinking of creating an auto updater where you can just auto update from this repo, maybe in the future we can do this 
class addresses {
public:
    DWORD64 lual_checklstring = 0;
    DWORD64 lual_optstring = 0;
    DWORD64 lual_register = 0;
    DWORD64 lual_findtable = 0;
    DWORD64 lual_checkltype = 0x22EA700;
    DWORD64 lua_typename = 0x22E9300;
    DWORD64 lua_type = 0x22E91D0;
    DWORD64 lua_iscfunction = 0x22E9320;
    DWORD64 lua_auxopen = 0x230D5A0; // lua_pushcfunction, lua_setfield, lua_pushcclosure
    DWORD64 lua_pushvalue = 0x22E7DD0;

    // additional features, your env already should be having these, but just for the sake of luas3x, it's added.
    // todo: actually make use of this instead of adding them for no reason
    DWORD64 luao_nilobject = 0x4172E58;
    addresses() = default;
};

namespace luas3x {

};
