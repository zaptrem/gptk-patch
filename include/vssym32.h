/*
 * Copyright (C) 2011 Piotr Caban for CodeWeavers
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __VSSYM32_H__
#define __VSSYM32_H__

#include "wine/winheader_enter.h"

#include "vsstyle.h"


enum BGTYPE {
    BT_IMAGEFILE = 0,
    BT_BORDERFILL = 1,
    BT_NONE = 2,
};

enum IMAGELAYOUT {
    IL_VERTICAL = 0,
    IL_HORIZONTAL = 1,
};

enum BORDERTYPE {
    BT_RECT = 0,
    BT_ROUNDRECT = 1,
    BT_ELLIPSE = 2,
};

enum FILLTYPE {
    FT_SOLID = 0,
    FT_VERTGRADIENT = 1,
    FT_HORZGRADIENT = 2,
    FT_RADIALGRADIENT = 3,
    FT_TILEIMAGE = 4,
};

enum SIZINGTYPE {
    ST_TRUESIZE = 0,
    ST_STRETCH = 1,
    ST_TILE = 2,
};

enum HALIGN {
    HA_LEFT = 0,
    HA_CENTER = 1,
    HA_RIGHT = 2,
};

enum CONTENTALIGNMENT {
    CA_LEFT = 0,
    CA_CENTER = 1,
    CA_RIGHT = 2,
};

enum VALIGN {
    VA_TOP = 0,
    VA_CENTER = 1,
    VA_BOTTOM = 2,
};

enum OFFSETTYPE {
    OT_TOPLEFT = 0,
    OT_TOPRIGHT = 1,
    OT_TOPMIDDLE = 2,
    OT_BOTTOMLEFT = 3,
    OT_BOTTOMRIGHT = 4,
    OT_BOTTOMMIDDLE = 5,
    OT_MIDDLELEFT = 6,
    OT_MIDDLERIGHT = 7,
    OT_LEFTOFCAPTION = 8,
    OT_RIGHTOFCAPTION = 9,
    OT_LEFTOFLASTBUTTON = 10,
    OT_RIGHTOFLASTBUTTON = 11,
    OT_ABOVELASTBUTTON = 12,
    OT_BELOWLASTBUTTON = 13,
};

enum ICONEFFECT {
    ICE_NONE = 0,
    ICE_GLOW = 1,
    ICE_SHADOW = 2,
    ICE_PULSE = 3,
    ICE_ALPHA = 4,
};

enum TEXTSHADOWTYPE {
    TST_NONE = 0,
    TST_SINGLE = 1,
    TST_CONTINUOUS = 2,
};

enum GLYPHTYPE {
    GT_NONE = 0,
    GT_IMAGEGLYPH = 1,
    GT_FONTGLYPH = 2,
};

enum IMAGESELECTTYPE {
    IST_NONE = 0,
    IST_SIZE = 1,
    IST_DPI = 2,
};

enum TRUESIZESCALINGTYPE {
    TSST_NONE = 0,
    TSST_SIZE = 1,
    TSST_DPI = 2,
};

enum GLYPHFONTSIZINGTYPE {
    GFST_NONE = 0,
    GFST_SIZE = 1,
    GFST_DPI = 2,
};

#define TMT_RESERVEDLOW 0
#define TMT_RESERVEDHIGH 7999

#define TMT_DIBDATA 2
#define TMT_GLYPHDIBDATA 8
#define TMT_ENUM 200
#define TMT_STRING 201
#define TMT_INT 202
#define TMT_BOOL 203
#define TMT_COLOR 204
#define TMT_MARGINS 205
#define TMT_FILENAME 206
#define TMT_SIZE 207
#define TMT_POSITION 208
#define TMT_RECT 209
#define TMT_FONT 210
#define TMT_INTLIST 211
#define TMT_HBITMAP 212
#define TMT_DISKSTREAM 213
#define TMT_STREAM 214
#define TMT_BITMAPREF 215
#define TMT_COLORSCHEMES 401
#define TMT_SIZES 402
#define TMT_CHARSET 403
#define TMT_NAME 600
#define TMT_DISPLAYNAME 601
#define TMT_TOOLTIP 602
#define TMT_COMPANY 603
#define TMT_AUTHOR 604
#define TMT_COPYRIGHT 605
#define TMT_URL 606
#define TMT_VERSION 607
#define TMT_DESCRIPTION 608
#define TMT_FIRST_RCSTRING_NAME TMT_DISPLAYNAME
#define TMT_LAST_RCSTRING_NAME TMT_DESCRIPTION
#define TMT_CAPTIONFONT 801
#define TMT_SMALLCAPTIONFONT 802
#define TMT_MENUFONT 803
#define TMT_STATUSFONT 804
#define TMT_MSGBOXFONT 805
#define TMT_ICONTITLEFONT 806
#define TMT_HEADING1FONT 807
#define TMT_HEADING2FONT 808
#define TMT_BODYFONT 809
#define TMT_FIRSTFONT TMT_CAPTIONFONT
#define TMT_LASTFONT TMT_BODYFONT
#define TMT_FLATMENUS 1001
#define TMT_FIRSTBOOL TMT_FLATMENUS
#define TMT_LASTBOOL TMT_FLATMENUS
#define TMT_SIZINGBORDERWIDTH 1201
#define TMT_SCROLLBARWIDTH 1202
#define TMT_SCROLLBARHEIGHT 1203
#define TMT_CAPTIONBARWIDTH 1204
#define TMT_CAPTIONBARHEIGHT 1205
#define TMT_SMCAPTIONBARWIDTH 1206
#define TMT_SMCAPTIONBARHEIGHT 1207
#define TMT_MENUBARWIDTH 1208
#define TMT_MENUBARHEIGHT 1209
#define TMT_PADDEDBORDERWIDTH 1210
#define TMT_FIRSTSIZE TMT_SIZINGBORDERWIDTH
#define TMT_LASTSIZE TMT_PADDEDBORDERWIDTH
#define TMT_MINCOLORDEPTH 1301
#define TMT_FIRSTINT TMT_MINCOLORDEPTH
#define TMT_LASTINT TMT_MINCOLORDEPTH
#define TMT_CSSNAME 1401
#define TMT_XMLNAME 1402
#define TMT_LASTUPDATED 1403
#define TMT_ALIAS 1404
#define TMT_FIRSTSTRING TMT_CSSNAME
#define TMT_LASTSTRING TMT_ALIAS
#define TMT_SCROLLBAR 1601
#define TMT_BACKGROUND 1602
#define TMT_ACTIVECAPTION 1603
#define TMT_INACTIVECAPTION 1604
#define TMT_MENU 1605
#define TMT_WINDOW 1606
#define TMT_WINDOWFRAME 1607
#define TMT_MENUTEXT 1608
#define TMT_WINDOWTEXT 1609
#define TMT_CAPTIONTEXT 1610
#define TMT_ACTIVEBORDER 1611
#define TMT_INACTIVEBORDER 1612
#define TMT_APPWORKSPACE 1613
#define TMT_HIGHLIGHT 1614
#define TMT_HIGHLIGHTTEXT 1615
#define TMT_BTNFACE 1616
#define TMT_BTNSHADOW 1617
#define TMT_GRAYTEXT 1618
#define TMT_BTNTEXT 1619
#define TMT_INACTIVECAPTIONTEXT 1620
#define TMT_BTNHIGHLIGHT 1621
#define TMT_DKSHADOW3D 1622
#define TMT_LIGHT3D 1623
#define TMT_INFOTEXT 1624
#define TMT_INFOBK 1625
#define TMT_BUTTONALTERNATEFACE 1626
#define TMT_HOTTRACKING 1627
#define TMT_GRADIENTACTIVECAPTION 1628
#define TMT_GRADIENTINACTIVECAPTION 1629
#define TMT_MENUHILIGHT 1630
#define TMT_MENUBAR 1631
#define TMT_FIRSTCOLOR TMT_SCROLLBAR
#define TMT_LASTCOLOR TMT_MENUBAR
#define TMT_FROMHUE1 1801
#define TMT_FROMHUE2 1802
#define TMT_FROMHUE3 1803
#define TMT_FROMHUE4 1804
#define TMT_FROMHUE5 1805
#define TMT_TOHUE1 1806
#define TMT_TOHUE2 1807
#define TMT_TOHUE3 1808
#define TMT_TOHUE4 1809
#define TMT_TOHUE5 1810
#define TMT_FROMCOLOR1 2001
#define TMT_FROMCOLOR2 2002
#define TMT_FROMCOLOR3 2003
#define TMT_FROMCOLOR4 2004
#define TMT_FROMCOLOR5 2005
#define TMT_TOCOLOR1 2006
#define TMT_TOCOLOR2 2007
#define TMT_TOCOLOR3 2008
#define TMT_TOCOLOR4 2009
#define TMT_TOCOLOR5 2010
#define TMT_TRANSPARENT 2201
#define TMT_AUTOSIZE 2202
#define TMT_BORDERONLY 2203
#define TMT_COMPOSITED 2204
#define TMT_BGFILL 2205
#define TMT_GLYPHTRANSPARENT 2206
#define TMT_GLYPHONLY 2207
#define TMT_ALWAYSSHOWSIZINGBAR 2208
#define TMT_MIRRORIMAGE 2209
#define TMT_UNIFORMSIZING 2210
#define TMT_INTEGRALSIZING 2211
#define TMT_SOURCEGROW 2212
#define TMT_SOURCESHRINK 2213
#define TMT_DRAWBORDERS 2214
#define TMT_NOETCHEDEFFECT 2215
#define TMT_TEXTAPPLYOVERLAY 2216
#define TMT_TEXTGLOW 2217
#define TMT_TEXTITALIC 2218
#define TMT_COMPOSITEDOPAQUE 2219
#define TMT_LOCALIZEDMIRRORIMAGE 2220
#define TMT_IMAGECOUNT 2401
#define TMT_ALPHALEVEL 2402
#define TMT_BORDERSIZE 2403
#define TMT_ROUNDCORNERWIDTH 2404
#define TMT_ROUNDCORNERHEIGHT 2405
#define TMT_GRADIENTRATIO1 2406
#define TMT_GRADIENTRATIO2 2407
#define TMT_GRADIENTRATIO3 2408
#define TMT_GRADIENTRATIO4 2409
#define TMT_GRADIENTRATIO5 2410
#define TMT_PROGRESSCHUNKSIZE 2411
#define TMT_PROGRESSSPACESIZE 2412
#define TMT_SATURATION 2413
#define TMT_TEXTBORDERSIZE 2414
#define TMT_ALPHATHRESHOLD 2415
#define TMT_WIDTH 2416
#define TMT_HEIGHT 2417
#define TMT_GLYPHINDEX 2418
#define TMT_TRUESIZESTRETCHMARK 2419
#define TMT_MINDPI1 2420
#define TMT_MINDPI2 2421
#define TMT_MINDPI3 2422
#define TMT_MINDPI4 2423
#define TMT_MINDPI5 2424
#define TMT_TEXTGLOWSIZE 2425
#define TMT_FRAMESPERSECOND 2426
#define TMT_PIXELSPERFRAME 2427
#define TMT_ANIMATIONDELAY 2428
#define TMT_GLOWINTENSITY 2429
#define TMT_OPACITY 2430
#define TMT_COLORIZATIONCOLOR 2431
#define TMT_COLORIZATIONOPACITY 2432
#define TMT_MINDPI6 2433
#define TMT_MINDPI7 2434
#define TMT_GLYPHFONT 2601
#define TMT_IMAGEFILE 3001
#define TMT_IMAGEFILE1 3002
#define TMT_IMAGEFILE2 3003
#define TMT_IMAGEFILE3 3004
#define TMT_IMAGEFILE4 3005
#define TMT_IMAGEFILE5 3006
#define TMT_GLYPHIMAGEFILE 3008
#define TMT_IMAGEFILE6 3009
#define TMT_IMAGEFILE7 3010
#define TMT_TEXT 3201
#define TMT_CLASSICVALUE 3202
#define TMT_OFFSET 3401
#define TMT_TEXTSHADOWOFFSET 3402
#define TMT_MINSIZE 3403
#define TMT_MINSIZE1 3404
#define TMT_MINSIZE2 3405
#define TMT_MINSIZE3 3406
#define TMT_MINSIZE4 3407
#define TMT_MINSIZE5 3408
#define TMT_NORMALSIZE 3409
#define TMT_MINSIZE6 3410
#define TMT_MINSIZE7 3411
#define TMT_SIZINGMARGINS 3601
#define TMT_CONTENTMARGINS 3602
#define TMT_CAPTIONMARGINS 3603
#define TMT_BORDERCOLOR 3801
#define TMT_FILLCOLOR 3802
#define TMT_TEXTCOLOR 3803
#define TMT_EDGELIGHTCOLOR 3804
#define TMT_EDGEHIGHLIGHTCOLOR 3805
#define TMT_EDGESHADOWCOLOR 3806
#define TMT_EDGEDKSHADOWCOLOR 3807
#define TMT_EDGEFILLCOLOR 3808
#define TMT_TRANSPARENTCOLOR 3809
#define TMT_GRADIENTCOLOR1 3810
#define TMT_GRADIENTCOLOR2 3811
#define TMT_GRADIENTCOLOR3 3812
#define TMT_GRADIENTCOLOR4 3813
#define TMT_GRADIENTCOLOR5 3814
#define TMT_SHADOWCOLOR 3815
#define TMT_GLOWCOLOR 3816
#define TMT_TEXTBORDERCOLOR 3817
#define TMT_TEXTSHADOWCOLOR 3818
#define TMT_GLYPHTEXTCOLOR 3819
#define TMT_GLYPHTRANSPARENTCOLOR 3820
#define TMT_FILLCOLORHINT 3821
#define TMT_BORDERCOLORHINT 3822
#define TMT_ACCENTCOLORHINT 3823
#define TMT_TEXTCOLORHINT 3824
#define TMT_HEADING1TEXTCOLOR 3825
#define TMT_HEADING2TEXTCOLOR 3826
#define TMT_BODYTEXTCOLOR 3827
#define TMT_BGTYPE 4001
#define TMT_BORDERTYPE 4002
#define TMT_FILLTYPE 4003
#define TMT_SIZINGTYPE 4004
#define TMT_HALIGN 4005
#define TMT_CONTENTALIGNMENT 4006
#define TMT_VALIGN 4007
#define TMT_OFFSETTYPE 4008
#define TMT_ICONEFFECT 4009
#define TMT_TEXTSHADOWTYPE 4010
#define TMT_IMAGELAYOUT 4011
#define TMT_GLYPHTYPE 4012
#define TMT_IMAGESELECTTYPE 4013
#define TMT_GLYPHFONTSIZINGTYPE 4014
#define TMT_TRUESIZESCALINGTYPE 4015
#define TMT_USERPICTURE 5001
#define TMT_DEFAULTPANESIZE 5002
#define TMT_BLENDCOLOR 5003
#define TMT_CUSTOMSPLITRECT 5004
#define TMT_ANIMATIONBUTTONRECT 5005
#define TMT_ANIMATIONDURATION 5006
#define TMT_TRANSITIONDURATIONS 6000
#define TMT_SCALEDBACKGROUND 7001
#define TMT_ATLASIMAGE 8000
#define TMT_ATLASINPUTIMAGE 8001
#define TMT_ATLASRECT 8002

/* LINK class */
#if defined(_MSC_VER) || defined(__MINGW32__)
#define VSCLASS_LINK L"LINK"
#else
static const WCHAR VSCLASS_LINK[] = {'L','I','N','K',0};
#endif

enum LINKPARTS {
    LP_HYPERLINK = 1,
};

enum HYPERLINKSTATES {
    HLS_NORMALTEXT = 1,
    HLS_LINKTEXT = 2,
};

/* EMPTYMARKUP class */
#if defined(_MSC_VER) || defined(__MINGW32__)
#define VSCLASS_EMPTYMARKUP L"EMPTYMARKUP"
#else
static const WCHAR VSCLASS_EMPTYMARKUP[] = {'E','M','P','T','Y','M','A','R','K','U','P',0};
#endif

enum EMPTYMARKUPPARTS {
    EMP_MARKUPTEXT = 1,
};

enum MARKUPTEXTSTATES {
    EMT_NORMALTEXT = 1,
    EMT_LINKTEXT = 2,
};

/* STATIC class */
#if defined(_MSC_VER) || defined(__MINGW32__)
#define VSCLASS_STATIC L"STATIC"
#else
static const WCHAR VSCLASS_STATIC[] = {'S','T','A','T','I','C',0};
#endif

enum STATICPARTS {
    STAT_TEXT = 1,
};

/* PAGE class */
#if defined(_MSC_VER) || defined(__MINGW32__)
#define VSCLASS_PAGE L"PAGE"
#else
static const WCHAR VSCLASS_PAGE[] = {'P','A','G','E',0};
#endif

enum PAGEPARTS {
    PGRP_UP = 1,
    PGRP_DOWN = 2,
    PGRP_UPHORZ = 3,
    PGRP_DOWNHORZ = 4,
};

/* MONTHCAL class */
#if defined(_MSC_VER) || defined(__MINGW32__)
#define VSCLASS_MONTHCAL L"MONTHCAL"
#else
static const WCHAR VSCLASS_MONTHCAL[] = {'M','O','N','T','H','C','A','L',0};
#endif

enum MONTHCALPARTS {
    MC_BACKGROUND = 1,
    MC_BORDERS = 2,
    MC_GRIDBACKGROUND = 3,
    MC_COLHEADERSPLITTER = 4,
    MC_GRIDCELLBACKGROUND = 5,
    MC_GRIDCELL = 6,
    MC_GRIDCELLUPPER = 7,
    MC_TRAILINGGRIDCELL = 8,
    MC_TRAILINGGRIDCELLUPPER = 9,
    MC_NAVNEXT = 10,
    MC_NAVPREV = 11,
};

enum GRIDCELLBACKGROUNDSTATES {
    MCGCB_SELECTED = 1,
    MCGCB_HOT = 2,
    MCGCB_SELECTEDHOT = 3,
    MCGCB_SELECTEDNOTFOCUSED = 4,
    MCGCB_TODAY = 5,
};

enum GRIDCELLSTATES {
    MCGC_HOT = 1,
    MCGC_HASSTATE = 2,
    MCGC_HASSTATEHOT = 3,
    MCGC_TODAY = 4,
};

enum GRIDCELLUPPERSTATES {
    MCGCU_HOT = 1,
    MCGCU_HASSTATE = 2,
    MCGCU_HASSTATEHOT = 3,
};

enum TRAILINGGRIDCELLSTATES {
    MCTGC_HOT = 1,
    MCTGC_HASSTATE = 2,
    MCTGC_HASSTATEHOT = 3,
    MCTGC_TODAY = 4,
};

enum TRAILINGGRIDCELLUPPERSTATES {
    MCTGCU_HOT = 1,
    MCTGCU_HASSTATE = 2,
    MCTGCU_HASSTATEHOT = 3,
};

enum NAVNEXTSTATES {
    MCNN_NORMAL = 1,
    MCNN_HOT = 2,
    MCNN_PRESSED = 3,
    MCNN_DISABLED = 4,
};

enum NAVPREVSTATES {
    MCNP_NORMAL = 1,
    MCNP_HOT = 2,
    MCNP_PRESSED = 3,
    MCNP_DISABLED = 4,
};

/* CLOCK class */
#if defined(_MSC_VER) || defined(__MINGW32__)
#define VSCLASS_CLOCK L"CLOCK"
#else
static const WCHAR VSCLASS_CLOCK[] = {'C','L','O','C','K',0};
#endif

enum CLOCKPARTS {
    CLP_TIME = 1,
};

enum CLOCKSTATES {
    CLS_NORMAL = 1,
    CLS_HOT = 2,
    CLS_PRESSED = 3,
};

/* TRAYNOTIFY class */
#if defined(_MSC_VER) || defined(__MINGW32__)
#define VSCLASS_TRAYNOTIFY L"TRAYNOTIFY"
#else
static const WCHAR VSCLASS_TRAYNOTIFY[] = {'T','R','A','Y','N','O','T','I','F','Y',0};
#endif

enum TRAYNOTIFYPARTS {
    TNP_BACKGROUND = 1,
    TNP_ANIMBACKGROUND = 2,
};

/* TASKBAR class */
#if defined(_MSC_VER) || defined(__MINGW32__)
#define VSCLASS_TASKBAR L"TASKBAR"
#else
static const WCHAR VSCLASS_TASKBAR[] = {'T','A','S','K','B','A','R',0};
#endif

enum TASKBARPARTS {
    TBP_BACKGROUNDBOTTOM = 1,
    TBP_BACKGROUNDRIGHT = 2,
    TBP_BACKGROUNDTOP = 3,
    TBP_BACKGROUNDLEFT = 4,
    TBP_SIZINGBARBOTTOM = 5,
    TBP_SIZINGBARRIGHT = 6,
    TBP_SIZINGBARTOP = 7,
    TBP_SIZINGBARLEFT = 8,
};

/* TASKBAND class */
#if defined(_MSC_VER) || defined(__MINGW32__)
#define VSCLASS_TASKBAND L"TASKBAND"
#else
static const WCHAR VSCLASS_TASKBAND[] = {'T','A','S','K','B','A','N','D',0};
#endif

enum TASKBANDPARTS {
    TDP_GROUPCOUNT = 1,
    TDP_FLASHBUTTON = 2,
    TDP_FLASHBUTTONGROUPMENU = 3,
};

/* STARTPANEL class */
#if defined(_MSC_VER) || defined(__MINGW32__)
#define VSCLASS_STARTPANEL L"STARTPANEL"
#else
static const WCHAR VSCLASS_STARTPANEL[] = {'S','T','A','R','T','P','A','N','E','L',0};
#endif

enum STARTPANELPARTS {
    SPP_USERPANE = 1,
    SPP_MOREPROGRAMS = 2,
    SPP_MOREPROGRAMSARROW = 3,
    SPP_PROGLIST = 4,
    SPP_PROGLISTSEPARATOR = 5,
    SPP_PLACESLIST = 6,
    SPP_PLACESLISTSEPARATOR = 7,
    SPP_LOGOFF = 8,
    SPP_LOGOFFBUTTONS = 9,
    SPP_USERPICTURE = 10,
    SPP_PREVIEW = 11,
    SPP_MOREPROGRAMSTAB = 12,
    SPP_NSCHOST = 13,
    SPP_SOFTWAREEXPLORER = 14,
    SPP_OPENBOX = 15,
    SPP_SEARCHVIEW = 16,
    SPP_MOREPROGRAMSARROWBACK = 17,
    SPP_TOPMATCH = 18,
    SPP_LOGOFFSPLITBUTTONDROPDOWN = 19,
};

enum MOREPROGRAMSTABSTATES {
    SPMPT_NORMAL = 1,
    SPMPT_HOT = 2,
    SPMPT_SELECTED = 3,
    SPMPT_DISABLED = 4,
    SPMPT_FOCUSED = 5,
};

enum SOFTWAREEXPLORERSTATES {
    SPSE_NORMAL = 1,
    SPSE_HOT = 2,
    SPSE_SELECTED = 3,
    SPSE_DISABLED = 4,
    SPSE_FOCUSED = 5,
};

enum OPENBOXSTATES {
    SPOB_NORMAL = 1,
    SPOB_HOT = 2,
    SPOB_SELECTED = 3,
    SPOB_DISABLED = 4,
    SPOB_FOCUSED = 5,
};

enum MOREPROGRAMSARROWSTATES {
    SPS_NORMAL = 1,
    SPS_HOT = 2,
    SPS_PRESSED = 3,
};

enum MOREPROGRAMSARROWBACKSTATES {
    SPSB_NORMAL = 1,
    SPSB_HOT = 2,
    SPSB_PRESSED = 3,
};

enum LOGOFFBUTTONSSTATES {
    SPLS_NORMAL = 1,
    SPLS_HOT = 2,
    SPLS_PRESSED = 3,
};

/* MENUBAND class */
#if defined(_MSC_VER) || defined(__MINGW32__)
#define VSCLASS_MENUBAND L"MENUBAND"
#else
static const WCHAR VSCLASS_MENUBAND[] = {'M','E','N','U','B','A','N','D',0};
#endif

enum MENUBANDPARTS {
    MDP_NEWAPPBUTTON = 1,
    MDP_SEPERATOR = 2,
};

enum MENUBANDSTATES {
    MDS_NORMAL = 1,
    MDS_HOT = 2,
    MDS_PRESSED = 3,
    MDS_DISABLED = 4,
    MDS_CHECKED = 5,
    MDS_HOTCHECKED = 6,
};

#include "wine/winheader_exit.h"

#endif /* __VSSYM32_H__ */
