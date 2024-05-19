/*
=========================== GalaxyRP Mod ============================
Project based on OpenJK and Zyk Mod. Work copyrighted (C) 2020 - 2022
=====================================================================
[Description]: Main version header
=====================================================================
*/

#ifndef __RP_VERSION_H__
#define __RP_VERSION_H__

#define VAL(x) #x
#define STR(x) VAL(x)

#ifdef _DEBUG
    #define VER(x) "(debug)" x
#else
    #define VER(x) x
#endif

// Current version of the multi player game
#define VERSION_MAJOR_RELEASE		3
#define VERSION_MINOR_RELEASE		7
#define VERSION_BUGFIX_RELEASE		3
#define VERSION_EXTERNAL_BUILD		0
#define VERSION_INTERNAL_BUILD		0

#define VERSION_STRING STR(VERSION_MAJOR_RELEASE) ", " STR(VERSION_MINOR_RELEASE) // "a, b"
#define VERSION_STRING_DOTTED STR(VERSION_MAJOR_RELEASE) "." STR(VERSION_MINOR_RELEASE) "." STR(VERSION_BUGFIX_RELEASE) // "a.b.c"

// Set mod version definitions
#define	JK_VERSION                  VER("GalaxyRP Mod v" VERSION_STRING_DOTTED)
#define JK_VERSION_OLD              VER("JAmp: v" VERSION_STRING_DOTTED)
#define JK_URL                      "https://www.galaxyrp.uk"

// Public version
#define GAMEVERSION			        JK_VERSION

#endif //__RP_VERSION_H__
