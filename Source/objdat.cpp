#include "diablo.h"

int ObjTypeConv[113] = {
	0,
	4,
	20,
	21,
	22,
	24,
	11,
	12,
	13,
	0,
	0,
	0,
	0,
	0,
	25,
	41,
	26,
	0,
	8,
	9,
	10,
	80,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	49,
	0,
	0,
	0,
	0,
	0,
	84,
	85,
	3,
	14,
	15,
	16,
	17,
	18,
	19,
	0,
	0,
	0,
	0,
	0,
	0,
	28,
	0,
	53,
	54,
	36,
	37,
	38,
	39,
	40,
	0,
	0,
	0,
	0,
	0,
	27,
	0,
	0,
	0,
	0,
	29,
	30,
	31,
	32,
	33,
	34,
	35,
	5,
	5,
	5,
	6,
	6,
	6,
	7,
	7,
	7,
	0,
	0,
	0,
	0,
	0,
	73,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	83,
	0,
	0,
	89,
	90,
	47,
	46,
	94
};

ObjDataStruct AllObjects[99] = {
	// clang-format off
	// oload, ofindex,   ominlvl, omaxlvl, olvltype, otheme,              oquest, oAnimFlag, oAnimDelay, oAnimLen, oAnimWidth, oSolidFlag, oMissFlag, oLightFlag, oBreak, oSelFlag, oTrapFlag
	{      1, OFILE_L1BRAZ,    1,       4,        1, THEME_NONE,              -1,         1,          1,       26,         64, TRUE,       TRUE,      FALSE,           0,        0, FALSE     },
	{      1, OFILE_L1DOORS,   1,       4,        1, THEME_NONE,              -1,         0,          1,        0,         64, FALSE,      FALSE,     TRUE,            0,        3, TRUE      },
	{      1, OFILE_L1DOORS,   1,       4,        1, THEME_NONE,              -1,         0,          2,        0,         64, FALSE,      FALSE,     TRUE,            0,        3, TRUE      },
	{      3, OFILE_SKULFIRE,  0,       0,        0, THEME_SKELROOM,          -1,         1,          2,       11,         96, TRUE,       TRUE,      FALSE,           0,        0, FALSE     },
	{      1, OFILE_LEVER,     1,       4,        1, THEME_NONE,              -1,         0,          1,        1,         96, TRUE,       TRUE,      TRUE,            0,        1, TRUE      },
	{      1, OFILE_CHEST1,    1,      16,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        1, TRUE      },
	{      1, OFILE_CHEST2,    1,      16,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        1, TRUE      },
	{      1, OFILE_CHEST3,    1,      16,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        1, TRUE      },
	{      2, OFILE_L1BRAZ,    0,       0,        0, THEME_NONE,              -1,         0,          0,        0,          0, FALSE,      FALSE,     FALSE,           0,        0, FALSE     },
	{      3, OFILE_CANDLE2,   0,       0,        0, THEME_SHRINE,            -1,         1,          2,        4,         96, TRUE,       TRUE,      TRUE,            0,        0, FALSE     },
	{      2, OFILE_L1BRAZ,    0,       0,        0, THEME_NONE,              -1,         0,          0,        0,          0, FALSE,      FALSE,     FALSE,           0,        0, FALSE     },
	{      3, OFILE_BANNER,    0,       0,        0, THEME_SKELROOM,          -1,         0,          2,        0,         96, TRUE,       TRUE,      TRUE,            0,        0, FALSE     },
	{      3, OFILE_BANNER,    0,       0,        0, THEME_SKELROOM,          -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        0, FALSE     },
	{      3, OFILE_BANNER,    0,       0,        0, THEME_SKELROOM,          -1,         0,          3,        0,         96, TRUE,       TRUE,      TRUE,            0,        0, FALSE     },
	{      2, OFILE_SKULPILE,  1,       4,        0, THEME_NONE,              -1,         0,          0,        1,         96, TRUE,       TRUE,      TRUE,            0,        0, FALSE     },
	{      2, OFILE_L1BRAZ,    0,       0,        0, THEME_NONE,              -1,         0,          0,        0,          0, FALSE,      FALSE,     FALSE,           0,        0, FALSE     },
	{      2, OFILE_L1BRAZ,    0,       0,        0, THEME_NONE,              -1,         0,          0,        0,          0, FALSE,      FALSE,     FALSE,           0,        0, FALSE     },
	{      2, OFILE_L1BRAZ,    0,       0,        0, THEME_NONE,              -1,         0,          0,        0,          0, FALSE,      FALSE,     FALSE,           0,        0, FALSE     },
	{      2, OFILE_L1BRAZ,    0,       0,        0, THEME_NONE,              -1,         0,          0,        0,          0, FALSE,      FALSE,     FALSE,           0,        0, FALSE     },
	{      2, OFILE_L1BRAZ,    0,       0,        0, THEME_NONE,              -1,         0,          0,        0,          0, FALSE,      FALSE,     FALSE,           0,        0, FALSE     },
	{      2, OFILE_CRUXSK1,   0,       0,        0, THEME_NONE,              -1,         0,          1,       15,         96, TRUE,       FALSE,     TRUE,            1,        3, FALSE     },
	{      2, OFILE_CRUXSK2,   0,       0,        0, THEME_NONE,              -1,         0,          1,       15,         96, TRUE,       FALSE,     TRUE,            1,        3, FALSE     },
	{      2, OFILE_CRUXSK3,   0,       0,        0, THEME_NONE,              -1,         0,          1,       15,         96, TRUE,       FALSE,     TRUE,            1,        3, FALSE     },
	{      1, OFILE_ROCKSTAN,  5,       5,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        0, FALSE     },
	{      2, OFILE_ANGEL,     0,       0,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      2, OFILE_BOOK2,     0,       0,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      2, OFILE_BURNCROS,  0,       0,        0, THEME_NONE,              -1,         1,          0,       10,        160, TRUE,       FALSE,     FALSE,           0,        0, FALSE     },
	{      2, OFILE_NUDE2,     0,       0,        0, THEME_NONE,              -1,         1,          3,        6,        128, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_SWITCH4,  16,      16,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        1, TRUE      },
	{      1, OFILE_TNUDEM,   13,      16,        0, THEME_NONE,               6,         0,          1,        0,        128, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_TNUDEM,   13,      16,        0, THEME_TORTURE,            6,         0,          2,        0,        128, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_TNUDEM,   13,      16,        0, THEME_TORTURE,            6,         0,          3,        0,        128, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_TNUDEM,   13,      16,        0, THEME_TORTURE,            6,         0,          4,        0,        128, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_TNUDEW,   13,      16,        0, THEME_TORTURE,            6,         0,          1,        0,        128, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_TNUDEW,   13,      16,        0, THEME_TORTURE,            6,         0,          2,        0,        128, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_TNUDEW,   13,      16,        0, THEME_TORTURE,            6,         0,          3,        0,        128, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_TSOUL,    13,      16,        0, THEME_NONE,               6,         0,          1,        0,        128, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_TSOUL,    13,      16,        0, THEME_NONE,               6,         0,          2,        0,        128, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_TSOUL,    13,      16,        0, THEME_NONE,               6,         0,          3,        0,        128, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_TSOUL,    13,      16,        0, THEME_NONE,               6,         0,          4,        0,        128, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_TSOUL,    13,      16,        0, THEME_NONE,               6,         0,          5,        0,        128, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_BOOK2,     6,       6,        0, THEME_NONE,              -1,         0,          4,        0,         96, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      1, OFILE_L2DOORS,   5,       8,        2, THEME_NONE,              -1,         0,          1,        0,         64, FALSE,      FALSE,     TRUE,            0,        3, TRUE      },
	{      1, OFILE_L2DOORS,   5,       8,        2, THEME_NONE,              -1,         0,          2,        0,         64, FALSE,      FALSE,     TRUE,            0,        3, FALSE     },
	{      1, OFILE_WTORCH4,   5,       8,        2, THEME_NONE,              -1,         1,          1,        9,         96, FALSE,      TRUE,      FALSE,           0,        0, FALSE     },
	{      1, OFILE_WTORCH3,   5,       8,        2, THEME_NONE,              -1,         1,          1,        9,         96, FALSE,      TRUE,      FALSE,           0,        0, FALSE     },
	{      1, OFILE_WTORCH1,   5,       8,        2, THEME_NONE,              -1,         1,          1,        9,         96, FALSE,      TRUE,      FALSE,           0,        0, FALSE     },
	{      1, OFILE_WTORCH2,   5,       8,        2, THEME_NONE,              -1,         1,          1,        9,         96, FALSE,      TRUE,      FALSE,           0,        0, FALSE     },
	{      1, OFILE_SARC,      1,       4,        1, THEME_NONE,              -1,         0,          1,        5,        128, TRUE,       TRUE,      TRUE,            0,        3, TRUE      },
	{      2, OFILE_FLAME1,    1,       4,        1, THEME_NONE,              -1,         0,          1,       20,         96, FALSE,      TRUE,      TRUE,            0,        0, FALSE     },
	{      2, OFILE_LEVER,     1,       4,        1, THEME_NONE,              -1,         0,          1,        2,         96, TRUE,       TRUE,      TRUE,            0,        1, TRUE      },
	{      2, OFILE_MINIWATR,  1,       4,        1, THEME_NONE,              -1,         1,          1,       10,         64, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_BOOK1,     3,       4,        1, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      1, OFILE_TRAPHOLE,  1,      16,        0, THEME_NONE,              -1,         0,          1,        0,         64, FALSE,      TRUE,      TRUE,            0,        0, FALSE     },
	{      1, OFILE_TRAPHOLE,  1,      16,        0, THEME_NONE,              -1,         0,          2,        0,         64, FALSE,      TRUE,      TRUE,            0,        0, FALSE     },
	{      2, OFILE_BCASE,     0,       0,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      2, OFILE_WEAPSTND,  0,       0,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      1, OFILE_BARREL,    1,      16,        0, THEME_NONE,              -1,         0,          1,        9,         96, TRUE,       TRUE,      TRUE,            1,        3, FALSE     },
	{      1, OFILE_BARRELEX,  1,      16,        0, THEME_NONE,              -1,         0,          1,       10,         96, TRUE,       TRUE,      TRUE,            1,        3, FALSE     },
	{      3, OFILE_LSHRINEG,  0,       0,        0, THEME_SHRINE,            -1,         0,          1,       11,        128, FALSE,      FALSE,     TRUE,            0,        3, FALSE     },
	{      3, OFILE_RSHRINEG,  0,       0,        0, THEME_SHRINE,            -1,         0,          1,       11,        128, FALSE,      FALSE,     TRUE,            0,        3, FALSE     },
	{      3, OFILE_BOOK2,     0,       0,        0, THEME_SKELROOM,          -1,         0,          4,        0,         96, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      3, OFILE_BCASE,     0,       0,        0, THEME_LIBRARY,           -1,         0,          3,        0,         96, FALSE,      FALSE,     TRUE,            0,        3, FALSE     },
	{      3, OFILE_BCASE,     0,       0,        0, THEME_LIBRARY,           -1,         0,          4,        0,         96, FALSE,      FALSE,     TRUE,            0,        3, FALSE     },
	{      3, OFILE_BOOK2,     0,       0,        0, THEME_LIBRARY,           -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      3, OFILE_CANDLE2,   0,       0,        0, THEME_LIBRARY,           -1,         1,          2,        4,         96, TRUE,       TRUE,      TRUE,            0,        0, FALSE     },
	{      3, OFILE_BLOODFNT,  0,       0,        0, THEME_BLOODFOUNTAIN,     -1,         1,          2,       10,         96, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      1, OFILE_DECAP,    13,      16,        0, THEME_DECAPITATED,       -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        1, FALSE     },
	{      1, OFILE_CHEST1,    1,      16,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        1, TRUE      },
	{      1, OFILE_CHEST2,    1,      16,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        1, TRUE      },
	{      1, OFILE_CHEST3,    1,      16,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        1, TRUE      },
	{      1, OFILE_BOOK1,     7,       7,        2, THEME_NONE,               8,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      1, OFILE_BOOK1,     5,       5,        2, THEME_NONE,               9,         0,          4,        0,         96, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      1, OFILE_PEDISTL,   5,       5,        2, THEME_NONE,               9,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      1, OFILE_L3DOORS,   9,      12,        3, THEME_NONE,              -1,         0,          1,        0,         64, FALSE,      FALSE,     TRUE,            0,        3, TRUE      },
	{      1, OFILE_L3DOORS,   9,      12,        3, THEME_NONE,              -1,         0,          2,        0,         64, FALSE,      FALSE,     TRUE,            0,        3, TRUE      },
	{      3, OFILE_PFOUNTN,   0,       0,        0, THEME_PURIFYINGFOUNTAIN, -1,         1,          2,       10,        128, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      3, OFILE_ARMSTAND,  0,       0,        0, THEME_ARMORSTAND,        -1,         0,          1,        0,         96, TRUE,       FALSE,     TRUE,            0,        3, FALSE     },
	{      3, OFILE_ARMSTAND,  0,       0,        0, THEME_ARMORSTAND,        -1,         0,          2,        0,         96, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      3, OFILE_GOATSHRN,  0,       0,        0, THEME_GOATSHRINE,        -1,         1,          2,       10,         96, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      1, OFILE_CAULDREN, 13,      16,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       FALSE,     TRUE,            0,        3, FALSE     },
	{      3, OFILE_MFOUNTN,   0,       0,        0, THEME_MURKYFOUNTAIN,     -1,         1,          2,       10,        128, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      3, OFILE_TFOUNTN,   0,       0,        0, THEME_TEARFOUNTAIN,      -1,         1,          2,        4,        128, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      1, OFILE_ALTBOY,    0,       0,        1, THEME_NONE,              15,         0,          1,        0,        128, TRUE,       TRUE,      TRUE,            0,        0, FALSE     },
	{      1, OFILE_MCIRL,     0,       0,        1, THEME_NONE,              15,         0,          1,        0,         96, FALSE,      TRUE,      TRUE,            0,        0, FALSE     },
	{      1, OFILE_MCIRL,     0,       0,        1, THEME_NONE,              15,         0,          1,        0,         96, FALSE,      TRUE,      TRUE,            0,        0, FALSE     },
	{      1, OFILE_BKSLBRNT,  4,      12,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      1, OFILE_CANDLE2,   2,      12,        0, THEME_NONE,              15,         1,          2,        4,         96, TRUE,       TRUE,      TRUE,            0,        0, FALSE     },
	{      1, OFILE_BOOK1,    13,      13,        4, THEME_NONE,              11,         0,          4,        0,         96, TRUE,       TRUE,      TRUE,            0,        3, FALSE     },
	{      1, OFILE_ARMSTAND, 13,      13,        0, THEME_NONE,              11,         0,          1,        0,         96, TRUE,       FALSE,     TRUE,            0,        3, FALSE     },
	{      2, OFILE_WEAPSTND, 13,      13,        0, THEME_NONE,              11,         0,          1,        0,         96, TRUE,       FALSE,     TRUE,            0,        3, FALSE     },
	{      2, OFILE_BURNCROS,  0,       0,        0, THEME_BRNCROSS,          -1,         1,          0,       10,        160, TRUE,       FALSE,     FALSE,           0,        0, FALSE     },
	{      2, OFILE_WEAPSTND,  0,       0,        0, THEME_WEAPONRACK,        -1,         0,          1,        0,         96, TRUE,       FALSE,     TRUE,            0,        3, FALSE     },
	{      2, OFILE_WEAPSTND,  0,       0,        0, THEME_WEAPONRACK,        -1,         0,          2,        0,         96, TRUE,       FALSE,     TRUE,            0,        0, FALSE     },
	{      2, OFILE_MUSHPTCH,  0,       0,        0, THEME_NONE,               1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        3, TRUE      },
	{      2, OFILE_LZSTAND,   0,       0,        0, THEME_NONE,              15,         0,          1,        0,        128, TRUE,       FALSE,     TRUE,            0,        3, FALSE     },
	{      1, OFILE_DECAP,     9,       9,        3, THEME_NONE,              -1,         0,          2,        0,         96, TRUE,       TRUE,      TRUE,            0,        1, FALSE     },
	{      2, OFILE_CHEST3,    0,       0,        0, THEME_NONE,              -1,         0,          1,        0,         96, TRUE,       TRUE,      TRUE,            0,        1, TRUE      },
	{     -1, 0,               0,       0,       -1, THEME_NONE,              -1,         0,          0,        0,          0, FALSE,      FALSE,     FALSE,           0,        0, FALSE     }
	// clang-format on
};

// might be const
char *ObjMasterLoadList[56] = {
	"L1Braz",
	"L1Doors",
	"Lever",
	"Chest1",
	"Chest2",
	"Banner",
	"SkulPile",
	"SkulFire",
	"SkulStik",
	"CruxSk1",
	"CruxSk2",
	"CruxSk3",
	"Book1",
	"Book2",
	"Rockstan",
	"Angel",
	"Chest3",
	"Burncros",
	"Candle2",
	"Nude2",
	"Switch4",
	"TNudeM",
	"TNudeW",
	"TSoul",
	"L2Doors",
	"WTorch4",
	"WTorch3",
	"Sarc",
	"Flame1",
	"Prsrplt1",
	"Traphole",
	"MiniWatr",
	"WTorch2",
	"WTorch1",
	"BCase",
	"BShelf",
	"WeapStnd",
	"Barrel",
	"Barrelex",
	"LShrineG",
	"RShrineG",
	"Bloodfnt",
	"Decap",
	"Pedistl",
	"L3Doors",
	"PFountn",
	"Armstand",
	"Goatshrn",
	"Cauldren",
	"MFountn",
	"TFountn",
	"Altboy",
	"Mcirl",
	"Bkslbrnt",
	"Mushptch",
	"LzStand"
};
