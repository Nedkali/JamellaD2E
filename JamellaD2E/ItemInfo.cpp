#include "JamellaD2E.h"
struct ItemInfo itemunknown = { "Unknown Item",'X',0,"Unknown Item",0x0000,0x0,0,'N',0xFFFFFFFF,0,IDB_ITEM_UNKNOWN,0,0,0,0x0,1,1,0,' ',0,0,0,0,0,0,0,0
,0,0,0,100,0,0,0,0,0 };

struct ItemInfo ItemInfos[] = {
{ "Hand Axe",'N',0,"Weapon Axe",0x0000,0x0,0,'N',0x20786168,0,IDB_ITEM_HANDAXE,1102,2,16,0xB,1,3,4,' ',28,0,0,0,1,3,6,3,
6,0,0,100,0,0,2,'W',0,0 },
{ "The Gnasher",'U',"Hand Axe","Weapon Axe",0x0000,0x00,0,'U',0x20786168,0,IDB_ITEM_THEGNASHER,1202,0,0,0xB,1,3,4,' ',14
0,0,0,0,1,3,6,3,6,0,0,100,0,0,2,'W',0,0 },
{ "Axe",'N',0,"Weapon Axe",0x0010,0x0,0,'N',0x20657861,0,IDB_ITEM_AXE,1102,2,16,0xB,2,3,4,' ',24,32,0,0,1,3,11,3,11,0,0,
100,0,0,3,'W',0,0 },
{ "Deathspade",'U',"Axe","Weapon Axe",0x0010,0x02,0,'U',0x20657861,0,IDB_ITEM_DEATHSPADE,1202,0,0,0xB,2,3,4,' ',120,32,0
,0,1,3,11,3,11,0,0,100,0,0,3,'W',0,0 },
{ "Double Axe",'N',0,"Weapon Axe",0x0020,0x0,0,'N',0x20786132,0,IDB_ITEM_DOUBLEAXE,1102,2,16,0xF,2,3,4,' ',24,43,0,0,1,5
,12,5,12,0,0,100,0,0,3,'W',0,0 },
{ "Berserker's Hatchet",'S',"Double Axe","Weapon Axe",0x0020,0x16,0,'S',0x20786132,0,IDB_ITEM_BERSERKERSHATCHET,20004,0,
0,0xF,2,3,4,' ',48,43,0,0,1,5,12,5,12,0,0,100,0,0,3,'W',0,0 },
{ "Bladebone",'U',"Double Axe","Weapon Axe",0x0020,0x04,0,'U',0x20786132,0,IDB_ITEM_DOUBLEAXE,1202,0,0,0xF,2,3,4,' ',120
,43,0,0,1,5,12,5,12,0,0,100,0,0,3,'W',0,0 },
{ "Military Pick",'N',0,"Weapon Axe",0x0030,0x0,0,'N',0x2069706D,0,IDB_ITEM_MILITARYPICK,1102,2,16,0xF,2,3,4,' ',26,49,3
3,0,1,6,10,6,10,0,0,100,0,0,3,'W',0,0 },
{ "Tancred's Crowbill",'S',"Military Pick","Weapon Axe",0x0030,0x10,0,'S',0x2069706D,0,IDB_ITEM_TANCREDSCROWBILL,20015,0
,0,0xF,2,3,4,' ',52,49,33,0,1,6,10,6,10,0,0,100,0,0,3,'W',0,0 },
{ "Mindrend",'U',"Military Pick","Weapon Axe",0x0030,0x06,0,'U',0x2069706D,0,IDB_ITEM_MINDREND,1202,0,0,0xF,2,3,4,' ',13
0,49,33,0,1,6,10,6,10,0,0,100,0,0,3,'W',0,0 },
{ "War Axe",'N',0,"Weapon Axe",0x0040,0x0,0,'N',0x20786177,0,IDB_ITEM_WARAXE,1102,2,16,0xB,2,3,4,' ',26,67,0,0,1,8,14,8,
14,0,0,100,0,0,3,'W',0,0 },
{ "Rakescar",'U',"War Axe","Weapon Axe",0x0040,0x08,0,'U',0x20786177,0,IDB_ITEM_RAKESCAR,1202,0,0,0xB,2,3,4,' ',130,67,0
,0,1,8,14,8,14,0,0,100,0,0,3,'W',0,0 },
{ "Large Axe",'N',0,"Weapon Axe",0x0050,0x0,0,'N',0x2078616C,0,IDB_ITEM_LARGEAXE,1102,2,16,0xB,2,3,4,' ',30,85,0,0,2,6,1
3,6,13,0,0,100,0,0,3,'W',0,0 },
{ "Axe of Fechmar",'U',"Large Axe","Weapon Axe",0x0050,0x0A,0,'U',0x2078616C,0,IDB_ITEM_FECHMARSAXE,1202,0,0,0xB,2,3,4,'
 ',150,85,0,0,2,6,13,6,13,0,0,100,0,0,3,'W',0,0 },
{ "Broad Axe",'N',0,"Weapon Axe",0x0060,0x0,0,'N',0x20786162,0,IDB_ITEM_BROADAXE,1102,2,16,0xB,2,3,4,' ',35,48,0,0,2,9,1
7,10,18,0,0,100,0,0,3,'W',0,0 },
{ "Goreshovel",'U',"Broad Axe","Weapon Axe",0x0060,0x0C,0,'U',0x20786162,0,IDB_ITEM_GORESHOVEL,1202,0,0,0xB,2,3,4,' ',17
5,48,0,0,2,9,17,10,18,0,0,100,0,0,3,'W',0,0 },
{ "Battle Axe",'N',0,"Weapon Axe",0x0070,0x0,0,'N',0x20787462,0,IDB_ITEM_BATTLEAXE,1102,2,16,0xB,2,3,4,' ',40,54,0,0,2,1
0,28,12,28,0,0,100,0,0,3,'W',0,0 },
{ "The Chieftan",'U',"Battle Axe","Weapon Axe",0x0070,0x0E,0,'U',0x20787462,0,IDB_ITEM_THECHIEFTAN,1202,0,0,0xB,2,3,4,'
',200,54,0,0,2,10,28,12,28,0,0,100,0,0,3,'W',0,0 },
{ "Great Axe",'N',0,"Weapon Axe",0x0080,0x0,0,'N',0x20786167,0,IDB_ITEM_GREATAXE,1102,2,16,0xB,2,4,4,' ',50,63,39,0,2,6,
24,8,26,0,0,100,0,0,3,'W',0,0 },
{ "Brainhew",'U',"Great Axe","Weapon Axe",0x0080,0x10,0,'U',0x20786167,0,IDB_ITEM_BRAINHEW,1202,0,0,0xB,2,4,4,' ',250,63
,39,0,2,6,24,8,26,0,0,100,0,0,3,'W',0,0 },
{ "Giant Axe",'N',0,"Weapon Axe",0x0090,0x0,0,'N',0x20786967,0,IDB_ITEM_GIANTAXE,1102,2,16,0xB,2,3,4,' ',50,70,0,0,2,26,
38,26,38,0,0,100,0,0,3,'W',0,0 },
{ "The Humongous",'U',"Giant Axe","Weapon Axe",0x0090,0x12,0,'U',0x20786967,0,IDB_ITEM_THEHUMONGOUS,1202,0,0,0xB,2,3,4,'
 ',250,84,0,0,2,26,38,26,38,0,0,100,0,0,3,'W',0,0 },
{ "Wand",'N',0,"Weapon Wand",0x00A0,0x0,0,'N',0x20646E77,0,IDB_ITEM_WAND,1111,32,256,0xB,1,2,4,'N',15,0,0,0,1,2,4,2,4,0,
0,100,0,0,0,' ',0,0 },
{ "Iro's Torch",'U',"Wand","Weapon Wand",0x00A0,0x14,0,'U',0x20646E77,0,IDB_ITEM_IROSTORCH,1209,0,0,0xB,1,2,4,' ',75,0,0
,0,1,2,4,2,4,0,0,100,0,0,0,' ',0,0 },
{ "Yew Wand",'N',0,"Weapon Wand",0x00B0,0x0,0,'N',0x206E7779,0,IDB_ITEM_YEWWAND,1111,32,256,0xB,1,2,4,'N',15,0,0,0,1,2,8
,2,8,0,0,100,0,0,0,' ',0,0 },
{ "Maelstromwrath",'U',"Yew Wand","Weapon Wand",0x00B0,0x16,0,'U',0x206E7779,0,IDB_ITEM_MAELSTROMWRATH,1209,0,0,0xB,1,2,
4,' ',75,0,0,0,1,2,8,2,8,0,0,100,0,0,0,' ',0,0 },
{ "Bone Wand",'N',0,"Weapon Wand",0x00C0,0x0,0,'N',0x206E7762,0,IDB_ITEM_BONEWAND,1111,32,256,0xB,1,2,4,'N',15,0,0,0,1,3
,7,3,7,0,0,100,0,0,0,' ',0,0 },
{ "Gravenspine",'U',"Bone Wand","Weapon Wand",0x00C0,0x18,0,'U',0x206E7762,0,IDB_ITEM_GRAVENSPINE,1209,0,0,0xB,1,2,4,' '
,75,0,0,0,1,3,7,3,7,0,0,100,0,0,0,' ',0,0 },
{ "Grim Wand",'N',0,"Weapon Wand",0x00D0,0x0,0,'N',0x206E7767,0,IDB_ITEM_GRIMWAND,1111,32,256,0xF,1,2,4,'N',15,0,0,0,1,5
,11,5,11,0,0,100,0,0,0,' ',0,0 },
{ "Infernal Torch",'S',"Grim Wand","Weapon Wand",0x00D0,0x14,0,'S',0x206E7767,0,IDB_ITEM_INFERNALTORCH,20010,0,0,0xF,1,2
,4,' ',30,0,0,0,1,5,11,5,11,0,0,100,0,0,0,' ',0,0 },
{ "Ume's Lament",'U',"Grim Wand","Weapon Wand",0x00D0,0x1A,0,'U',0x206E7767,0,IDB_ITEM_UMESLAMENT,1209,0,0,0xF,1,2,4,' '
,75,0,0,0,1,5,11,5,11,0,0,100,0,0,0,' ',0,0 },
{ "Club",'N',0,"Weapon Mace",0x00E0,0x0,0,'N',0x20626C63,0,IDB_ITEM_CLUB,1103,2,32,0xB,1,3,4,' ',24,0,0,0,1,1,6,1,6,0,0,
150,0,0,2,'W',0,0 },
{ "Felloak",'U',"Club","Weapon Mace",0x00E0,0x1C,0,'U',0x20626C63,0,IDB_ITEM_FELLOAK,1203,0,0,0xB,1,3,4,' ',120,0,0,0,1,
1,6,1,6,0,0,150,0,0,2,'W',0,0 },
{ "Scepter",'N',0,"Weapon Scepter",0x00F0,0x0,0,'N',0x20706373,0,IDB_ITEM_SCEPTER,1112,16,128,0xB,1,3,4,'P',50,25,0,0,1,
5,8,5,8,0,0,150,0,0,2,'W',0,0 },
{ "Knell Striker",'U',"Scepter","Weapon Scepter",0x00F0,0x1E,0,'U',0x20706373,0,IDB_ITEM_KNELLSTRIKER,1210,0,0,0xB,1,3,4
,' ',250,25,0,0,1,5,8,5,8,0,0,150,0,0,2,'W',0,0 },
{ "Grand Scepter",'N',0,"Weapon Scepter",0x0100,0x0,0,'N',0x20637367,0,IDB_ITEM_GRANDSCEPTER,1112,16,128,0xF,1,3,4,'P',6
0,37,0,0,1,6,11,6,11,0,0,150,0,0,2,'W',0,0 },
	{ "Civerb's Cudgel",'S',"Grand Scepter","Weapon Scepter",0x0100,0x00,0,'S',0x20637367,0,IDB_ITEM_CIVERBSCUDGEL,20006,0,0
	,0xF,1,3,4,' ',120,37,0,0,1,6,11,6,11,0,0,150,0,0,2,'W',0,0 },
	{ "Rusthandle",'U',"Grand Scepter","Weapon Scepter",0x0100,0x20,0,'U',0x20637367,0,IDB_ITEM_RUSTHANDLE,1210,0,0,0xF,1,3,
	4,' ',255,37,0,0,1,6,11,6,11,0,0,150,0,0,2,'W',0,0 },
	{ "War Scepter",'N',0,"Weapon Scepter",0x0110,0x0,0,'N',0x20707377,0,IDB_ITEM_WARSCEPTER,1112,16,128,0xF,2,3,4,'P',70,55
	,0,0,1,7,14,7,14,0,0,150,0,0,2,'W',0,0 },
	{ "Milabrega's Rod",'S',"War Scepter","Weapon Scepter",0x0110,0x0C,0,'S',0x20707377,0,IDB_ITEM_MILABREGASROD,20013,0,0,0
	xF,2,3,4,' ',140,55,0,0,1,7,14,7,14,0,0,150,0,0,2,'W',0,0 },
	{ "Stormeye",'U',"War Scepter","Weapon Scepter",0x0110,0x22,0,'U',0x20707377,0,IDB_ITEM_WARSCEPTER,1210,0,0,0xF,2,3,4,'
	',255,55,0,0,1,7,14,7,14,0,0,150,0,0,2,'W',0,0 },
	{ "Spiked Club",'N',0,"Weapon Mace",0x0120,0x0,0,'N',0x20637073,0,IDB_ITEM_SPIKEDCLUB,1103,2,32,0xB,1,3,4,' ',36,0,0,0,1
	,5,6,5,6,0,0,150,0,0,2,'W',0,0 },
	{ "Stoutnail",'U',"Spiked Club","Weapon Mace",0x0120,0x24,0,'U',0x20637073,0,IDB_ITEM_STOUTNAIL,1203,0,0,0xB,1,3,4,' ',1
	80,0,0,0,1,5,6,5,6,0,0,150,0,0,2,'W',0,0 },
	{ "Mace",'N',0,"Weapon Mace",0x0130,0x0,0,'N',0x2063616D,0,IDB_ITEM_MACE,1103,2,32,0xB,1,3,4,' ',60,27,0,0,1,3,10,3,10,0
	,0,150,0,0,2,'W',0,0 },
	{ "Crushflange",'U',"Mace","Weapon Mace",0x0130,0x26,0,'U',0x2063616D,0,IDB_ITEM_CRUSHFLANGE,1203,0,0,0xB,1,3,4,' ',255,
	27,0,0,1,3,10,3,10,0,0,150,0,0,2,'W',0,0 },
	{ "Morning Star",'N',0,"Weapon Mace",0x0140,0x0,0,'N',0x2074736D,0,IDB_ITEM_MORNINGSTAR,1103,2,32,0xB,1,3,4,' ',72,36,0,
	0,1,5,12,5,12,0,0,150,0,0,2,'W',0,0 },
	{ "Bloodrise",'U',"Morning Star","Weapon Mace",0x0140,0x28,0,'U',0x2074736D,0,IDB_ITEM_BLOODRISE,1203,0,0,0xB,1,3,4,' ',
	255,36,0,0,1,5,12,5,12,0,0,150,0,0,2,'W',0,0 },
	{ "Flail",'N',0,"Weapon Mace",0x0150,0x0,0,'N',0x20616C66,0,IDB_ITEM_FLAIL,1103,2,32,0xB,2,3,4,' ',30,41,35,0,1,1,15,1,1
	5,0,0,150,0,0,3,'W',0,0 },
	{ "The General's Tan Do Li Ga",'U',"Flail","Weapon Mace",0x0150,0x2A,0,'U',0x20616C66,0,IDB_ITEM_THEGENERALSTANDOLIGA,12
	03,0,0,0xB,2,3,4,' ',197,41,35,0,1,1,15,1,15,0,0,150,0,0,3,'W',0,0 },
	{ "War Hammer",'N',0,"Weapon Mace",0x0160,0x0,0,'N',0x206D6877,0,IDB_ITEM_WARHAMMER,1103,2,32,0xB,2,3,4,' ',55,53,0,0,1,
	11,20,11,20,0,0,150,0,0,3,'W',0,0 },
	{ "Ironstone",'U',"War Hammer","Weapon Mace",0x0160,0x2C,0,'U',0x206D6877,0,IDB_ITEM_IRONSTONE,1203,0,0,0xB,2,3,4,' ',25
	5,53,0,0,1,11,20,11,20,0,0,150,0,0,3,'W',0,0 },
	{ "Maul",'N',0,"Weapon Mace",0x0170,0x0,0,'N',0x2075616D,0,IDB_ITEM_MAUL,1103,2,32,0xB,2,4,4,' ',60,69,0,0,2,1,1,30,40,0
	,0,150,0,0,3,'W',0,0 },
	{ "Bonesnap",'U',"Maul","Weapon Mace",0x0170,0x2E,0,'U',0x2075616D,0,IDB_ITEM_BONESNAP,1203,0,0,0xB,2,4,4,' ',255,69,0,0
	,2,1,1,30,40,0,0,150,0,0,3,'W',0,0 },
	{ "Great Maul",'N',0,"Weapon Mace",0x0180,0x0,0,'N',0x20616D67,0,IDB_ITEM_GREATMAUL,1103,2,32,0xB,2,3,4,' ',60,99,0,0,2,
	1,1,35,55,0,0,150,0,0,3,'W',0,0 },
	{ "Steeldriver",'U',"Great Maul","Weapon Mace",0x0180,0x30,0,'U',0x20616D67,0,IDB_ITEM_STEELDRIVER,1203,0,0,0xB,2,3,4,'
	',255,50,0,0,2,1,1,35,55,0,0,150,0,0,3,'W',0,0 },
	{ "Short Sword",'N',0,"Weapon Sword",0x0190,0x0,0,'N',0x20647373,0,IDB_ITEM_SHORTSWORD,1101,2,8,0xB,1,3,4,' ',24,0,0,0,1
	,2,7,2,7,0,0,100,0,0,2,'W',0,0 },
	{ "Rixot's Keen",'U',"Short Sword","Weapon Sword",0x0190,0x32,0,'U',0x20647373,0,IDB_ITEM_RIXOTSKEEN,1201,0,0,0xB,1,3,4,
	' ',120,0,0,0,1,2,7,2,7,0,0,100,0,0,2,'W',0,0 },
	{ "Scimitar",'N',0,"Weapon Sword",0x01A0,0x0,0,'N',0x206D6373,0,IDB_ITEM_SCIMITAR,1101,2,8,0xB,1,3,4,' ',22,0,21,0,1,2,6
	,2,6,0,0,100,0,0,2,'W',0,0 },
	{ "Blood Crescent",'U',"Scimitar","Weapon Sword",0x01A0,0x34,0,'U',0x206D6373,0,IDB_ITEM_BLOODCRESCENT,1201,0,0,0xB,1,3,
	4,' ',110,0,21,0,1,2,6,2,6,0,0,100,0,0,2,'W',0,0 },
	{ "Sabre",'N',0,"Weapon Sword",0x01B0,0x0,0,'N',0x20726273,0,IDB_ITEM_SABRE,1101,2,8,0xF,1,3,4,' ',32,25,25,0,1,3,8,3,8,
	0,0,100,0,0,2,'W',0,0 },
	{ "Angelical Sickle",'S',"Sabre","Weapon Sword",0x01B0,0x1A,0,'S',0x20726273,0,IDB_ITEM_SABRE,20001,0,0,0xF,1,3,4,' ',64
	,25,25,0,1,3,8,3,8,0,0,100,0,0,2,'W',0,0 },
	{ "Krintizs Skewer",'U',"Sabre","Weapon Sword",0x01B0,0x36,0,'U',0x20726273,0,IDB_ITEM_KRINTIZSSKEWER,1201,0,0,0xF,1,3,4
	,' ',160,25,25,0,1,3,8,3,8,0,0,100,0,0,2,'W',0,0 },
	{ "Falchion",'N',0,"Weapon Sword",0x01C0,0x0,0,'N',0x20636C66,0,IDB_ITEM_FALCHION,1101,2,8,0xB,1,3,4,' ',32,33,0,0,1,7,1
	5,7,15,0,0,100,0,0,2,'W',0,0 },
	{ "Gleamscythe",'U',"Falchion","Weapon Sword",0x01C0,0x38,0,'U',0x20636C66,0,IDB_ITEM_GLEAMSCYTHE,1201,0,0,0xB,1,3,4,' '
	,160,33,0,0,1,7,15,7,15,0,0,100,0,0,2,'W',0,0 },
	{ "Crystal Sword",'N',0,"Weapon Sword",0x01D0,0x0,0,'N',0x20737263,0,IDB_ITEM_CRYSTALSWORD,1101,2,8,0xB,2,3,4,' ',10,43,
	0,0,1,5,15,5,15,0,0,100,0,0,3,'W',0,0 },
	{ "Azurewrath",'U',"Crystal Sword","Weapon Sword",0x01D0,0x3A,0,'U',0x20737263,0,IDB_ITEM_AZUREWRATH,1201,0,0,0xB,2,3,4,
	' ',50,43,0,0,1,5,15,5,15,0,0,100,0,0,3,'W',0,0 },
	{ "Broad Sword",'N',0,"Weapon Sword",0x01E0,0x0,0,'N',0x20647362,0,IDB_ITEM_BROADSWORD,1101,2,8,0xF,2,3,4,' ',32,48,0,0,
	1,7,14,7,14,0,0,100,0,0,3,'W',0,0 },
	{ "Isenhart's Lightbrand",'S',"Broad Sword","Weapon Sword",0x01E0,0x08,0,'S',0x20647362,0,IDB_ITEM_ISENHARTSLIGHTBRAND,2
	0012,0,0,0xF,2,3,4,' ',64,48,0,0,1,7,14,7,14,0,0,100,0,0,3,'W',0,0 },
	{ "Griswold's Edge",'U',"Broad Sword","Weapon Sword",0x01E0,0x3C,0,'U',0x20647362,0,IDB_ITEM_GRISWOLDSEDGE,1201,0,0,0xF,
	2,3,4,' ',160,48,0,0,1,7,14,7,14,0,0,100,0,0,3,'W',0,0 },
	{ "Long Sword",'N',0,"Weapon Sword",0x01F0,0x0,0,'N',0x2064736C,0,IDB_ITEM_LONGSWORD,1101,2,8,0xF,2,3,4,' ',44,55,39,0,1
	,3,19,3,19,0,0,100,0,0,3,'W',0,0 },
	{ "Cleglaw's Tooth",'S',"Long Sword","Weapon Sword",0x01F0,0x04,0,'S',0x2064736C,0,IDB_ITEM_CLEGLAWSTOOTH,20007,0,0,0xF,
	2,3,4,' ',88,55,39,0,1,3,19,3,19,0,0,100,0,0,3,'W',0,0 },
	{ "Hellplague",'U',"Long Sword","Weapon Sword",0x01F0,0x3E,0,'U',0x2064736C,0,IDB_ITEM_HELLPLAGUE,1201,0,0,0xF,2,3,4,' '
	,220,55,39,0,1,3,19,3,19,0,0,100,0,0,3,'W',0,0 },
	{ "War Sword",'N',0,"Weapon Sword",0x0200,0x0,0,'N',0x20647377,0,IDB_ITEM_WARSWORD,1101,2,8,0xF,1,3,4,' ',44,71,45,0,1,8
	,20,8,20,0,0,100,0,0,2,'W',0,0 },
	{ "Death's Touch",'S',"War Sword","Weapon Sword",0x0200,0x18,0,'S',0x20647377,0,IDB_ITEM_DEATHSTOUCH,20008,0,0,0xF,1,3,4
	,' ',88,71,45,0,1,8,20,8,20,0,0,100,0,0,2,'W',0,0 },
	{ "Culwen's Point",'U',"War Sword","Weapon Sword",0x0200,0x40,0,'U',0x20647377,0,IDB_ITEM_WARSWORD,1201,0,0,0xF,1,3,4,'
	',220,71,45,0,1,8,20,8,20,0,0,100,0,0,2,'W',0,0 },
	{ "Two Handed Sword",'N',0,"Weapon Sword",0x0210,0x0,0,'N',0x20736832,0,IDB_ITEM_2HSWORD,1101,2,8,0xB,1,4,4,' ',44,35,27
	, 0, 2, 2, 9, 8, 17, 0, 0, 100, 0, 0, 3, 'W', 0, 0 },
		{ "Shadowfang",'U',"Two Handed Sword","Weapon Sword",0x0210,0x42,0,'U',0x20736832,0,IDB_ITEM_SHADOWFANG,1201,0,0,0xB,1,4
		,4,' ',220,35,27,0,2,2,9,8,17,0,0,100,0,0,3,'W',0,0 },
		{ "Claymore",'N',0,"Weapon Sword",0x0220,0x0,0,'N',0x206D6C63,0,IDB_ITEM_CLAYMORE,1101,2,8,0xB,1,4,4,' ',50,47,0,0,2,5,1
		2,13,30,0,0,100,0,0,3,'W',0,0 },
		{ "Soulflay",'U',"Claymore","Weapon Sword",0x0220,0x44,0,'U',0x206D6C63,0,IDB_ITEM_SOULFLAY,1201,0,0,0xB,1,4,4,' ',250,4
		7,0,0,2,5,12,13,30,0,0,100,0,0,3,'W',0,0 },
		{ "Giant Sword",'N',0,"Weapon Sword",0x0230,0x0,0,'N',0x20736967,0,IDB_ITEM_GIANTSWORD,1101,2,8,0xB,1,4,4,' ',50,56,34,0
		,2,3,16,9,28,0,0,100,0,0,3,'W',0,0 },
		{ "Kinemil's Awl",'U',"Giant Sword","Weapon Sword",0x0230,0x46,0,'U',0x20736967,0,IDB_ITEM_KINEMILSAWL,1201,0,0,0xB,1,4,
		4,' ',250,56,34,0,2,3,16,9,28,0,0,100,0,0,3,'W',0,0 },
		{ "Bastard Sword",'N',0,"Weapon Sword",0x0240,0x0,0,'N',0x20777362,0,IDB_ITEM_BASTARDSWORD,1101,2,8,0xB,1,4,4,' ',40,62,
		0,0,2,6,18,20,28,0,0,100,0,0,3,'W',0,0 },
		{ "Blacktongue",'U',"Bastard Sword","Weapon Sword",0x0240,0x48,0,'U',0x20777362,0,IDB_ITEM_BLACKTONGUE,1201,0,0,0xB,1,4,
		4,' ',200,62,0,0,2,6,18,20,28,0,0,100,0,0,3,'W',0,0 },
		{ "Flamberge",'N',0,"Weapon Sword",0x0250,0x0,0,'N',0x20626C66,0,IDB_ITEM_FLAMBERGE,1101,2,8,0xB,2,4,4,' ',50,70,49,0,2,
		9,15,13,26,0,0,100,0,0,3,'W',0,0 },
		{ "Ripsaw",'U',"Flamberge","Weapon Sword",0x0250,0x4A,0,'U',0x20626C66,0,IDB_ITEM_RIPSAW,1201,0,0,0xB,2,4,4,' ',250,70,4
		9,0,2,9,15,13,26,0,0,100,0,0,3,'W',0,0 },
		{ "Great Sword",'N',0,"Weapon Sword",0x0260,0x0,0,'N',0x20647367,0,IDB_ITEM_GREATSWORD,1101,2,8,0xB,2,4,4,' ',50,100,60,
		0,2,12,18,25,42,0,0,100,0,0,3,'W',0,0 },
		{ "The Patriarch",'U',"Great Sword","Weapon Sword",0x0260,0x4C,0,'U',0x20647367,0,IDB_ITEM_THEPATRIARCH,1201,0,0,0xB,2,4
		,4,' ',250,100,60,0,2,12,18,25,42,0,0,100,0,0,3,'W',0,0 },
		{ "Dagger",'N',0,"Weapon Dagger",0x0270,0x0,0,'N',0x20726764,0,IDB_ITEM_DAGGER,1107,2,8,0xB,1,2,4,' ',16,0,0,0,1,1,4,1,4
		,0,0,100,0,0,1,'W',0,0 },
		{ "Gull",'U',"Dagger","Weapon Dagger",0x0270,0x4E,0,'U',0x20726764,0,IDB_ITEM_DAGGER,1204,0,0,0xB,1,2,4,' ',120,0,0,0,1,
		1,4,1,4,0,0,100,0,0,1,'W',0,0 },
		{ "Dirk",'N',0,"Weapon Dagger",0x0280,0x0,0,'N',0x20726964,0,IDB_ITEM_DIRK,1107,2,8,0xB,1,2,4,' ',20,0,25,0,1,3,7,3,7,0,
		0,100,0,0,1,'W',0,0 },
		{ "The Diggler",'U',"Dirk","Weapon Dagger",0x0280,0x50,0,'U',0x20726964,0,IDB_ITEM_THEDIGGLER,1204,0,0,0xB,1,2,4,' ',100
		,0,25,0,1,3,7,3,7,0,0,100,0,0,1,'W',0,0 },
		{ "Kris",'N',0,"Weapon Dagger",0x0290,0x0,0,'N',0x2069726B,0,IDB_ITEM_KRIS,1107,2,8,0xB,1,3,4,' ',24,0,45,0,1,2,9,2,9,0,
		0,100,0,0,2,'W',0,0 },
		{ "The Jade Tan Do",'U',"Kris","Weapon Dagger",0x0290,0x52,0,'U',0x2069726B,0,IDB_ITEM_THEJADETANDO,1204,0,0,0xB,1,3,4,'
		 ',120,0,45,0,1,2,9,2,9,0,0,100,0,0,2,'W',0,0 },
		{ "Blade",'N',0,"Weapon Dagger",0x02A0,0x0,0,'N',0x20646C62,0,IDB_ITEM_BLADE,1107,2,8,0xB,1,3,4,' ',24,35,51,0,1,4,12,4,
		12,0,0,100,0,0,1,'W',0,0 },
		{ "Irice's Shard",'U',"Blade","Weapon Dagger",0x02A0,0x54,0,'U',0x20646C62,0,IDB_ITEM_IRICESSHARD,1204,0,0,0xB,1,3,4,' '
		,120,35,51,0,1,4,12,4,12,0,0,100,0,0,1,'W',0,0 },
		{ "Throwing Knife",'N',0,"Weapon Throwing",0x02B0,0x0,0,'N',0x20666B74,0,IDB_ITEM_THROWINGKNIFE,1108,0,0,0x1,1,2,4,' ',0
		,0,21,0,1,2,3,2,3,4,9,100,0,0,0,' ',75,0 },
		{ "Throwing Axe",'N',0,"Weapon Throwing",0x02C0,0x0,0,'N',0x20786174,0,IDB_ITEM_THROWINGAXE,1108,0,0,0x1,1,2,4,' ',0,0,5
		1,0,1,4,7,4,7,8,12,100,0,0,0,' ',32,0 },
		{ "Balanced Knife",'N',0,"Weapon Throwing",0x02D0,0x0,0,'N',0x20666B62,0,IDB_ITEM_BALANCEDKNIFE,1108,0,0,0x1,1,2,4,' ',0
		,0,40,0,1,1,8,1,8,6,11,100,0,0,0,' ',60,0 },
		{ "Balanced Axe",'N',0,"Weapon Throwing",0x02E0,0x0,0,'N',0x206C6162,0,IDB_ITEM_BALANCEDAXE,1108,0,0,0x1,2,3,4,' ',0,0,5
		7,0,1,5,10,5,10,12,15,100,0,0,0,' ',24,0 },
		{ "Javelin",'N',0,"Weapon Javelin",0x02F0,0x0,0,'N',0x2076616A,0,IDB_ITEM_JAVELIN,1104,0,0,0x1,1,3,4,'A',0,0,0,0,1,1,5,1
		,5,6,14,100,0,0,0,' ',60,0 },
		{ "Pilum",'N',0,"Weapon Javelin",0x0300,0x0,0,'N',0x206C6970,0,IDB_ITEM_PILUM,1104,0,0,0x1,1,3,4,'A',0,0,45,0,1,4,9,4,9,
		7,20,100,0,0,0,' ',50,0 },
		{ "Short Spear",'N',0,"Weapon Javelin",0x0310,0x0,0,'N',0x20707373,0,IDB_ITEM_SHORTSPEAR,1104,0,0,0x1,1,3,4,'A',0,40,40,
		0,1,2,13,2,13,14,25,100,0,0,0,' ',40,0 },
		{ "Glaive",'N',0,"Weapon Javelin",0x0320,0x0,0,'N',0x20766C67,0,IDB_ITEM_GLAIVE,1104,0,0,0x1,1,4,4,'A',0,52,35,0,1,5,17,
		5,17,2,10,100,0,0,0,' ',20,0 },
		{ "Throwing Spear",'N',0,"Weapon Javelin",0x0330,0x0,0,'N',0x20707374,0,IDB_ITEM_THROWINGSPEAR,1104,0,0,0x1,1,4,4,'A',0,
		0,65,0,1,5,15,5,15,8,28,100,0,0,0,' ',80,0 },
		{ "Spear",'N',0,"Weapon Spear",0x0340,0x0,0,'N',0x20727073,0,IDB_ITEM_SPEAR,1105,2,64,0xB,2,4,4,' ',30,0,0,0,2,3,15,3,15
		,0,0,100,0,0,3,'W',0,0 },
		{ "The Dragon Chang",'U',"Spear","Weapon Spear",0x0340,0x56,0,'U',0x20727073,0,IDB_ITEM_THEDRAGONCHANG,1205,0,0,0xB,2,4,
		4,' ',150,0,0,0,2,3,15,3,15,0,0,100,0,0,3,'W',0,0 },
		{ "Trident",'N',0,"Weapon Spear",0x0350,0x0,0,'N',0x20697274,0,IDB_ITEM_TRIDENT,1105,2,64,0xB,2,4,4,' ',35,38,0,0,2,9,15
		,9,15,0,0,100,0,0,3,'W',0,0 },
		{ "Razortine",'U',"Trident","Weapon Spear",0x0350,0x58,0,'U',0x20697274,0,IDB_ITEM_RAZORTINE,1205,0,0,0xB,2,4,4,' ',175,
		38,0,0,2,9,15,9,15,0,0,100,0,0,3,'W',0,0 },
		{ "Brandistock",'N',0,"Weapon Spear",0x0360,0x0,0,'N',0x206E7262,0,IDB_ITEM_BRANDISTOCK,1105,2,64,0xB,2,4,4,' ',28,40,50
		,0,2,7,17,7,17,0,0,100,0,0,3,'W',0,0 },
		{ "Bloodthief",'U',"Brandistock","Weapon Spear",0x0360,0x5A,0,'U',0x206E7262,0,IDB_ITEM_BLOODTHIEF,1205,0,0,0xB,2,4,4,'
		',140,40,50,0,2,7,17,7,17,0,0,100,0,0,3,'W',0,0 },
		{ "Spetum",'N',0,"Weapon Spear",0x0370,0x0,0,'N',0x20747073,0,IDB_ITEM_SPETUM,1105,2,64,0xB,2,4,4,' ',28,54,0,0,2,15,21,
		15,21,0,0,100,0,0,3,'W',0,0 },
		{ "Lance of Yaggai",'U',"Spetum","Weapon Spear",0x0370,0x5C,0,'U',0x20747073,0,IDB_ITEM_LANCEOFYAGGAI,1205,0,0,0xB,2,4,4
		,' ',140,54,0,0,2,15,21,15,21,0,0,100,0,0,3,'W',0,0 },
		{ "Pike",'N',0,"Weapon Spear",0x0380,0x0,0,'N',0x206B6970,0,IDB_ITEM_PIKE,1105,2,64,0xB,2,4,4,' ',25,60,45,0,2,14,63,14,
		63,0,0,100,0,0,3,'W',0,0 },
		{ "The Tannr Gorerod",'U',"Pike","Weapon Spear",0x0380,0x5E,0,'U',0x206B6970,0,IDB_ITEM_THETANNRGOREROD,1205,0,0,0xB,2,4
		,4,' ',125,60,45,0,2,14,63,14,63,0,0,100,0,0,3,'W',0,0 },
		{ "Bardiche",'N',0,"Weapon Polearm",0x0390,0x0,0,'N',0x20726162,0,IDB_ITEM_BARDICHE,1106,2,64,0xB,2,4,4,' ',50,40,0,0,2,
		1,25,1,25,0,0,100,0,0,3,'W',0,0 },
		{ "Dimoak's Hew",'U',"Bardiche","Weapon Polearm",0x0390,0x60,0,'U',0x20726162,0,IDB_ITEM_DIMOAKSHEW,1206,0,0,0xB,2,4,4,'
 ',250,40,0,0,2,1,25,1,25,0,0,100,0,0,3,'W',0,0 },
{ "Voulge",'N',0,"Weapon Polearm",0x03A0,0x0,0,'N',0x20756F76,0,IDB_ITEM_VOULGE,1106,2,64,0xB,2,4,4,' ',50,50,0,0,2,6,20
,6,20,0,0,100,0,0,3,'W',0,0 },
{ "Steelgoad",'U',"Voulge","Weapon Polearm",0x03A0,0x62,0,'U',0x20756F76,0,IDB_ITEM_STEELGOAD,1206,0,0,0xB,2,4,4,' ',250
,50,0,0,2,6,20,6,20,0,0,100,0,0,3,'W',0,0 },
{ "Scythe",'N',0,"Weapon Polearm",0x03B0,0x0,0,'N',0x20796373,0,IDB_ITEM_SCYTHE,1106,2,64,0xB,2,4,4,' ',65,47,41,0,2,8,2
0,8,20,0,0,100,0,0,3,'W',0,0 },
{ "Soul Harvest",'U',"Scythe","Weapon Polearm",0x03B0,0x64,0,'U',0x20796373,0,IDB_ITEM_SOULHARVEST,1206,0,0,0xB,2,4,4,'
',255,41,41,0,2,8,20,8,20,0,0,100,0,0,3,'W',0,0 },
{ "Pole Axe",'N',0,"Weapon Polearm",0x03C0,0x0,0,'N',0x20786170,0,IDB_ITEM_POLEAXE,1106,2,64,0xB,2,4,4,' ',65,62,0,0,2,1
8,30,18,30,0,0,100,0,0,3,'W',0,0 },
{ "The Battlebranch",'U',"Pole Axe","Weapon Polearm",0x03C0,0x66,0,'U',0x20786170,0,IDB_ITEM_THEBATTLEBRANCH,1206,0,0,0x
B,2,4,4,' ',255,62,0,0,2,18,30,18,30,0,0,100,0,0,3,'W',0,0 },
{ "Halberd",'N',0,"Weapon Polearm",0x03D0,0x0,0,'N',0x206C6168,0,IDB_ITEM_HALBERD,1106,2,64,0xB,2,4,4,' ',55,75,47,0,2,1
2,35,12,40,0,0,100,0,0,3,'W',0,0 },
{ "Woestave",'U',"Halberd","Weapon Polearm",0x03D0,0x68,0,'U',0x206C6168,0,IDB_ITEM_WOESTAVE,1206,0,0,0xB,2,4,4,' ',255,
75,47,0,2,12,35,12,40,0,0,100,0,0,3,'W',0,0 },
{ "War Scythe",'N',0,"Weapon Polearm",0x03E0,0x0,0,'N',0x20637377,0,IDB_ITEM_WARSCYTHE,1106,2,64,0xB,2,4,4,' ',55,80,80,
0,2,15,32,15,32,0,0,100,0,0,3,'W',0,0 },
{ "The Grim Reaper",'U',"War Scythe","Weapon Polearm",0x03E0,0x6A,0,'U',0x20637377,0,IDB_ITEM_WARSCYTHE,1206,0,0,0xB,2,4
,4,' ',255,80,80,0,2,15,32,15,32,0,0,100,0,0,3,'W',0,0 },
{ "Short Staff",'N',0,"Weapon Staff",0x03F0,0x0,0,'N',0x20747373,0,IDB_ITEM_SHORTSTAFF,1113,64,512,0xB,1,3,4,'S',20,0,0,
0,2,1,5,1,5,0,0,100,0,0,2,'W',0,0 },
{ "Bane Ash",'U',"Short Staff","Weapon Staff",0x03F0,0x6C,0,'U',0x20747373,0,IDB_ITEM_BANEASH,1211,0,0,0xB,1,3,4,' ',100
,0,0,0,2,1,5,1,5,0,0,100,0,0,2,'W',0,0 },
{ "Long Staff",'N',0,"Weapon Staff",0x0400,0x0,0,'N',0x2074736C,0,IDB_ITEM_LONGSTAFF,1113,64,512,0xB,1,4,4,'S',30,0,0,0,
2,2,8,2,8,0,0,100,0,0,3,'W',0,0 },
{ "Serpent Lord",'U',"Long Staff","Weapon Staff",0x0400,0x6E,0,'U',0x2074736C,0,IDB_ITEM_SERPENTLORD,1211,0,0,0xB,1,4,4,
' ',150,0,0,0,2,2,8,2,8,0,0,100,0,0,3,'W',0,0 },
{ "Gnarled Staff",'N',0,"Weapon Staff",0x0410,0x0,0,'N',0x20747363,0,IDB_ITEM_GNARLEDSTAFF,1113,64,512,0xB,1,4,4,'S',35,
0,0,0,2,4,12,4,12,0,0,100,0,0,3,'W',0,0 },
{ "Lazarus' Spire",'U',"Gnarled Staff","Weapon Staff",0x0410,0x70,0,'U',0x20747363,0,IDB_ITEM_LAZARUSSPIRE,1211,0,0,0xB,
1,4,4,' ',175,0,0,0,2,4,12,4,12,0,0,100,0,0,3,'W',0,0 },
{ "Battle Staff",'N',0,"Weapon Staff",0x0420,0x0,0,'N',0x20747362,0,IDB_ITEM_BATTLESTAFF,1113,64,512,0xF,1,4,4,'S',40,0,
0,0,2,6,13,6,13,0,0,100,0,0,3,'W',0,0 },
{ "Cathan's Rule",'S',"Battle Staff","Weapon Staff",0x0420,0x0E,0,'S',0x20747362,0,IDB_ITEM_CATHANSRULE,20005,0,0,0xF,1,
4,4,' ',80,0,0,0,2,6,13,6,13,0,0,100,0,0,3,'W',0,0 },
{ "The Salamander",'U',"Battle Staff","Weapon Staff",0x0420,0x72,0,'U',0x20747362,0,IDB_ITEM_THESALAMANDER,1211,0,0,0xF,
1,4,4,' ',200,0,0,0,2,6,13,6,13,0,0,100,0,0,3,'W',0,0 },
{ "War Staff",'N',0,"Weapon Staff",0x0430,0x0,0,'N',0x20747377,0,IDB_ITEM_WARSTAFF,1113,64,512,0xF,2,4,4,'S',50,0,0,0,2,
12,28,12,28,0,0,100,0,0,3,'W',0,0 },
{ "Arcanna's Deathwand",'S',"War Staff","Weapon Staff",0x0430,0x1E,0,'S',0x20747377,0,IDB_ITEM_ARCANNASDEATHWAND,20002,0
,0,0xF,2,4,4,' ',100,0,0,0,2,12,28,12,28,0,0,100,0,0,3,'W',0,0 },
{ "The Iron Lang Bong",'U',"War Staff","Weapon Staff",0x0430,0x74,0,'U',0x20747377,0,IDB_ITEM_THEIRONLANGBONG,1211,0,0,0
xF,2,4,4,' ',250,0,0,0,2,12,28,12,28,0,0,100,0,0,3,'W',0,0 },
{ "Short Bow",'N',0,"Weapon Bow",0x0440,0x0,0,'N',0x20776273,0,IDB_ITEM_SHORTBOW,1109,128,1024,0xB,2,3,4,' ',0,0,15,0,2,
1,4,1,4,1,4,100,0,0,3,'W',0,0 },
{ "Pluckeye",'U',"Short Bow","Weapon Bow",0x0440,0x76,0,'U',0x20776273,0,IDB_ITEM_PLUCKEYE,1207,0,0,0xB,2,3,4,' ',0,0,15
,0,2,1,4,1,4,1,4,100,0,0,3,'W',0,0 },
{ "Hunter's Bow",'N',0,"Weapon Bow",0x0450,0x0,0,'N',0x20776268,0,IDB_ITEM_HUNTERSBOW,1109,128,1024,0xB,2,3,4,' ',0,0,28
,0,2,2,7,2,7,2,6,100,0,0,3,'W',0,0 },
{ "Witherstring",'U',"Hunter's Bow","Weapon Bow",0x0450,0x78,0,'U',0x20776268,0,IDB_ITEM_WITHERSTRING,1207,0,0,0xB,2,3,4
,' ',0,0,28,0,2,2,7,2,7,2,6,100,0,0,3,'W',0,0 },
{ "Long Bow",'N',0,"Weapon Bow",0x0460,0x0,0,'N',0x2077626C,0,IDB_ITEM_LONGBOW,1109,128,1024,0xB,2,4,4,' ',0,22,19,0,2,3
,10,3,10,3,10,100,0,0,3,'W',0,0 },
{ "Raven's Claw",'U',"Long Bow","Weapon Bow",0x0460,0x7A,0,'U',0x2077626C,0,IDB_ITEM_RIMERAVEN,1207,0,0,0xB,2,4,4,' ',0,
22,19,0,2,3,10,3,10,3,10,100,0,0,3,'W',0,0 },
{ "Composite Bow",'N',0,"Weapon Bow",0x0470,0x0,0,'N',0x20776263,0,IDB_ITEM_COMPOSITEBOW,1109,128,1024,0xB,2,3,4,' ',0,2
5,35,0,2,4,8,4,8,4,8,100,0,0,3,'W',0,0 },
{ "Rogue's Bow",'U',"Composite Bow","Weapon Bow",0x0470,0x7C,0,'U',0x20776263,0,IDB_ITEM_PIERCERIB,1207,0,0,0xB,2,3,4,'
',0,25,35,0,2,4,8,4,8,4,8,100,0,0,3,'W',0,0 },
{ "Short Battle Bow",'N',0,"Weapon Bow",0x0480,0x0,0,'N',0x20626273,0,IDB_ITEM_SHORTBATTLEBOW,1109,128,1024,0xB,2,3,4,'
',0,30,40,0,2,5,11,5,11,5,11,100,0,0,3,'W',0,0 },
{ "Stormstrike",'U',"Short Battle Bow","Weapon Bow",0x0480,0x7E,0,'U',0x20626273,0,IDB_ITEM_PULLSPITE,1207,0,0,0xB,2,3,4
,' ',0,30,40,0,2,5,11,5,11,5,11,100,0,0,3,'W',0,0 },
{ "Long Battle Bow",'N',0,"Weapon Bow",0x0490,0x0,0,'N',0x2062626C,0,IDB_ITEM_LONGBATTLEBOW,1109,128,1024,0xF,2,4,4,' ',
0,40,50,0,2,3,18,3,18,3,18,100,0,0,3,'W',0,0 },
{ "Vidala's Barb",'S',"Long Battle Bow","Weapon Bow",0x0490,0x0A,0,'S',0x2062626C,0,IDB_ITEM_VIDALASBARB,20016,0,0,0xF,2
,4,4,' ',0,40,50,0,2,3,18,3,18,3,18,100,0,0,3,'W',0,0 },
{ "Wizendraw",'U',"Long Battle Bow","Weapon Bow",0x0490,0x80,0,'U',0x2062626C,0,IDB_ITEM_WIZENDRAW,1207,0,0,0xF,2,4,4,'
',0,40,50,0,2,3,18,3,18,3,18,100,0,0,3,'W',0,0 },
{ "Short War Bow",'N',0,"Weapon Bow",0x04A0,0x0,0,'N',0x20627773,0,IDB_ITEM_SHORTWARBOW,1109,128,1024,0xF,2,3,4,' ',0,35
,55,0,2,6,14,6,14,6,14,100,0,0,3,'W',0,0 },
{ "Arctic Horn",'S',"Short War Bow","Weapon Bow",0x04A0,0x1C,0,'S',0x20627773,0,IDB_ITEM_ARCTICHORN,20003,0,0,0xF,2,3,4,
' ',0,35,55,0,2,6,14,6,14,6,14,100,0,0,3,'W',0,0 },
{ "Hellclap",'U',"Short War Bow","Weapon Bow",0x04A0,0x82,0,'U',0x20627773,0,IDB_ITEM_HELLCLAP,1207,0,0,0xF,2,3,4,' ',0,
35,55,0,2,6,14,6,14,6,14,100,0,0,3,'W',0,0 },
{ "Long War Bow",'N',0,"Weapon Bow",0x04B0,0x0,0,'N',0x2062776C,0,IDB_ITEM_LONGWARBOW,1109,128,1024,0xB,2,4,4,' ',0,50,6
5,0,2,3,23,3,23,3,23,100,0,0,3,'W',0,0 },
			{ "Blastbark",'U',"Long War Bow","Weapon Bow",0x04B0,0x84,0,'U',0x2062776C,0,IDB_ITEM_BLASTBARK,1207,0,0,0xB,2,4,4,' ',0
			,50,65,0,2,3,23,3,23,3,23,100,0,0,3,'W',0,0 },
			{ "Light Crossbow",'N',0,"Weapon Crossbow",0x04C0,0x0,0,'N',0x2062786C,0,IDB_ITEM_LIGHTCROSSBOW,1110,128,1024,0xB,2,3,4,
			' ',0,21,27,0,2,6,9,6,9,6,9,100,0,0,3,'W',0,0 },
			{ "Leadcrow",'U',"Light Crossbow","Weapon Crossbow",0x04C0,0x86,0,'U',0x2062786C,0,IDB_ITEM_LEADCROW,1208,0,0,0xB,2,3,4,
			' ',0,21,27,0,2,6,9,6,9,6,9,100,0,0,3,'W',0,0 },
			{ "Crossbow",'N',0,"Weapon Crossbow",0x04D0,0x0,0,'N',0x2062786D,0,IDB_ITEM_CROSSBOW,1110,128,1024,0xB,2,3,4,' ',0,40,33
			,0,2,9,14,9,14,9,14,100,0,0,3,'W',0,0 },
			{ "Ichorsting",'U',"Crossbow","Weapon Crossbow",0x04D0,0x88,0,'U',0x2062786D,0,IDB_ITEM_ICHORSTING,1208,0,0,0xB,2,3,4,'
			',0,40,33,0,2,9,14,9,14,9,14,100,0,0,3,'W',0,0 },
			{ "Heavy Crossbow",'N',0,"Weapon Crossbow",0x04E0,0x0,0,'N',0x20627868,0,IDB_ITEM_HEAVYCROSSBOW,1110,128,1024,0xB,2,4,4,
			' ',0,60,40,0,2,12,20,12,20,12,20,100,0,0,3,'W',0,0 },
			{ "Hellcast",'U',"Heavy Crossbow","Weapon Crossbow",0x04E0,0x8A,0,'U',0x20627868,0,IDB_ITEM_HELLCAST,1208,0,0,0xB,2,4,4,
			' ',0,60,40,0,2,12,20,12,20,12,20,100,0,0,3,'W',0,0 },
			{ "Repeating Crossbow",'N',0,"Weapon Crossbow",0x04F0,0x0,0,'N',0x20627872,0,IDB_ITEM_REPEATINGCROSSBOW,1110,128,1024,0x
			B,2,3,4,' ',0,40,50,0,2,6,12,6,12,6,12,100,0,0,3,'W',0,0 },
			{ "Doomspittle",'U',"Repeating Crossbow","Weapon Crossbow",0x04F0,0x8C,0,'U',0x20627872,0,IDB_ITEM_DOOMSPITTLE,1208,0,0,
			0xB,2,3,4,' ',0,40,50,0,2,6,12,6,12,6,12,100,0,0,3,'W',0,0 },
			{ "Rancid Gas Potion",'N',0,"Potion Throwing",0x0500,0x0,0,'N',0x20737067,0,IDB_ITEM_RANCIDGAS,1400,0,0,0x1,1,1,-1,' ',0
			,0,0,0,0,0,1,0,1,0,0,100,0,0,0,' ',10,0 },
			{ "Oil Potion",'N',0,"Potion Throwing",0x0510,0x0,0,'N',0x2073706F,0,IDB_ITEM_OIL,1400,0,0,0x1,1,1,-1,' ',0,0,0,0,0,0,1,
			0,1,0,0,100,0,0,0,' ',10,0 },
			{ "Choking Gas Potion",'N',0,"Potion Throwing",0x0520,0x0,0,'N',0x206D7067,0,IDB_ITEM_CHOKINGGAS,1400,0,0,0x1,1,1,-1,' '
			,0,0,0,0,0,0,1,0,1,0,0,100,0,0,0,' ',10,0 },
			{ "Exploding Potion",'N',0,"Potion Throwing",0x0530,0x0,0,'N',0x206D706F,0,IDB_ITEM_EXPLODING,1400,0,0,0x1,1,1,-1,' ',0,
			0,0,0,0,0,1,0,1,0,0,100,0,0,0,' ',10,0 },
			{ "Strangling Gas Potion",'N',0,"Potion Throwing",0x0540,0x0,0,'N',0x206C7067,0,IDB_ITEM_STRANGLINGGAS,1400,0,0,0x1,1,1,
			-1,' ',0,0,0,0,0,0,1,0,1,0,0,100,0,0,0,' ',10,0 },
			{ "Fulminating Potion",'N',0,"Potion Throwing",0x0550,0x0,0,'N',0x206C706F,0,IDB_ITEM_FULM,1400,0,0,0x1,1,1,-1,' ',0,0,0
			,0,0,0,1,0,1,0,0,100,0,0,0,' ',10,0 },
			{ "Decoy Gidbinn",'Q',0,"Special Weapon",0x0560,0x0,0,'N',0x20333364,0,IDB_ITEM_DECOYGIDBINN,30003,2,8,0x3,1,2,4,' ',0,2
			0,15,0,1,1,2,1,2,0,0,100,0,0,0,' ',0,0 },
			{ "The Gidbinn",'Q',0,"Special Weapon",0x0570,0x0,0,'N',0x20333367,0,IDB_ITEM_THEGIDBINN,30003,2,8,0x3,1,2,4,' ',0,25,15
			,0,1,3,7,3,7,0,0,100,0,0,0,' ',0,0 },
			{ "Wirt's Leg",'Q',0,"Special Weapon",0x0580,0x0,0,'N',0x2067656C,0,IDB_ITEM_WIRTSLEG,30001,2,32,0x3,1,3,4,' ',0,0,0,0,1
			,2,8,2,8,0,0,150,0,0,2,' ',0,0 },
			{ "Horadric Malus",'Q',0,"Special Weapon",0x0590,0x0,0,'N',0x206D6468,0,IDB_ITEM_HORADRICMALUS,30001,2,8,0x3,1,2,4,' ',0
			,15,15,0,1,6,15,6,15,0,0,150,0,0,0,' ',0,0 },
			{ "Hellforge Hammer",'U',0,"Special Weapon",0x05A0,0xFC,0,'U',0x20686668,0,IDB_ITEM_HELLFORGEHAMMER,30004,2,16,0x8,2,3,4
			,' ',0,0,0,0,1,6,15,6,15,0,0,150,0,0,0,' ',0,0 },
			{ "Horadric Staff",'U',0,"Special Weapon",0x05B0,0xFA,0,'U',0x20747368,0,IDB_ITEM_HORADRICSTAFF,30002,64,512,0x8,1,4,4,'
			 ',250,40,30,0,2,12,20,12,20,0,0,100,0,0,0,' ',0,0 },
			{ "Shaft of the Horadric Staff",'U',0,"Special Weapon",0x05C0,0xF8,0,'U',0x2066736D,0,IDB_ITEM_SHAFTOFHORADRICSTAFF,3000
			2,64,512,0x8,1,3,4,' ',0,35,25,0,2,10,15,10,15,0,0,100,0,0,0,' ',0,0 },
			{ "Hatchet",'E',"Hand Axe","Weapon Axe",0x05D0,0x0,0,'N',0x20616839,0,IDB_ITEM_HANDAXE,1302,2,16,0x3,1,3,4,' ',28,25,25,
			0,1,10,21,10,22,0,0,100,0,0,2,'W',0,0 },
			{ "Cleaver",'E',"Axe","Weapon Axe",0x05E0,0x0,0,'N',0x20786139,0,IDB_ITEM_AXE,1302,2,16,0x3,2,3,4,' ',24,68,0,0,1,10,29,
			10,30,0,0,100,0,0,3,'W',0,0 },
			{ "Twin Axe",'E',"Double Axe","Weapon Axe",0x05F0,0x0,0,'N',0x20613239,0,IDB_ITEM_DOUBLEAXE,1302,2,16,0x3,2,3,4,' ',24,8
			5,0,0,1,13,30,13,32,0,0,100,0,0,3,'W',0,0 },
			{ "Crowbill",'E',"Military Pick","Weapon Axe",0x0600,0x0,0,'N',0x20706D39,0,IDB_ITEM_MILITARYPICK,1302,2,16,0x3,2,3,4,'
			',26,94,70,0,1,14,27,14,29,0,0,100,0,0,3,'W',0,0 },
			{ "Naga",'E',"War Axe","Weapon Axe",0x0610,0x0,0,'N',0x20617739,0,IDB_ITEM_WARAXE,1302,2,16,0x3,2,3,4,' ',26,121,0,0,1,1
			8,34,18,35,0,0,100,0,0,3,'W',0,0 },
			{ "Military Axe",'E',"Large Axe","Weapon Axe",0x0620,0x0,0,'N',0x20616C39,0,IDB_ITEM_LARGEAXE,1302,2,16,0x3,2,3,4,' ',30
			,73,0,0,2,14,32,14,34,0,0,100,0,0,3,'W',0,0 },
			{ "Bearded Axe",'E',"Broad Axe","Weapon Axe",0x0630,0x0,0,'N',0x20616239,0,IDB_ITEM_BROADAXE,1302,2,16,0x3,2,3,4,' ',35,
			92,0,0,2,19,38,21,42,0,0,100,0,0,3,'W',0,0 },
			{ "Tabar",'E',"Battle Axe","Weapon Axe",0x0640,0x0,0,'N',0x20746239,0,IDB_ITEM_BATTLEAXE,1302,2,16,0x3,2,3,4,' ',40,101,
			0,0,2,21,56,24,58,0,0,100,0,0,3,'W',0,0 },
			{ "Gothic Axe",'E',"Great Axe","Weapon Axe",0x0650,0x0,0,'N',0x20616739,0,IDB_ITEM_GREATAXE,1302,2,16,0x3,2,4,4,' ',50,1
			15,79,0,2,14,50,18,54,0,0,100,0,0,3,'W',0,0 },
			{ "Ancient Axe",'E',"Giant Axe","Weapon Axe",0x0660,0x0,0,'N',0x20696739,0,IDB_ITEM_GIANTAXE,1302,2,16,0x3,2,3,4,' ',50,
			125,0,0,2,46,72,46,74,0,0,100,0,0,3,'W',0,0 },
			{ "Burnt Wand",'E',"Wand","Weapon Wand",0x0670,0x0,0,'N',0x206E7739,0,IDB_ITEM_WAND,1311,32,256,0x3,1,2,4,'N',15,25,0,0,
			1,8,18,8,19,0,0,100,0,0,0,' ',0,0 },
			{ "Petrified Wand",'E',"Yew Wand","Weapon Wand",0x0680,0x0,0,'N',0x20777939,0,IDB_ITEM_YEWWAND,1311,32,256,0x3,1,2,4,'N'
			,15,25,0,0,1,8,24,8,26,0,0,100,0,0,0,' ',0,0 },
			{ "Tomb Wand",'E',"Bone Wand","Weapon Wand",0x0690,0x0,0,'N',0x20776239,0,IDB_ITEM_BONEWAND,1311,32,256,0x3,1,2,4,'N',15
			,25,0,0,1,10,22,10,24,0,0,100,0,0,0,' ',0,0 },
			{ "Grave Wand",'E',"Grim Wand","Weapon Wand",0x06A0,0x0,0,'N',0x20776739,0,IDB_ITEM_GRIMWAND,1311,32,256,0x3,1,2,4,'N',1
			5,25,0,0,1,13,29,13,30,0,0,100,0,0,0,' ',0,0 },
			{ "Cudgel",'E',"Club","Weapon Mace",0x06B0,0x0,0,'N',0x206C6339,0,IDB_ITEM_CLUB,1303,2,32,0x3,1,3,4,' ',24,25,0,0,1,6,21
			,6,22,0,0,150,0,0,2,'W',0,0 },
			{ "Rune Scepter",'E',"Scepter","Weapon Scepter",0x06C0,0x0,0,'N',0x20637339,0,IDB_ITEM_SCEPTER,1312,16,128,0x3,1,3,4,'P'
			,50,58,0,0,1,13,24,13,26,0,0,150,0,0,2,'W',0,0 },
			{ "Holy Water Sprinkler",'E',"Grand Scepter","Weapon Scepter",0x06D0,0x0,0,'N',0x20737139,0,IDB_ITEM_GRANDSCEPTER,1312,1
			6,128,0x3,1,3,4,'P',60,76,25,0,1,14,29,14,30,0,0,150,0,0,2,'W',0,0 },
	{ "Divine Scepter",'E',"War Scepter","Weapon Scepter",0x06E0,0x0,0,'N',0x20737739,0,IDB_ITEM_WARSCEPTER,1312,16,128,0x3,
2,3,4,'P',70,103,0,0,1,16,34,10,24,0,0,150,0,0,2,'W',0,0 },
	{ "Barbed Club",'E',"Spiked Club","Weapon Mace",0x06F0,0x0,0,'N',0x20707339,0,IDB_ITEM_SPIKEDCLUB,1303,2,32,0x3,1,3,4,'
	',36,20,0,0,1,13,21,13,22,0,0,150,0,0,2,'W',0,0 },
	{ "Flanged Mace",'E',"Mace","Weapon Mace",0x0700,0x0,0,'N',0x20616D39,0,IDB_ITEM_MACE,1303,2,32,0x3,1,3,4,' ',60,61,0,0,
	1,10,27,10,29,0,0,150,0,0,2,'W',0,0 },
	{ "Jagged Star",'E',"Morning Star","Weapon Mace",0x0710,0x0,0,'N',0x20746D39,0,IDB_ITEM_MORNINGSTAR,1303,2,32,0x3,1,3,4,
	' ',72,74,0,0,1,13,30,13,32,0,0,150,0,0,2,'W',0,0 },
	{ "Knout",'E',"Flail","Weapon Mace",0x0720,0x0,0,'N',0x206C6639,0,IDB_ITEM_FLAIL,1303,2,32,0x3,2,3,4,' ',30,82,73,0,1,6,
	35,6,37,0,0,150,0,0,3,'W',0,0 },
	{ "Battle Hammer",'E',"War Hammer","Weapon Mace",0x0730,0x0,0,'N',0x20687739,0,IDB_ITEM_WARHAMMER,1303,2,32,0x3,2,3,4,'
	',55,100,0,0,1,22,43,22,45,0,0,150,0,0,3,'W',0,0 },
	{ "War Club",'E',"Maul","Weapon Mace",0x0740,0x0,0,'N',0x20396D39,0,IDB_ITEM_MAUL,1303,2,32,0x3,2,4,4,' ',60,124,25,0,2,
	6,13,53,77,0,0,150,0,0,3,'W',0,0 },
	{ "Martel De Fer",'E',"Great Maul","Weapon Mace",0x0750,0x0,0,'N',0x206D6739,0,IDB_ITEM_GREATMAUL,1303,2,32,0x3,2,3,4,'
	',60,169,0,0,2,6,13,61,101,0,0,150,0,0,3,'W',0,0 },
	{ "Gladius",'E',"Short Sword","Weapon Sword",0x0760,0x0,0,'N',0x20737339,0,IDB_ITEM_SHORTSWORD,1301,2,8,0x3,1,3,4,' ',24
	,25,0,0,1,8,22,8,24,0,0,100,0,0,2,'W',0,0 },
	{ "Cutlass",'E',"Scimitar","Weapon Sword",0x0770,0x0,0,'N',0x206D7339,0,IDB_ITEM_SCIMITAR,1301,2,8,0x3,1,3,4,' ',22,25,5
	2,0,1,8,21,8,22,0,0,100,0,0,2,'W',0,0 },
	{ "Shamshir",'E',"Sabre","Weapon Sword",0x0780,0x0,0,'N',0x20627339,0,IDB_ITEM_SABRE,1301,2,8,0x3,1,3,4,' ',32,58,58,0,1
	,10,24,10,26,0,0,100,0,0,2,'W',0,0 },
	{ "Tulwar",'E',"Falchion","Weapon Sword",0x0790,0x0,0,'N',0x20636639,0,IDB_ITEM_FALCHION,1301,2,8,0x3,1,3,4,' ',32,70,0,
	0,1,16,35,16,37,0,0,100,0,0,2,'W',0,0 },
	{ "Dimensional Blade",'E',"Crystal Sword","Weapon Sword",0x07A0,0x0,0,'N',0x20726339,0,IDB_ITEM_CRYSTALSWORD,1301,2,8,0x
	3,2,3,4,' ',10,85,0,0,1,13,35,13,37,0,0,100,0,0,3,'W',0,0 },
	{ "Battle Sword",'E',"Broad Sword","Weapon Sword",0x07B0,0x0,0,'N',0x20736239,0,IDB_ITEM_BROADSWORD,1301,2,8,0x3,2,3,4,'
	 ',32,92,0,0,1,16,34,16,35,0,0,100,0,0,3,'W',0,0 },
	{ "Rune Sword",'E',"Long Sword","Weapon Sword",0x07C0,0x0,0,'N',0x20736C39,0,IDB_ITEM_LONGSWORD,1301,2,8,0x3,2,3,4,' ',4
	4,103,79,0,1,10,42,10,43,0,0,100,0,0,3,'W',0,0 },
	{ "Ancient Sword",'E',"War Sword","Weapon Sword",0x07D0,0x0,0,'N',0x20647739,0,IDB_ITEM_WARSWORD,1301,2,8,0x3,1,3,4,' ',
	44,127,88,0,1,18,43,18,45,0,0,100,0,0,2,'W',0,0 },
	{ "Espandon",'E',"Two Handed Sword","Weapon Sword",0x07E0,0x0,0,'N',0x20683239,0,IDB_ITEM_2HSWORD,1301,2,8,0x3,1,4,4,' '
	,44,73,61,0,2,8,26,18,40,0,0,100,0,0,3,'W',0,0 },
	{ "Dacian Falx",'E',"Claymore","Weapon Sword",0x07F0,0x0,0,'N',0x206D6339,0,IDB_ITEM_CLAYMORE,1301,2,8,0x3,1,4,4,' ',50,
	91,20,0,2,13,30,26,61,0,0,100,0,0,3,'W',0,0 },
	{ "Tusk Sword",'E',"Giant Sword","Weapon Sword",0x0800,0x0,0,'N',0x20736739,0,IDB_ITEM_GIANTSWORD,1301,2,8,0x3,1,4,4,' '
	,50,104,71,0,2,10,37,19,58,0,0,100,0,0,3,'W',0,0 },
	{ "Gothic Sword",'E',"Bastard Sword","Weapon Sword",0x0810,0x0,0,'N',0x20396239,0,IDB_ITEM_BASTARDSWORD,1301,2,8,0x3,1,4
	,4,' ',40,113,20,0,2,14,40,37,58,0,0,100,0,0,3,'W',0,0 },
	{ "Zweihander",'E',"Flamberge","Weapon Sword",0x0820,0x0,0,'N',0x20626639,0,IDB_ITEM_FLAMBERGE,1301,2,8,0x3,2,4,4,' ',50
	,125,94,0,2,19,35,26,54,0,0,100,0,0,3,'W',0,0 },
	{ "Executioner Sword",'E',"Great Sword","Weapon Sword",0x0830,0x0,0,'N',0x20646739,0,IDB_ITEM_GREATSWORD,1301,2,8,0x3,2,
	4,4,' ',50,170,110,0,2,24,40,45,80,0,0,100,0,0,3,'W',0,0 },
	{ "Poignard",'E',"Dagger","Weapon Dagger",0x0840,0x0,0,'N',0x20676439,0,IDB_ITEM_DAGGER,1307,2,8,0x3,1,2,4,' ',16,25,0,0
	,1,6,18,6,19,0,0,100,0,0,1,'W',0,0 },
	{ "Rondel",'E',"Dirk","Weapon Dagger",0x0850,0x0,0,'N',0x20696439,0,IDB_ITEM_DIRK,1307,2,8,0x3,1,2,4,' ',20,25,58,0,1,10
	,22,10,24,0,0,100,0,0,1,'W',0,0 },
	{ "Ciquedeas",'E',"Kris","Weapon Dagger",0x0860,0x0,0,'N',0x20726B39,0,IDB_ITEM_KRIS,1307,2,8,0x3,1,3,4,' ',24,25,88,0,1
	,8,26,8,27,0,0,100,0,0,2,'W',0,0 },
	{ "Stiletto",'E',"Blade","Weapon Dagger",0x0870,0x0,0,'N',0x206C6239,0,IDB_ITEM_BLADE,1307,2,8,0x3,1,3,4,' ',24,73,97,0,
	1,11,30,11,32,0,0,100,0,0,1,'W',0,0 },
	{ "Battle Dart",'E',"Throwing Knife","Weapon Throwing",0x0880,0x0,0,'N',0x206B7439,0,IDB_ITEM_THROWINGKNIFE,1308,0,0,0x1
	,1,2,4,' ',0,25,52,0,1,8,16,8,18,11,24,100,0,0,0,' ',75,0 },
	{ "Francisca",'E',"Throwing Axe","Weapon Throwing",0x0890,0x0,0,'N',0x20617439,0,IDB_ITEM_THROWINGAXE,1308,0,0,0x1,1,2,4
	,' ',0,25,97,0,1,11,22,11,24,18,29,100,0,0,0,' ',32,0 },
	{ "War Dart",'E',"Balanced Knife","Weapon Throwing",0x08A0,0x0,0,'N',0x206B6239,0,IDB_ITEM_BALANCEDKNIFE,1308,0,0,0x1,1,
	2,4,' ',0,25,80,0,1,6,24,13,26,14,27,100,0,0,0,' ',60,0 },
	{ "Hurlbat",'E',"Balanced Axe","Weapon Throwing",0x08B0,0x0,0,'N',0x20386239,0,IDB_ITEM_BALANCEDAXE,1308,0,0,0x1,2,3,4,'
	 ',0,25,106,0,1,13,27,13,29,24,34,100,0,0,0,' ',24,0 },
	{ "War Javelin",'E',"Javelin","Weapon Javelin",0x08C0,0x0,0,'N',0x20616A39,0,IDB_ITEM_JAVELIN,1304,0,0,0x1,1,3,4,'A',0,2
	5,25,0,1,6,19,6,21,14,32,100,0,0,0,' ',60,0 },
	{ "Great Pilum",'E',"Pilum","Weapon Javelin",0x08D0,0x0,0,'N',0x20697039,0,IDB_ITEM_PILUM,1304,0,0,0x1,1,3,4,'A',0,25,88
	,0,1,11,26,11,27,16,42,100,0,0,0,' ',50,0 },
	{ "Simbilan",'E',"Short Spear","Weapon Javelin",0x08E0,0x0,0,'N',0x20397339,0,IDB_ITEM_SHORTSPEAR,1304,0,0,0x1,1,3,4,'A'
	,0,80,80,0,1,8,32,8,34,27,50,100,0,0,0,' ',40,0 },
	{ "Spiculum",'E',"Glaive","Weapon Javelin",0x08F0,0x0,0,'N',0x206C6739,0,IDB_ITEM_GLAIVE,1304,0,0,0x1,1,4,4,'A',0,93,73,
	0,1,13,38,13,40,8,26,100,0,0,0,' ',20,0 },
	{ "Harpoon",'E',"Throwing Spear","Weapon Javelin",0x0900,0x0,0,'N',0x20737439,0,IDB_ITEM_THROWINGSPEAR,1304,0,0,0x1,1,4,
	4,'A',0,25,118,0,1,13,35,13,37,18,54,100,0,0,0,' ',80,0 },
	{ "War Spear",'E',"Spear","Weapon Spear",0x0910,0x0,0,'N',0x20727339,0,IDB_ITEM_SPEAR,1305,2,64,0x1,2,4,4,' ',30,0,0,0,2
	,10,35,10,37,0,0,100,0,0,3,'W',0,0 },
	{ "Fuscina",'E',"Trident","Weapon Spear",0x0920,0x0,0,'N',0x20727439,0,IDB_ITEM_TRIDENT,1305,2,64,0x3,2,4,4,' ',35,77,0,
	0,2,19,35,19,37,0,0,100,0,0,3,'W',0,0 },
	{ "War Fork",'E',"Brandistock","Weapon Spear",0x0930,0x0,0,'N',0x20726239,0,IDB_ITEM_BRANDISTOCK,1305,2,64,0x3,2,4,4,' '
	,28,80,95,0,2,16,38,16,40,0,0,100,0,0,3,'W',0,0 },
	{ "Yari",'E',"Spetum","Weapon Spear",0x0940,0x0,0,'N',0x20747339,0,IDB_ITEM_SPETUM,1305,2,64,0x3,2,4,4,' ',28,0,28,0,2,2
	9,45,29,46,0,0,100,0,0,3,'W',0,0 },
	{ "Lance",'E',"Pike","Weapon Spear",0x0950,0x0,0,'N',0x20397039,0,IDB_ITEM_PIKE,1305,2,64,0x3,2,4,4,' ',25,110,88,0,2,27
				,112,27,114,0,0,100,0,0,3,'W',0,0 },
		{ "Lochaber Axe",'E',"Bardiche","Weapon Polearm",0x0960,0x0,0,'N',0x20376239,0,IDB_ITEM_BARDICHE,1306,2,64,0x3,2,4,4,' '
		,50,80,0,0,2,6,51,6,56,0,0,100,0,0,3,'W',0,0 },
		{ "Bill",'E',"Voulge","Weapon Polearm",0x0970,0x0,0,'N',0x206F7639,0,IDB_ITEM_VOULGE,1306,2,64,0x3,2,4,4,' ',50,95,0,0,2
		,14,43,14,45,0,0,100,0,0,3,'W',0,0 },
		{ "Battle Scythe",'E',"Scythe","Weapon Polearm",0x0980,0x0,0,'N',0x20387339,0,IDB_ITEM_SCYTHE,1306,2,64,0x3,2,4,4,' ',65
		,82,82,0,2,18,43,18,45,0,0,100,0,0,3,'W',0,0 },
		{ "Partizan",'E',"Pole Axe","Weapon Polearm",0x0990,0x0,0,'N',0x20617039,0,IDB_ITEM_POLEAXE,1306,2,64,0x3,2,4,4,' ',65,1
		13,0,0,2,34,59,34,61,0,0,100,0,0,3,'W',0,0 },
		{ "Bec-De-Corbin",'E',"Halberd","Weapon Polearm",0x09A0,0x0,0,'N',0x20396839,0,IDB_ITEM_HALBERD,1306,2,64,0x3,2,4,4,' ',
		55,133,91,0,2,24,67,24,77,0,0,100,0,0,3,'W',0,0 },
		{ "Grim Scythe",'E',"War Scythe","Weapon Polearm",0x09B0,0x0,0,'N',0x20637739,0,IDB_ITEM_WARSCYTHE,1306,2,64,0x3,2,4,4,'
		 ',55,140,140,0,2,29,62,29,64,0,0,100,0,0,3,'W',0,0 },
		{ "Jo Staff",'E',"Short Staff","Weapon Staff",0x09C0,0x0,0,'N',0x20737338,0,IDB_ITEM_SHORTSTAFF,1313,64,512,0x3,1,3,4,'S
		',20,0,0,0,2,6,19,6,21,0,0,100,0,0,2,'W',0,0 },
		{ "Quarterstaff",'E',"Long Staff","Weapon Staff",0x09D0,0x0,0,'N',0x20736C38,0,IDB_ITEM_LONGSTAFF,1313,64,512,0x3,1,4,4,
		'S',30,0,0,0,2,8,24,8,26,0,0,100,0,0,3,'W',0,0 },
		{ "Cedar Staff",'E',"Gnarled Staff","Weapon Staff",0x09E0,0x0,0,'N',0x20736338,0,IDB_ITEM_GNARLEDSTAFF,1313,64,512,0x3,1
		,4,4,'S',35,0,0,0,2,11,30,11,32,0,0,100,0,0,3,'W',0,0 },
		{ "Gothic Staff",'E',"Battle Staff","Weapon Staff",0x09F0,0x0,0,'N',0x20736238,0,IDB_ITEM_BATTLESTAFF,1313,64,512,0x3,1,
		4,4,'S',40,0,0,0,2,14,32,14,34,0,0,100,0,0,3,'W',0,0 },
		{ "Rune Staff",'E',"War Staff","Weapon Staff",0x0A00,0x0,0,'N',0x20737738,0,IDB_ITEM_WARSTAFF,1313,64,512,0x3,2,4,4,'S',
		50,25,0,0,2,24,56,24,58,0,0,100,0,0,3,'W',0,0 },
		{ "Edge Bow",'E',"Short Bow","Weapon Bow",0x0A10,0x0,0,'N',0x20627338,0,IDB_ITEM_SHORTBOW,1309,128,1024,0x3,2,3,4,' ',0,
		25,43,0,2,6,18,6,19,6,19,100,0,0,3,'W',0,0 },
		{ "Razor Bow",'E',"Hunter's Bow","Weapon Bow",0x0A20,0x0,0,'N',0x20626838,0,IDB_ITEM_HUNTERSBOW,1309,128,1024,0x3,2,3,4,
		' ',0,0,62,0,2,8,22,8,22,8,21,100,0,0,3,'W',0,0 },
		{ "Cedar Bow",'E',"Long Bow","Weapon Bow",0x0A30,0x0,0,'N',0x20626C38,0,IDB_ITEM_LONGBOW,1309,128,1024,0x3,2,4,4,' ',0,5
		3,49,0,2,10,27,10,29,9,26,100,0,0,3,'W',0,0 },
		{ "Double Bow",'E',"Composite Bow","Weapon Bow",0x0A40,0x0,0,'N',0x20626338,0,IDB_ITEM_COMPOSITEBOW,1309,128,1024,0x3,2,
		3,4,' ',0,58,73,0,2,11,24,11,26,11,21,100,0,0,3,'W',0,0 },
		{ "Short Siege Bow",'E',"Short Battle Bow","Weapon Bow",0x0A50,0x0,0,'N',0x20387338,0,IDB_ITEM_SHORTBATTLEBOW,1309,128,1
		024,0x3,2,3,4,' ',0,65,80,0,2,13,29,13,30,12,26,100,0,0,3,'W',0,0 },
		{ "Long Siege Bow",'E',"Long Battle Bow","Weapon Bow",0x0A60,0x0,0,'N',0x20386C38,0,IDB_ITEM_LONGBATTLEBOW,1309,128,1024
		,0x3,2,4,4,' ',0,80,95,0,2,10,40,10,42,9,36,100,0,0,3,'W',0,0 },
		{ "Rune Bow",'E',"Short War Bow","Weapon Bow",0x0A70,0x0,0,'N',0x20777338,0,IDB_ITEM_SHORTWARBOW,1309,128,1024,0x3,2,3,4
		,' ',0,73,103,0,2,14,34,14,35,14,30,100,0,0,3,'W',0,0 },
		{ "Gothic Bow",'E',"Long War Bow","Weapon Bow",0x0A80,0x0,0,'N',0x20776C38,0,IDB_ITEM_LONGWARBOW,1309,128,1024,0x3,2,4,4
		,' ',0,95,118,0,2,10,48,10,50,9,44,100,0,0,3,'W',0,0 },
		{ "Arbalest",'E',"Repeating Crossbow","Weapon Crossbow",0x0A90,0x0,0,'N',0x20786C38,0,IDB_ITEM_LIGHTCROSSBOW,1310,128,10
		24,0x3,2,3,4,' ',0,80,95,0,2,14,26,14,27,14,23,100,0,0,3,'W',0,0 },
		{ "Siege Crossbow",'E',"Light Crossbow","Weapon Crossbow",0x0AA0,0x0,0,'N',0x20786D38,0,IDB_ITEM_CROSSBOW,1310,128,1024,
		0x3,2,3,4,' ',0,52,61,0,2,19,34,19,35,18,30,100,0,0,3,'W',0,0 },
		{ "Ballista",'E',"Crossbow","Weapon Crossbow",0x0AB0,0x0,0,'N',0x20786838,0,IDB_ITEM_HEAVYCROSSBOW,1310,128,1024,0x3,2,4
		,4,' ',0,80,70,0,2,24,43,24,45,23,39,100,0,0,3,'W',0,0 },
		{ "Chu-Ko-Nu",'E',"Heavy Crossbow","Weapon Crossbow",0x0AC0,0x0,0,'N',0x20787238,0,IDB_ITEM_REPEATINGCROSSBOW,1310,128,1
		024,0x3,2,3,4,' ',0,110,80,0,2,14,30,14,32,14,27,100,0,0,3,'W',0,0 },
		{ "Khalim's Flail",'Q',"KhalimFlail","Special Weapon",0x0AD0,0x0,0,'N',0x20316671,0,IDB_ITEM_KHALIMSFLAIL,30003,2,32,0x3
		,2,3,4,' ',0,35,25,0,2,1,15,1,15,0,0,150,0,0,0,' ',0,0 },
		{ "Khalim's Will",'Q',"SuperKhalimFlail","Special Weapon",0x0AE0,0x0,0,'N',0x20326671,0,IDB_ITEM_KHALIMSWILL,30003,2,32,
		0x3,2,3,4,' ',0,0,0,0,2,1,15,1,15,0,0,150,0,0,0,' ',0,0 },
		{ "Cap",'N',0,"Helm",0x0AF0,0x0,0,'N',0x20706163,0,IDB_ITEM_CAP,2100,1,2,0xF,2,2,1,' ',12,0,0,0,0,0,0,0,0,0,0,0,3,5,2,'H
		',0,0 },
		{ "Infernal Cranium",'S',"Cap","Helm",0x0AF0,0x14,0,'S',0x20706163,0,IDB_ITEM_INFERNALCRANIUM,20010,0,0,0xF,2,2,1,' ',24
		,0,0,0,0,0,0,0,0,0,0,0,3,5,2,'H',0,0 },
		{ "Biggin's Bonnet",'U',"Cap","Helm",0x0AF0,0x8E,0,'U',0x20706163,0,IDB_ITEM_WARBONET,2200,0,0,0xF,2,2,1,' ',60,0,0,0,0,
		0,0,0,0,0,0,0,3,5,2,'H',0,0 },
		{ "Skull Cap",'N',0,"Helm",0x0B00,0x0,0,'N',0x20706B73,0,IDB_ITEM_SKULLCAP,2100,1,2,0xF,2,2,1,' ',18,15,0,0,0,0,0,0,0,0,
		0,0,8,11,2,'H',0,0 },
		{ "Arcanna's Head",'S',"Skull Cap","Helm",0x0B00,0x1E,0,'S',0x20706B73,0,IDB_ITEM_ARCANNASHEAD,20002,0,0,0xF,2,2,1,' ',3
		6,35,0,0,0,0,0,0,0,0,0,0,8,11,2,'H',0,0 },
		{ "Tarnhelm",'U',"Skull Cap","Helm",0x0B00,0x90,0,'U',0x20706B73,0,IDB_ITEM_TARNHELM,2200,0,0,0xF,2,2,1,' ',90,15,0,0,0,
		0,0,0,0,0,0,0,8,11,2,'H',0,0 },
		{ "Helm",'N',0,"Helm",0x0B10,0x0,0,'N',0x206D6C68,0,IDB_ITEM_HELM,2100,1,2,0xF,2,2,1,' ',24,26,0,0,0,0,0,0,0,0,0,0,15,18
		,2,'H',0,0 },
		{ "Berserker's Headgear",'S',"Helm","Helm",0x0B10,0x16,0,'S',0x206D6C68,0,IDB_ITEM_BERSERKERSHEADGEAR,20004,0,0,0xF,2,2,
		1,' ',48,26,0,0,0,0,0,0,0,0,0,0,15,18,2,'H',0,0 },
		{ "Coif of Glory",'U',"Helm","Helm",0x0B10,0x92,0,'U',0x206D6C68,0,IDB_ITEM_COIFOFGLORY,2200,0,0,0xF,2,2,1,' ',120,26,0,
		0,0,0,0,0,0,0,0,0,15,18,2,'H',0,0 },
		{ "Full Helm",'N',0,"Helm",0x0B20,0x0,0,'N',0x206C6866,0,IDB_ITEM_FULLHELM,2100,1,2,0xF,2,2,1,' ',30,41,0,0,0,0,0,0,0,0,
		0,0,23,26,2,'H',0,0 },
		{ "Isenhart's Horns",'S',"Full Helm","Helm",0x0B20,0x08,0,'S',0x206C6866,0,IDB_ITEM_ISENHARTSHORNS,20012,0,0,0xF,2,2,1,'
		 ',60,41,0,0,0,0,0,0,0,0,0,0,23,26,2,'H',0,0 },
		{ "Duskdeep",'U',"Full Helm","Helm",0x0B20,0x94,0,'U',0x206C6866,0,IDB_ITEM_DUSKDEEP,2200,0,0,0xF,2,2,1,' ',150,41,0,0,0
		,0,0,0,0,0,0,0,23,26,2,'H',0,0 },
		{ "Great Helm",'N',0,"Helm",0x0B30,0x0,0,'N',0x206D6867,0,IDB_ITEM_GREATHELM,2100,1,2,0xF,2,2,1,' ',40,63,0,0,0,0,0,0,0,
		0,0,0,30,35,2,'H',0,0 },
		{ "Sigon's Visor",'S',"Great Helm","Helm",0x0B30,0x12,0,'S',0x206D6867,0,IDB_ITEM_SIGONSVISOR,20014,0,0,0xF,2,2,1,' ',80
		,63,0,0,0,0,0,0,0,0,0,0,30,35,2,'H',0,0 },
		{ "Howltusk",'U',"Great Helm","Helm",0x0B30,0x98,0,'U',0x206D6867,0,IDB_ITEM_HOWLTUSK,2200,0,0,0xF,2,2,1,' ',200,63,0,0,
0,0,0,0,0,0,0,0,30,35,2,'H',0,0 },
		{ "Crown",'N',0,"Helm",0x0B40,0x0,0,'N',0x206E7263,0,IDB_ITEM_CROWN,2100,1,2,0xF,2,2,1,' ',50,55,0,0,0,0,0,0,0,0,0,0,25,
		45,2,'H',0,0 },
		{ "Iratha's Coil",'S',"Crown","Helm",0x0B40,0x06,0x0070,'S',0x206E7263,0,IDB_ITEM_IRATHASCOIL,20011,0,0,0xF,2,2,1,' ',10
		0,55,0,0,0,0,0,0,0,0,0,0,25,45,2,'H',0,0 },
		{ "Milabrega's Diadem",'S',"Crown","Helm",0x0B40,0x0C,0xFF8F,'S',0x206E7263,0,IDB_ITEM_MILABREGASDIADEM,20013,0,0,0xF,2,
		2,1,' ',100,55,0,0,0,0,0,0,0,0,0,0,25,45,2,'H',0,0 },
		{ "Undead Crown",'U',"Crown","Helm",0x0B40,0x9A,0,'U',0x206E7263,0,IDB_ITEM_UNDEADCROWN,2200,0,0,0xF,2,2,1,' ',250,55,0,
		0,0,0,0,0,0,0,0,0,25,45,2,'H',0,0 },
		{ "Mask",'N',0,"Helm",0x0B50,0x0,0,'N',0x206B736D,0,IDB_ITEM_MASK,2100,1,2,0xF,2,2,1,' ',20,23,0,0,0,0,0,0,0,0,0,0,9,27,
		2,'H',0,0 },
		{ "Cathan's Visage",'S',"Mask","Helm",0x0B50,0x0E,0,'S',0x206B736D,0,IDB_ITEM_MASK,20005,0,0,0xF,2,2,1,' ',60,23,0,0,0,0
		,0,0,0,0,0,0,9,27,2,'H',0,0 },
		{ "The Face of Horror",'U',"Mask","Helm",0x0B50,0x9C,0,'U',0x206B736D,0,IDB_ITEM_MASK,2200,0,0,0xF,2,2,1,' ',100,23,0,0,
		0,0,0,0,0,0,0,0,9,27,2,'H',0,0 },
		{ "Quilted Armor",'N',0,"Armor",0x0B60,0x0,0,'N',0x20697571,0,IDB_ITEM_QUILTED,3100,1,1,0xF,2,3,3,' ',20,12,0,0,0,0,0,0,
		0,0,0,0,8,11,0,' ',0,0 },
		{ "Arctic Furs",'S',"Quilted Armor","Armor",0x0B60,0x1C,0,'S',0x20697571,0,IDB_ITEM_ARCTICFURS,20003,0,0,0xF,2,3,3,' ',4
		0,12,0,0,0,0,0,0,0,0,0,0,8,11,0,' ',0,0 },
		{ "Greyform",'U',"Quilted Armor","Armor",0x0B60,0x9E,0,'U',0x20697571,0,IDB_ITEM_GREYFORM,3200,0,0,0xF,2,3,3,' ',100,12,
		0,0,0,0,0,0,0,0,0,0,8,11,0,' ',0,0 },
		{ "Leather Armor",'N',0,"Armor",0x0B70,0x0,0,'N',0x2061656C,0,IDB_ITEM_LEATHER,3100,1,1,0xF,2,3,3,' ',24,15,0,0,0,0,0,0,
		0,0,0,0,14,17,0,' ',0,0 },
		{ "Vidala's Ambush",'S',"Leather Armor","Armor",0x0B70,0x0A,0,'S',0x2061656C,0,IDB_ITEM_VIDALASAMBUSH,20016,0,0,0xF,2,3,
		3,' ',48,15,0,0,0,0,0,0,0,0,0,0,14,17,0,' ',0,0 },
		{ "Blinkbat's Form",'U',"Leather Armor","Armor",0x0B70,0xA0,0,'U',0x2061656C,0,IDB_ITEM_BLINKBATSFORM,3200,0,0,0xF,2,3,3
		,' ',120,15,0,0,0,0,0,0,0,0,0,0,14,17,0,' ',0,0 },
		{ "Hard Leather Armor",'N',0,"Armor",0x0B80,0x0,0,'N',0x20616C68,0,IDB_ITEM_HARDLEATHER,3100,1,1,0xF,2,3,3,' ',28,20,0,0
		,0,0,0,0,0,0,0,0,21,24,0,' ',0,0 },
		{ "The Centurion",'U',"Hard Leather Armor","Armor",0x0B80,0xA2,0,'U',0x20616C68,0,IDB_ITEM_THECENTURION,3200,0,0,0xB,2,3
		,3,' ',100,20,0,0,0,0,0,0,0,0,0,0,21,24,0,' ',0,0 },
		{ "Studded Leather",'N',0,"Armor",0x0B90,0x0,0,'N',0x20757473,0,IDB_ITEM_STUDDEDLEATHER,3100,1,1,0xB,2,3,3,' ',32,27,0,0
		,0,0,0,0,0,0,0,0,32,35,0,' ',0,0 },
		{ "Twitchthroe",'U',"Studded Leather","Armor",0x0B90,0xA4,0,'U',0x20757473,0,IDB_ITEM_TWITCHTHROE,3200,0,0,0xF,2,3,3,' '
		,160,27,0,0,0,0,0,0,0,0,0,0,32,35,0,' ',0,0 },
		{ "Ring Mail",'N',0,"Armor",0x0BA0,0x0,0,'N',0x20676E72,0,IDB_ITEM_RINGMAIL,3100,1,1,0xF,2,3,3,' ',26,27,0,0,0,0,0,0,0,0
		,0,0,45,48,0,' ',0,0 },
		{ "Angelical Mantle",'S',"Ring Mail","Armor",0x0BA0,0x1A,0,'S',0x20676E72,0,IDB_ITEM_CHAINMAIL,20001,0,0,0xF,2,3,3,' ',1
		20,65,0,0,0,0,0,0,0,0,0,0,45,48,0,' ',0,0 },
		{ "Darkglow",'U',"Ring Mail","Armor",0x0BA0,0xA6,0,'U',0x20676E72,0,IDB_ITEM_DARKGLOW,3200,0,0,0xF,2,3,3,' ',130,36,0,0,
		0,0,0,0,0,0,0,0,45,48,0,' ',0,0 },
		{ "Scale Mail",'N',0,"Armor",0x0BB0,0x0,0,'N',0x206C6373,0,IDB_ITEM_SCALEMAIL,3100,1,1,0xF,2,3,3,' ',36,36,0,0,0,0,0,0,0
		,0,0,0,57,60,0,' ',0,0 },
		{ "Hawkmail",'U',"Scale Mail","Armor",0x0BB0,0xA8,0,'U',0x206C6373,0,IDB_ITEM_HAWKMAIL,3200,0,0,0xF,2,3,3,' ',180,44,0,0
		,0,0,0,0,0,0,0,0,57,60,0,' ',0,0 },
		{ "Chain Mail",'N',0,"Armor",0x0BC0,0x0,0,'N',0x206E6863,0,IDB_ITEM_CHAINMAIL,3100,1,1,0xF,2,3,3,' ',45,48,0,0,0,0,0,0,0
		,0,0,0,72,75,0,' ',0,0 },
		{ "Cathan's Mesh",'S',"Chain Mail","Armor",0x0BC0,0x0E,0,'S',0x206E6863,0,IDB_ITEM_CATHANSMESH,20005,0,0,0xF,2,3,3,' ',9
		0,24,0,0,0,0,0,0,0,0,0,0,72,75,0,' ',0,0 },
		{ "Sparking Mail",'U',"Chain Mail","Armor",0x0BC0,0xAA,0,'U',0x206E6863,0,IDB_ITEM_SPARKLINGMAIL,3200,0,0,0xF,2,3,3,' ',
		250,30,0,0,0,0,0,0,0,0,0,0,72,75,0,' ',0,0 },
		{ "Breast Plate",'N',0,"Armor",0x0BD0,0x0,0,'N',0x20737262,0,IDB_ITEM_BREASTPLATE,3100,1,1,0xF,2,3,3,' ',50,30,0,0,0,0,0
		,0,0,0,0,0,65,68,0,' ',0,0 },
		{ "Isenhart's Case",'S',"Breast Plate","Armor",0x0BD0,0x08,0,'S',0x20737262,0,IDB_ITEM_ISENHARTSCASE,20012,0,0,0xF,2,3,3
		,' ',100,30,0,0,0,0,0,0,0,0,0,0,65,68,0,' ',0,0 },
		{ "Venomsward",'U',"Breast Plate","Armor",0x0BD0,0xAC,0,'U',0x20737262,0,IDB_ITEM_VENOMSWARD,3200,0,0,0xF,2,3,3,' ',225,
		48,0,0,0,0,0,0,0,0,0,0,65,68,0,' ',0,0 },
		{ "Splint Mail",'N',0,"Armor",0x0BE0,0x0,0,'N',0x206C7073,0,IDB_ITEM_SPLINTMAIL,3100,1,1,0xF,2,3,3,' ',30,51,0,0,0,0,0,0
		,0,0,0,0,90,95,0,' ',0,0 },
		{ "Berserker's Hauberk",'S',"Splint Mail","Armor",0x0BE0,0x16,0,'S',0x206C7073,0,IDB_ITEM_BERSERKERSHAUBERK,20004,0,0,0x
		F,2,3,3,' ',60,51,0,0,0,0,0,0,0,0,0,0,90,95,0,' ',0,0 },
		{ "Iceblink",'U',"Splint Mail","Armor",0x0BE0,0xAE,0,'U',0x206C7073,0,IDB_ITEM_ICEBLINK,3200,0,0,0xF,2,3,3,' ',150,51,0,
		0,0,0,0,0,0,0,0,0,90,95,0,' ',0,0 },
		{ "Plate Mail",'N',0,"Armor",0x0BF0,0x0,0,'N',0x20746C70,0,IDB_ITEM_PLATEMAIL,3100,1,1,0xB,2,3,3,' ',60,65,0,0,0,0,0,0,0
		,0,0,0,108,116,0,' ',0,0 },
		{ "Boneflesh",'U',"Plate Mail","Armor",0x0BF0,0xB0,0,'U',0x20746C70,0,IDB_ITEM_BONEFLESH,3200,0,0,0xB,2,3,3,' ',255,65,0
		,0,0,0,0,0,0,0,0,0,108,116,0,' ',0,0 },
		{ "Field Plate",'N',0,"Armor",0x0C00,0x0,0,'N',0x20646C66,0,IDB_ITEM_FIELDPLATE,3100,1,1,0xB,2,3,3,' ',48,55,0,0,0,0,0,0
		,0,0,0,0,101,105,0,' ',0,0 },
		{ "Rockfleece",'U',"Field Plate","Armor",0x0C00,0xB2,0,'U',0x20646C66,0,IDB_ITEM_ROCKFLEECE,3200,0,0,0xB,2,3,3,' ',240,5
		0,0,0,0,0,0,0,0,0,0,0,101,105,0,' ',0,0 },
		{ "Gothic Plate",'N',0,"Armor",0x0C10,0x0,0,'N',0x20687467,0,IDB_ITEM_GOTHICPLATE,3100,1,1,0xF,2,3,3,' ',55,70,0,0,0,0,0
		,0,0,0,0,0,128,135,0,' ',0,0 },
		{ "Sigon's Shelter",'S',"Gothic Plate","Armor",0x0C10,0x12,0,'S',0x20687467,0,IDB_ITEM_SIGONSSHELTER,20014,0,0,0xF,2,3,3
		,' ',110,70,0,0,0,0,0,0,0,0,0,0,128,135,0,' ',0,0 },
		{ "Rattlecage",'U',"Gothic Plate","Armor",0x0C10,0xB4,0,'U',0x20687467,0,IDB_ITEM_RATTLECAGE,3200,0,0,0xF,2,3,3,' ',255,
		70,0,0,0,0,0,0,0,0,0,0,128,135,0,' ',0,0 },
		{ "Full Plate",'N',0,"Armor",0x0C20,0x0,0,'N',0x206C7566,0,IDB_ITEM_FULLPLATE,3100,1,1,0xF,2,3,3,' ',70,80,0,0,0,0,0,0,0
			,0,0,0,150,161,0,' ',0,0 },
			{ "Tancred's Spine",'S',"Full Plate","Armor",0x0C20,0x10,0,'S',0x206C7566,0,IDB_ITEM_TANCREDSSPINE,20015,0,0,0xF,2,3,3,'
			 ',140,80,0,0,0,0,0,0,0,0,0,0,150,161,0,' ',0,0 },
			{ "Goldskin",'U',"Full Plate","Armor",0x0C20,0xB6,0,'U',0x206C7566,0,IDB_ITEM_GOLDSKIN,3200,0,0,0xF,2,3,3,' ',255,80,0,0
			,0,0,0,0,0,0,0,0,150,161,0,' ',0,0 },
			{ "Ancient Armor",'N',0,"Armor",0x0C30,0x0,0,'N',0x20726161,0,IDB_ITEM_ANCIENTARMOR,3100,1,1,0xF,2,3,3,' ',60,100,0,0,0,
			0,0,0,0,0,0,0,218,233,0,' ',0,0 },
			{ "Milabrega's Robe",'S',"Ancient Armor","Armor",0x0C30,0x0C,0,'S',0x20726161,0,IDB_ITEM_MILABREGASROBE,20013,0,0,0xF,2,
			3,3,' ',120,100,0,0,0,0,0,0,0,0,0,0,218,233,0,' ',0,0 },
			{ "Victor's Silk",'U',"Ancient Armor","Armor",0x0C30,0xB8,0,'U',0x20726161,0,IDB_ITEM_VICTORSSILK,3200,0,0,0xF,2,3,3,' '
			,255,100,0,0,0,0,0,0,0,0,0,0,218,233,0,' ',0,0 },
			{ "Light Plate",'N',0,"Armor",0x0C40,0x0,0,'N',0x2070746C,0,IDB_ITEM_LIGHTPLATE,3100,1,1,0xF,2,3,3,' ',60,41,0,0,0,0,0,0
			,0,0,0,0,90,107,0,' ',0,0 },
			{ "Arcanna's Flesh",'S',"Light Plate","Armor",0x0C40,0x1E,0,'S',0x2070746C,0,IDB_ITEM_ARCANNASFLESH,20002,0,0,0xF,2,3,3,
			' ',120,41,0,0,0,0,0,0,0,0,0,0,90,107,0,' ',0,0 },
			{ "Heavenly Garb",'U',"Light Plate","Armor",0x0C40,0xBA,0,'U',0x2070746C,0,IDB_ITEM_HEAVENLYGARB,3200,0,0,0xF,2,3,3,' ',
			255,41,0,0,0,0,0,0,0,0,0,0,90,107,0,' ',0,0 },
			{ "Buckler",'N',0,"Shield",0x0C50,0x0,0,'N',0x20637562,0,IDB_ITEM_BUCKLER,4100,4,4,0xF,2,2,5,' ',12,12,0,0,0,0,0,0,0,0,0
			,0,4,6,1,'S',0,0 },
			{ "Hsarus' Iron Fist",'S',"Buckler","Shield",0x0C50,0x02,0,'S',0x20637562,0,IDB_ITEM_HSARUSIRONFIST,20009,0,0,0xF,2,2,5,
			' ',24,12,0,0,0,0,0,0,0,0,0,0,4,6,1,'S',0,0 },
			{ "Pelta Lunata",'U',"Buckler","Shield",0x0C50,0xBC,0,'U',0x20637562,0,IDB_ITEM_PELTALUNATA,4200,0,0,0xF,2,2,5,' ',60,12
			,0,0,0,0,0,0,0,0,0,0,4,6,1,'S',0,0 },
			{ "Small Shield",'N',0,"Shield",0x0C60,0x0,0,'N',0x206C6D73,0,IDB_ITEM_SMALLSHIELD,4100,4,4,0xF,2,2,5,' ',16,22,0,0,0,0,
			0,0,0,0,0,0,8,10,2,'S',0,0 },
			{ "Cleglaw's Claw",'S',"Small Shield","Shield",0x0C60,0x04,0,'S',0x206C6D73,0,IDB_ITEM_CLEGLAWSCLAW,20007,0,0,0xF,2,2,5,
			' ',32,22,0,0,0,0,0,0,0,0,0,0,8,10,2,'S',0,0 },
			{ "Umbral Disk",'U',"Small Shield","Shield",0x0C60,0xBE,0,'U',0x206C6D73,0,IDB_ITEM_UMBRALDISK,4200,0,0,0xF,2,2,5,' ',80
			,22,0,0,0,0,0,0,0,0,0,0,8,10,2,'S',0,0 },
			{ "Large Shield",'N',0,"Shield",0x0C70,0x0,0,'N',0x2067726C,0,IDB_ITEM_LARGESHIELD,4100,4,4,0xF,2,3,5,' ',24,34,0,0,0,0,
			0,0,0,0,0,0,12,14,3,'S',0,0 },
			{ "Civerb's Ward",'S',"Large Shield","Shield",0x0C70,0x00,0,'S',0x2067726C,0,IDB_ITEM_LARGESHIELD,20006,0,0,0xF,2,3,5,'
			',48,34,0,0,0,0,0,0,0,0,0,0,12,14,3,'S',0,0 },
			{ "Stormguild",'U',"Large Shield","Shield",0x0C70,0xC0,0,'U',0x2067726C,0,IDB_ITEM_STORMGUILD,4200,0,0,0xF,2,3,5,' ',120
			,34,0,0,0,0,0,0,0,0,0,0,12,14,3,'S',0,0 },
			{ "Kite Shield",'N',0,"Shield",0x0C80,0x0,0,'N',0x2074696B,0,IDB_ITEM_KITESHIELD,4100,4,4,0xF,2,3,5,' ',30,47,0,0,0,0,0,
			0,0,0,0,0,16,18,3,'S',0,0 },
			{ "Milabrega's Orb",'S',"Kite Shield","Shield",0x0C80,0x0C,0,'S',0x2074696B,0,IDB_ITEM_MILABREGASORB,20013,0,0,0xF,2,3,5
			,' ',60,47,0,0,0,0,0,0,0,0,0,0,16,18,3,'S',0,0 },
			{ "Steelclash",'U',"Kite Shield","Shield",0x0C80,0xC6,0,'U',0x2074696B,0,IDB_ITEM_STEELCLASH,4200,0,0,0xF,2,3,5,' ',150,
			47,0,0,0,0,0,0,0,0,0,0,16,18,3,'S',0,0 },
			{ "Tower Shield",'N',0,"Shield",0x0C90,0x0,0,'N',0x20776F74,0,IDB_ITEM_TOWERSHIELD,4100,4,4,0xF,2,3,5,' ',60,75,0,0,0,0,
			0,0,0,0,0,0,22,25,3,'S',0,0 },
			{ "Sigon's Guard",'S',"Tower Shield","Shield",0x0C90,0x12,0,'S',0x20776F74,0,IDB_ITEM_SIGONSGUARD,20014,0,0,0xF,2,3,5,'
			',120,75,0,0,0,0,0,0,0,0,0,0,22,25,3,'S',0,0 },
			{ "Bverrit Keep",'U',"Tower Shield","Shield",0x0C90,0xC8,0,'U',0x20776F74,0,IDB_ITEM_BVERRITKEEP,4200,0,0,0xF,2,3,5,' ',
			255,75,0,0,0,0,0,0,0,0,0,0,22,25,3,'S',0,0 },
			{ "Gothic Shield",'N',0,"Shield",0x0CA0,0x0,0,'N',0x20737467,0,IDB_ITEM_GOTHICSHIELD,4100,4,4,0xF,2,4,5,' ',40,60,0,0,0,
			0,0,0,0,0,0,0,30,35,3,'S',0,0 },
			{ "Isenhart's Parry",'S',"Gothic Shield","Shield",0x0CA0,0x08,0,'S',0x20737467,0,IDB_ITEM_ISENHARTSPARRY,20012,0,0,0xF,2
			,4,5,' ',80,60,0,0,0,0,0,0,0,0,0,0,30,35,3,'S',0,0 },
			{ "The Ward",'U',"Gothic Shield","Shield",0x0CA0,0xCA,0,'U',0x20737467,0,IDB_ITEM_THEWARD,4200,0,0,0xF,2,4,5,' ',200,60,
			0,0,0,0,0,0,0,0,0,0,30,35,3,'S',0,0 },
			{ "Leather Gloves",'N',0,"Gloves",0x0CB0,0x0,0,'N',0x206C676C,0,IDB_ITEM_LEATHERGLOVES,5100,512,4096,0xF,2,2,10,' ',12,0
			,0,0,0,0,0,0,0,0,0,0,2,3,0,' ',0,0 },
			{ "Death's Hand",'S',"Leather Gloves","Gloves",0x0CB0,0x18,0,'S',0x206C676C,0,IDB_ITEM_DEATHSHAND,20008,0,0,0xF,2,2,10,'
			 ',24,0,0,0,0,0,0,0,0,0,0,0,2,3,0,' ',0,0 },
			{ "The Hand of Broc",'U',"Leather Gloves","Gloves",0x0CB0,0xCC,0,'U',0x206C676C,0,IDB_ITEM_THEHANDOFBROC,5200,0,0,0xF,2,
			2,10,' ',60,0,0,0,0,0,0,0,0,0,0,0,2,3,0,' ',0,0 },
			{ "Heavy Gloves",'N',"Heavy Gloves","Gloves",0x0CC0,0x0,0,'N',0x206C6776,0,IDB_ITEM_HEAVYGLOVES,5100,512,4096,0xB,2,2,10
			,' ',14,0,0,0,0,0,0,0,0,0,0,0,5,6,0,' ',0,0 },
			{ "Bloodfist",'U',"Heavy Gloves","Gloves",0x0CC0,0xCE,0,'U',0x206C6776,0,IDB_ITEM_BLOODFIST,5200,0,0,0xB,2,2,10,' ',70,0
			,0,0,0,0,0,0,0,0,0,0,5,6,0,' ',0,0 },
			{ "Chain Gloves",'N',0,"Gloves",0x0CD0,0x0,0,'N',0x206C676D,0,IDB_ITEM_CHAINGLOVES,5100,512,4096,0xF,2,2,10,' ',16,25,0,
			0,0,0,0,0,0,0,0,0,8,9,0,' ',0,0 },
			{ "Cleglaw's Pincers",'S',"Chain Gloves","Gloves",0x0CD0,0x04,0,'S',0x206C676D,0,IDB_ITEM_CLEGLAWSPINCERS,20007,0,0,0xF,
			2,2,10,' ',32,25,0,0,0,0,0,0,0,0,0,0,8,9,0,' ',0,0 },
			{ "Chance Guards",'U',"Chain Gloves","Gloves",0x0CD0,0xD0,0,'U',0x206C676D,0,IDB_ITEM_CHANCEGUARDS,5200,0,0,0xF,2,2,10,'
			 ',80,25,0,0,0,0,0,0,0,0,0,0,8,9,0,' ',0,0 },
			{ "Light Gauntlets",'N',0,"Gloves",0x0CE0,0x0,0,'N',0x206C6774,0,IDB_ITEM_LIGHTGAUNTLETS,5100,512,4096,0xF,2,2,10,' ',18
			,45,0,0,0,0,0,0,0,0,0,0,9,11,0,' ',0,0 },
			{ "Iratha's Cuff",'S',"Light Gauntlets","Gloves",0x0CE0,0x06,0x7FF0,'S',0x206C6774,0,IDB_ITEM_IRATHASCUFF,20011,0,0,0xF,
			2,2,10,' ',36,45,0,0,0,0,0,0,0,0,0,0,9,11,0,' ',0,0 },
			{ "Arctic Mitts",'S',"Light Gauntlets","Gloves",0x0CE0,0x1C,0x800F,'S',0x206C6774,0,IDB_ITEM_ARCTICMITTS,20003,0,0,0xF,2
			,2,10,' ',36,45,0,0,0,0,0,0,0,0,0,0,9,11,0,' ',0,0 },
			{ "Magefist",'U',"Light Gauntlets","Gloves",0x0CE0,0xD2,0,'U',0x206C6774,0,IDB_ITEM_MAGEFIST,5200,0,0,0xF,2,2,10,' ',90,
			45,0,0,0,0,0,0,0,0,0,0,9,11,0,' ',0,0 },
			{ "Gauntlets",'N',0,"Gloves",0x0CF0,0x0,0,'N',0x206C6768,0,IDB_ITEM_GAUNTLETS,5100,512,4096,0xF,2,2,10,' ',24,60,0,0,0,0
			,0,0,0,0,0,0,12,15,0,' ',0,0 },
				{ "Sigon's Gage",'S',"Gauntlets","Gloves",0x0CF0,0x12,0,'S',0x206C6768,0,IDB_ITEM_SIGONSGAUNTLETS,20014,0,0,0xF,2,2,10,'
	 ',48,60,0,0,0,0,0,0,0,0,0,0,12,15,0,' ',0,0 },
	{ "Frostburn",'U',"Gauntlets","Gloves",0x0CF0,0xD4,0,'U',0x206C6768,0,IDB_ITEM_FROSTBURN,5200,0,0,0xF,2,2,10,' ',120,60,
	0,0,0,0,0,0,0,0,0,0,12,15,0,' ',0,0 },
	{ "Boots",'N',0,"Boots",0x0D00,0x0,0,'N',0x2074626C,0,IDB_ITEM_LEATHERBOOTS,6100,256,2048,0xF,2,2,9,' ',12,0,0,0,0,0,0,0
	,0,0,0,0,2,3,0,' ',0,0 },
	{ "Tancred's Hobnails",'S',"Boots","Boots",0x0D00,0x10,0,'S',0x2074626C,0,IDB_ITEM_TANCREDSHOBNAILS,20015,0,0,0xF,2,2,9,
	' ',24,24,0,0,0,0,0,0,0,0,0,0,2,3,0,' ',0,0 },
	{ "Hotspur",'U',"Boots","Boots",0x0D00,0xD6,0,'U',0x2074626C,0,IDB_ITEM_HOTSPUR,6200,0,0,0xF,2,2,9,' ',60,0,0,0,0,0,0,0,
	0,0,0,0,2,3,0,' ',0,0 },
	{ "Heavy Boots",'N',0,"Boots",0x0D10,0x0,0,'N',0x20746276,0,IDB_ITEM_HEAVYBOOTS,6100,256,2048,0xB,2,2,9,' ',14,18,0,0,0,
	0,0,0,0,0,0,0,5,6,0,' ',0,0 },
	{ "Gorefoot",'U',"Heavy Boots","Boots",0x0D10,0xD8,0,'U',0x20746276,0,IDB_ITEM_GOREFOOT,6200,0,0,0xB,2,2,9,' ',70,18,0,0
	,0,0,0,0,0,0,0,0,5,6,0,' ',0,0 },
	{ "Chain Boots",'N',0,"Boots",0x0D20,0x0,0,'N',0x2074626D,0,IDB_ITEM_CHAINBOOTS,6100,256,2048,0xF,2,2,9,' ',16,30,0,0,0,
	0,0,0,0,0,0,0,8,9,0,' ',0,0 },
	{ "Hsarus' Iron Heel",'S',"Chain Boots","Boots",0x0D20,0x02,0,'S',0x2074626D,0,IDB_ITEM_HSARUSIRONHEEL,20009,0,0,0xF,2,2
	,9,' ',32,30,0,0,0,0,0,0,0,0,0,0,8,9,0,' ',0,0 },
	{ "Treads of Cthon",'U',"Chain Boots","Boots",0x0D20,0xDA,0,'U',0x2074626D,0,IDB_ITEM_TREADSOFCTHON,6200,0,0,0xF,2,2,9,'
	 ',80,30,0,0,0,0,0,0,0,0,0,0,8,9,0,' ',0,0 },
	{ "Light Plate",'N',0,"Boots",0x0D30,0x0,0,'N',0x20746274,0,IDB_ITEM_LIGHTPLATEBOOTS,6100,256,2048,0xF,2,2,9,' ',18,50,0
	,0,0,0,0,0,0,0,0,0,9,11,0,' ',0,0 },
	{ "Vidala's Fetlock",'S',"Light Plate","Boots",0x0D30,0x0A,0,'S',0x20746274,0,IDB_ITEM_VIDALASFETLOCK,20016,0,0,0xF,2,2,
	9,' ',30,0,0,0,0,0,0,0,0,0,0,0,9,11,0,' ',0,0 },
	{ "Goblin Toe",'U',"Light Plate","Boots",0x0D30,0xDC,0,'U',0x20746274,0,IDB_ITEM_GOBLINTOE,6200,0,0,0xF,2,2,9,' ',90,50,
	0,0,0,0,0,0,0,0,0,0,9,11,0,' ',0,0 },
	{ "Greaves",'N',0,"Boots",0x0D40,0x0,0,'N',0x20746268,0,IDB_ITEM_PLATEBOOTS,6100,256,2048,0xF,2,2,9,' ',24,70,0,0,0,0,0,
	0,0,0,0,0,12,15,0,' ',0,0 },
	{ "Sigon's Sabot",'S',"Greaves","Boots",0x0D40,0x12,0,'S',0x20746268,0,IDB_ITEM_SIGONSGREAVES,20014,0,0,0xF,2,2,9,' ',48
	,70,0,0,0,0,0,0,0,0,0,0,12,15,0,' ',0,0 },
	{ "Tearhaunch",'U',"Greaves","Boots",0x0D40,0xDE,0,'U',0x20746268,0,IDB_ITEM_TEARHAUNCH,6200,0,0,0xF,2,2,9,' ',120,70,0,
	0,0,0,0,0,0,0,0,0,12,15,0,' ',0,0 },
	{ "Sash",'N',0,"Belt",0x0D50,0x0,0,'N',0x206C626C,0,IDB_ITEM_SASH,7100,1024,8192,0xF,2,1,8,' ',12,0,0,0,0,0,0,0,0,0,0,0,
	2,2,0,' ',0,0 },
	{ "Death's Guard",'S',"Sash","Belt",0x0D50,0x18,0,'S',0x206C626C,0,IDB_ITEM_DEATHSGUARD,20008,0,0,0xF,2,1,8,' ',24,0,0,0
	,0,0,0,0,0,0,0,0,2,2,0,' ',0,0 },
	{ "Lenymo",'U',"Sash","Belt",0x0D50,0xE0,0,'U',0x206C626C,0,IDB_ITEM_LENYMSCORD,7200,0,0,0xF,2,1,8,' ',60,0,0,0,0,0,0,0,
	0,0,0,0,2,2,0,' ',0,0 },
	{ "Light Belt",'N',0,"Belt",0x0D60,0x0,0,'N',0x206C6276,0,IDB_ITEM_LIGHTBELT,7100,1024,8192,0xF,2,1,8,' ',14,0,0,0,0,0,0
	,0,0,0,0,0,3,3,0,' ',0,0 },
	{ "Arctic Binding",'S',"Light Belt","Belt",0x0D60,0x1C,0,'S',0x206C6276,0,IDB_ITEM_ARCTICBINDING,20003,0,0,0xF,2,1,8,' '
	,28,0,0,0,0,0,0,0,0,0,0,0,3,3,0,' ',0,0 },
	{ "Snakecord",'U',"Light Belt","Belt",0x0D60,0xE2,0,'U',0x206C6276,0,IDB_ITEM_SNAKECORD,7200,0,0,0xF,2,1,8,' ',70,0,0,0,
	0,0,0,0,0,0,0,0,3,3,0,' ',0,0 },
	{ "Belt",'N',0,"Belt",0x0D70,0x0,0,'N',0x206C626D,0,IDB_ITEM_BELT,7100,1024,8192,0xF,2,1,8,' ',16,25,0,0,0,0,0,0,0,0,0,0
	,5,5,0,' ',0,0 },
	{ "Hsarus' Iron Stay",'S',"Belt","Belt",0x0D70,0x02,0,'S',0x206C626D,0,IDB_ITEM_HSARUSIRONSTAY,20009,0,0,0xF,2,1,8,' ',3
	2,25,0,0,0,0,0,0,0,0,0,0,5,5,0,' ',0,0 },
	{ "Nightsmoke",'U',"Belt","Belt",0x0D70,0xE4,0,'U',0x206C626D,0,IDB_ITEM_NIGHTSMOKE,7200,0,0,0xF,2,1,8,' ',80,25,0,0,0,0
	,0,0,0,0,0,0,5,5,0,' ',0,0 },
	{ "Heavy Belt",'N',0,"Belt",0x0D80,0x0,0,'N',0x206C6274,0,IDB_ITEM_HEAVYBELT,7100,1024,8192,0xF,2,1,8,' ',18,45,0,0,0,0,
	0,0,0,0,0,0,6,6,0,' ',0,0 },
	{ "Iratha's Cord",'S',"Heavy Belt","Belt",0x0D80,0x06,0x07F0,'S',0x206C6274,0,IDB_ITEM_IRATHASCORD,20011,0,0,0xF,2,1,8,'
	 ',36,45,0,0,0,0,0,0,0,0,0,0,6,6,0,' ',0,0 },
	{ "Infernal Buckle",'S',"Heavy Belt","Belt",0x0D80,0x14,0xF80F,'S',0x206C6274,0,IDB_ITEM_INFERNALBUCKLE,20010,0,0,0xF,2,
	1,8,' ',36,45,0,0,0,0,0,0,0,0,0,0,6,6,0,' ',0,0 },
	{ "Goldwrap",'U',"Heavy Belt","Belt",0x0D80,0xE6,0,'U',0x206C6274,0,IDB_ITEM_GOLDWRAP,7200,0,0,0xF,2,1,8,' ',90,45,0,0,0
	,0,0,0,0,0,0,0,6,6,0,' ',0,0 },
	{ "Plated Belt",'N',0,"Belt",0x0D90,0x0,0,'N',0x206C6268,0,IDB_ITEM_GIRDLE,7100,1024,8192,0xF,2,1,8,' ',24,60,0,0,0,0,0,
	0,0,0,0,0,8,11,0,' ',0,0 },
	{ "Sigon's Wrap",'S',"Plated Belt","Belt",0x0D90,0x12,0,'S',0x206C6268,0,IDB_ITEM_SIGONSWRAP,20014,0,0,0xF,2,1,8,' ',48,
	60,0,0,0,0,0,0,0,0,0,0,8,11,0,' ',0,0 },
	{ "Bladebuckle",'U',"Plated Belt","Belt",0x0D90,0xE8,0,'U',0x206C6268,0,IDB_ITEM_BLADEBUCKLE,7200,0,0,0xF,2,1,8,' ',120,
	60,0,0,0,0,0,0,0,0,0,0,8,11,0,' ',0,0 },
	{ "Bone Helm",'N',0,"Helm",0x0DA0,0x0,0,'N',0x206D6862,0,IDB_ITEM_BONEHELM,2100,1,2,0xF,2,2,1,' ',40,25,0,0,0,0,0,0,0,0,
	0,0,33,36,0,' ',0,0 },
	{ "Tancred's Skull",'S',"Bone Helm","Helm",0x0DA0,0x10,0,'S',0x206D6862,0,IDB_ITEM_TANCREDSSKULL,20015,0,0,0xF,2,2,1,' '
	,80,25,0,0,0,0,0,0,0,0,0,0,33,36,0,' ',0,0 },
	{ "Wormskull",'U',"Bone Helm","Helm",0x0DA0,0x96,0,'U',0x206D6862,0,IDB_ITEM_WORMSKULL,2200,0,0,0xF,2,2,1,' ',200,25,0,0
	,0,0,0,0,0,0,0,0,33,36,0,' ',0,0 },
	{ "Bone Shield",'N',0,"Shield",0x0DB0,0x0,0,'N',0x20687362,0,IDB_ITEM_BONESHIELD,4100,4,4,0xB,2,3,5,' ',40,25,0,0,0,0,0,
	0,0,0,0,0,10,30,0,' ',0,0 },
	{ "Wall of the Eyeless",'U',"Bone Shield","Shield",0x0DB0,0xC2,0,'U',0x20687362,0,IDB_ITEM_WALLOFTHEEYELESS,4200,0,0,0xB
	,2,3,5,' ',200,25,0,0,0,0,0,0,0,0,0,0,10,30,0,' ',0,0 },
	{ "Spiked Shield",'N',0,"Shield",0x0DC0,0x0,0,'N',0x206B7073,0,IDB_ITEM_SPIKEDSHIELD,4100,4,4,0xB,2,3,5,' ',40,30,0,0,0,
	0,0,0,0,0,0,0,15,25,0,' ',0,0 },
	{ "Swordback Hold",'U',"Spiked Shield","Shield",0x0DC0,0xC4,0,'U',0x206B7073,0,IDB_ITEM_SWORDBACKHOLD,4200,0,0,0xB,2,3,5
	,' ',200,30,0,0,0,0,0,0,0,0,0,0,15,25,0,' ',0,0 },
	{ "War Hat",'E',"Cap","Helm",0x0DD0,0x0,0,'N',0x20706178,0,IDB_ITEM_CAP,2300,1,2,0x3,2,2,1,' ',12,20,0,0,0,0,0,0,0,0,0,0
				,45,53,2,'H',0,0 },
				{ "Sallet",'E',"Skull Cap","Helm",0x0DE0,0x0,0,'N',0x20706B78,0,IDB_ITEM_SKULLCAP,2300,1,2,0x3,2,2,1,' ',18,43,0,0,0,0,0
				,0,0,0,0,0,52,62,2,'H',0,0 },
				{ "Casque",'E',"Helm","Helm",0x0DF0,0x0,0,'N',0x206D6C78,0,IDB_ITEM_HELM,2300,1,2,0x3,2,2,1,' ',24,59,0,0,0,0,0,0,0,0,0,
				0,63,72,2,'H',0,0 },
				{ "Basinet",'E',"Full Helm","Helm",0x0E00,0x0,0,'N',0x206C6878,0,IDB_ITEM_FULLHELM,2300,1,2,0x3,2,2,1,' ',30,82,0,0,0,0,
				0,0,0,0,0,0,75,84,2,'H',0,0 },
				{ "Winged Helm",'E',"Great Helm","Helm",0x0E10,0x0,0,'N',0x206D6878,0,IDB_ITEM_GREATHELM,2300,1,2,0x3,2,2,1,' ',40,115,0
				,0,0,0,0,0,0,0,0,0,85,98,2,'H',0,0 },
				{ "Grand Crown",'E',"Crown","Helm",0x0E20,0x0,0,'N',0x206E7278,0,IDB_ITEM_CROWN,2300,1,2,0x3,2,2,1,' ',50,103,0,0,0,0,0,
				0,0,0,0,0,78,113,2,'H',0,0 },
				{ "Death Mask",'E',"Mask","Helm",0x0E30,0x0,0,'N',0x206B7378,0,IDB_ITEM_MASK,2300,1,2,0x3,2,2,1,' ',40,55,0,0,0,0,0,0,0,
				0,0,0,54,86,2,'H',0,0 },
				{ "Ghost Armor",'E',0,"Armor",0x0E40,0x0,0,'N',0x20697578,0,IDB_ITEM_QUILTED,3300,1,1,0x3,2,3,3,' ',20,38,0,0,0,0,0,0,0,
				0,0,0,102,117,0,' ',0,0 },
				{ "Serpent Skin Armor",'E',0,"Armor",0x0E50,0x0,0,'N',0x20616578,0,IDB_ITEM_LEATHER,3300,1,1,0x3,2,3,3,' ',24,43,0,0,0,0
				,0,0,0,0,0,0,111,126,0,' ',0,0 },
				{ "Demonhide Armor",'E',0,"Armor",0x0E60,0x0,0,'N',0x20616C78,0,IDB_ITEM_HARDLEATHER,3300,1,1,0x3,2,3,3,' ',28,50,0,0,0,
				0,0,0,0,0,0,0,122,136,0,' ',0,0 },
				{ "Trellised Armor",'E',0,"Armor",0x0E70,0x0,0,'N',0x20757478,0,IDB_ITEM_STUDDEDLEATHER,3300,1,1,0x3,2,3,3,' ',32,61,0,0
				,0,0,0,0,0,0,0,0,138,153,0,' ',0,0 },
				{ "Linked Mail",'E',0,"Armor",0x0E80,0x0,0,'N',0x20676E78,0,IDB_ITEM_RINGMAIL,3300,1,1,0x3,2,3,3,' ',26,74,0,0,0,0,0,0,0
				,0,0,0,158,172,0,' ',0,0 },
				{ "Tigulated Mail",'E',0,"Armor",0x0E90,0x0,0,'N',0x206C6378,0,IDB_ITEM_SCALEMAIL,3300,1,1,0x3,2,3,3,' ',36,86,0,0,0,0,0
				,0,0,0,0,0,176,190,0,' ',0,0 },
				{ "Mesh Armor",'E',0,"Armor",0x0EA0,0x0,0,'N',0x206E6878,0,IDB_ITEM_CHAINMAIL,3300,1,1,0x3,2,3,3,' ',45,92,0,0,0,0,0,0,0
				,0,0,0,198,213,0,' ',0,0 },
				{ "Curiass",'E',0,"Armor",0x0EB0,0x0,0,'N',0x20737278,0,IDB_ITEM_BREASTPLATE,3300,1,1,0x3,2,3,3,' ',50,65,0,0,0,0,0,0,0,
				0,0,0,188,202,0,' ',0,0 },
				{ "Russet Armor",'E',0,"Armor",0x0EC0,0x0,0,'N',0x206C7078,0,IDB_ITEM_SPLINTMAIL,3300,1,1,0x3,2,3,3,' ',30,97,0,0,0,0,0,
				0,0,0,0,0,225,243,0,' ',0,0 },
				{ "Templar Coat",'E',0,"Armor",0x0ED0,0x0,0,'N',0x20746C78,0,IDB_ITEM_PLATEMAIL,3300,1,1,0x3,2,3,3,' ',60,118,0,0,0,0,0,
				0,0,0,0,0,252,274,0,' ',0,0 },
				{ "Sharktooth Armor",'E',0,"Armor",0x0EE0,0x0,0,'N',0x20646C78,0,IDB_ITEM_FIELDPLATE,3300,1,1,0x3,2,3,3,' ',48,103,0,0,0
				,0,0,0,0,0,0,0,242,258,0,' ',0,0 },
				{ "Embossed Plate",'E',0,"Armor",0x0EF0,0x0,0,'N',0x20687478,0,IDB_ITEM_GOTHICPLATE,3300,1,1,0x3,2,3,3,' ',55,125,0,0,0,
				0,0,0,0,0,0,0,282,303,0,' ',0,0 },
				{ "Chaos Armor",'E',0,"Armor",0x0F00,0x0,0,'N',0x206C7578,0,IDB_ITEM_FULLPLATE,3300,1,1,0x3,2,3,3,' ',70,140,0,0,0,0,0,0
				,0,0,0,0,315,342,0,' ',0,0 },
				{ "Ornate Plate",'E',0,"Armor",0x0F10,0x0,0,'N',0x20726178,0,IDB_ITEM_ANCIENTARMOR,3300,1,1,0x3,2,3,3,' ',60,170,0,0,0,0
				,0,0,0,0,0,0,417,450,0,' ',0,0 },
				{ "Mage Plate",'E',0,"Armor",0x0F20,0x0,0,'N',0x20707478,0,IDB_ITEM_LIGHTPLATE,3300,1,1,0x3,2,3,3,' ',60,55,0,0,0,0,0,0,
				0,0,0,0,225,261,0,' ',0,0 },
				{ "Defender",'E',"Buckler","Shield",0x0F30,0x0,0,'N',0x20637578,0,IDB_ITEM_BUCKLER,4300,4,4,0x3,2,2,5,' ',12,38,0,0,0,0,
				0,0,0,0,0,0,41,49,1,'S',0,0 },
				{ "Round Shield",'E',"Small Shield","Shield",0x0F40,0x0,0,'N',0x206C6D78,0,IDB_ITEM_SMALLSHIELD,4300,4,4,0x3,2,2,5,' ',1
				6,53,0,0,0,0,0,0,0,0,0,0,47,55,2,'S',0,0 },
				{ "Scutum",'E',"Large Shield","Shield",0x0F50,0x0,0,'N',0x20677278,0,IDB_ITEM_LARGESHIELD,4300,4,4,0x3,2,3,5,' ',24,71,0
				,0,0,0,0,0,0,0,0,0,53,61,3,'S',0,0 },
				{ "Dragon Shield",'E',"Kite Shield","Shield",0x0F60,0x0,0,'N',0x20746978,0,IDB_ITEM_KITESHIELD,4300,4,4,0x3,2,3,5,' ',30
				,91,0,0,0,0,0,0,0,0,0,0,59,67,3,'S',0,0 },
				{ "Pavise",'E',"Tower Shield","Shield",0x0F70,0x0,0,'N',0x20776F78,0,IDB_ITEM_TOWERSHIELD,4300,4,4,0x3,2,3,5,' ',60,133,
				0,0,0,0,0,0,0,0,0,0,68,78,3,'S',0,0 },
				{ "Ancient Shield",'E',"Gothic Shield","Shield",0x0F80,0x0,0,'N',0x20737478,0,IDB_ITEM_GOTHICSHIELD,4300,4,4,0x3,2,4,5,'
				 ',40,110,0,0,0,0,0,0,0,0,0,0,80,93,3,'S',0,0 },
				{ "Demonhide Gloves",'E',"Leather Gloves","Gloves",0x0F90,0x0,0,'N',0x20676C78,0,IDB_ITEM_LEATHERGLOVES,5300,512,4096,0x
				3,2,2,10,' ',12,20,0,0,0,0,0,0,0,0,0,0,28,35,0,' ',0,0 },
				{ "Sharkskin Gloves",'E',"Heavy Gloves","Gloves",0x0FA0,0x0,0,'N',0x20677678,0,IDB_ITEM_HEAVYGLOVES,5300,512,4096,0x3,2,
				2,10,' ',14,20,0,0,0,0,0,0,0,0,0,0,33,39,0,' ',0,0 },
				{ "Heavy Bracers",'E',"Chain Gloves","Gloves",0x0FB0,0x0,0,'N',0x20676D78,0,IDB_ITEM_CHAINGLOVES,5300,512,4096,0x3,2,2,1
				0,' ',16,58,0,0,0,0,0,0,0,0,0,0,37,44,0,' ',0,0 },
				{ "Battle Gauntlets",'E',"Light Gauntlets","Gloves",0x0FC0,0x0,0,'N',0x20677478,0,IDB_ITEM_LIGHTGAUNTLETS,5300,512,4096,
				0x3,2,2,10,' ',18,88,0,0,0,0,0,0,0,0,0,0,39,47,0,' ',0,0 },
				{ "War Gauntlets",'E',"Gauntlets","Gloves",0x0FD0,0x0,0,'N',0x20676878,0,IDB_ITEM_GAUNTLETS,5300,512,4096,0x3,2,2,10,' '
				,24,110,0,0,0,0,0,0,0,0,0,0,43,53,0,' ',0,0 },
				{ "Demonhide Boots",'E',"Boots","Boots",0x0FE0,0x0,0,'N',0x20626C78,0,IDB_ITEM_LEATHERBOOTS,6300,256,2048,0x3,2,2,9,' ',
				12,20,0,0,0,0,0,0,0,0,0,0,28,35,0,' ',0,0 },
				{ "Sharkskin Boots",'E',"Heavy Boots","Boots",0x0FF0,0x0,0,'N',0x20627678,0,IDB_ITEM_HEAVYBOOTS,6300,256,2048,0x3,2,2,9,
				' ',14,47,0,0,0,0,0,0,0,0,0,0,33,39,0,' ',0,0 },
				{ "Mesh Boots",'E',"Chain Boots","Boots",0x1000,0x0,0,'N',0x20626D78,0,IDB_ITEM_CHAINBOOTS,6300,256,2048,0x3,2,2,9,' ',1
				5,65,0,0,0,0,0,0,0,0,0,0,37,44,0,' ',0,0 },
				{ "Battle Boots",'E',"Light Plate","Boots",0x1010,0x0,0,'N',0x20627478,0,IDB_ITEM_LIGHTPLATEBOOTS,6300,256,2048,0x3,2,2,
				9,' ',18,95,0,0,0,0,0,0,0,0,0,0,39,47,0,' ',0,0 },
				{ "War Boots",'E',"Greaves","Boots",0x1020,0x0,0,'N',0x20626878,0,IDB_ITEM_PLATEBOOTS,6300,256,2048,0x3,2,2,9,' ',24,125
				,0,0,0,0,0,0,0,0,0,0,43,53,0,' ',0,0 },
				{ "Demonhide Sash",'E',"Sash","Belt",0x1030,0x0,0,'N',0x20626C7A,0,IDB_ITEM_SASH,7300,1024,8192,0x3,2,1,8,' ',12,20,0,0,
				0,0,0,0,0,0,0,0,29,34,0,' ',0,0 },
				{ "Sharkskin Belt",'E',"Light Belt","Belt",0x1040,0x0,0,'N',0x2062767A,0,IDB_ITEM_LIGHTBELT,7300,1024,8192,0x3,2,1,8,' '
				,14,20,0,0,0,0,0,0,0,0,0,0,31,36,0,' ',0,0 },
					{ "Mesh Belt",'E',"Belt","Belt",0x1050,0x0,0,'N',0x20626D7A,0,IDB_ITEM_BELT,7300,1024,8192,0x3,2,1,8,' ',15,58,0,0,0,0,0
			,0,0,0,0,0,35,40,0,' ',0,0 },
					{ "Battle Belt",'E',"Heavy Belt","Belt",0x1060,0x0,0,'N',0x2062747A,0,IDB_ITEM_HEAVYBELT,7300,1024,8192,0x3,2,1,8,' ',18
					,88,0,0,0,0,0,0,0,0,0,0,37,42,0,' ',0,0 },
					{ "War Belt",'E',"Plated Belt","Belt",0x1070,0x0,0,'N',0x2062687A,0,IDB_ITEM_GIRDLE,7300,1024,8192,0x3,2,1,8,' ',24,110,
					0,0,0,0,0,0,0,0,0,0,41,52,0,' ',0,0 },
					{ "Grim Helm",'E',"Bone Helm","Helm",0x1080,0x0,0,'N',0x20396878,0,IDB_ITEM_BONEHELM,2300,1,2,0x3,2,2,1,' ',250,58,0,0,0
					,0,0,0,0,0,0,0,60,125,0,' ',0,0 },
					{ "Grim Shield",'E',"Bone Shield","Shield",0x1090,0x0,0,'N',0x20687378,0,IDB_ITEM_BONESHIELD,4300,4,4,0x3,2,3,5,' ',40,5
					8,0,0,0,0,0,0,0,0,0,0,50,150,0,' ',0,0 },
					{ "Barbed Shield",'E',"Spiked Shield","Shield",0x10A0,0x0,0,'N',0x206B7078,0,IDB_ITEM_SPIKEDSHIELD,4300,4,4,0x3,2,3,5,'
					',40,65,0,0,0,0,0,0,0,0,0,0,58,78,0,' ',0,0 },
					{ "Elixer of Vitality",'Q',0,"Special",0x10B0,0x0,0,'N',0x20786C65,1,IDB_ITEM_ELIXEROFVITALITY,40000,0,0,0x0,1,1,-1,' ',
					0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
					{ "HPO not translated",'X',0,"Trash",0x10C0,0x0,0,'N',0x206F7068,1,IDB_ITEM_HPO,90000,0,0,0x0,1,1,0,' ',0,0,0,0,0,0,0,0,
					0,0,0,0,0,0,0,' ',0,0 },
					{ "MPO not translated",'X',0,"Trash",0x10D0,0x0,0,'N',0x206F706D,1,IDB_ITEM_MPO,90000,0,0,0x0,1,1,0,' ',0,0,0,0,0,0,0,0,
					0,0,0,0,0,0,0,' ',0,0 },
					{ "HPF not translated",'X',0,"Trash",0x10E0,0x0,0,'N',0x20667068,1,IDB_ITEM_HPF,90000,0,0,0x0,1,1,0,' ',0,0,0,0,0,0,0,0,
					0,0,0,0,0,0,0,' ',0,0 },
					{ "MPF not translated",'X',0,"Trash",0x10F0,0x0,0,'N',0x2066706D,1,IDB_ITEM_MPF,90000,0,0,0x0,1,1,0,' ',0,0,0,0,0,0,0,0,
					0,0,0,0,0,0,0,' ',0,0 },
					{ "Stamina Potion",'A',0,"Potion",0x1100,0x0,0,'N',0x20737076,1,IDB_ITEM_STAMINA,10100,0,0,0x0,1,1,0,' ',0,0,0,0,0,0,0,0
					,0,0,0,0,0,0,0,' ',0,0 },
					{ "Antidote Potion",'A',0,"Potion",0x1110,0x0,0,'N',0x20737079,1,IDB_ITEM_ANTIDOTE,10100,0,0,0x0,1,1,0,' ',0,0,0,0,0,0,0
					,0,0,0,0,0,0,0,0,' ',0,0 },
					{ "Rejuvenation Potion",'A',0,"Potion",0x1120,0x0,0,'N',0x20737672,1,IDB_ITEM_REJUV,10100,0,0,0x0,1,1,0,' ',0,0,0,0,0,0,
					0,0,0,0,0,0,0,0,0,' ',0,"Heals 35% Life and Mana" },
					{ "Full Rejuvenation Potion",'A',0,"Potion",0x1130,0x0,0,'N',0x206C7672,1,IDB_ITEM_FULLREJUV,10100,0,0,0x0,1,1,0,' ',0,0
					,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,"Heals 100% Life and Mana" },
					{ "Thawing Potion",'A',0,"Potion",0x1140,0x0,0,'N',0x20736D77,1,IDB_ITEM_THAWING,10100,0,0,0x0,1,1,0,' ',0,0,0,0,0,0,0,0
					,0,0,0,0,0,0,0,' ',0,0 },
					{ "Tome of Town Portal",'A',0,"Scroll Tome",0x1150,0x0,0,'N',0x206B6274,0,IDB_ITEM_TOMEBLUE,10200,0,0,0x0,1,2,-1,' ',0,0
					,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',20,0 },
					{ "Tome of Identify",'A',0,"Scroll Tome",0x1160,0x0,0,'N',0x206B6269,0,IDB_ITEM_TOMERED,10200,0,0,0x0,1,2,-1,' ',0,0,0,0
					,0,0,0,0,0,0,0,0,0,0,0,' ',20,0 },
					{ "Amulet",'M',0,"Amulet",0x1170,0x0,0,'M',0x20756D61,0,0,9100,4096,32768,0xE,1,1,2,' ',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'
					',0,0 },
					{ "Civerb's Icon",'S',"Amulet","Amulet",0x1170,0x00,0x000E,'S',0x20756D61,0,0,20006,0,0,0xE,1,1,2,' ',0,0,0,0,0,0,0,0,0,
					0,0,0,0,0,0,' ',0,0 },
					{ "Iratha's Collar",'S',"Amulet","Amulet",0x1170,0x06,0x0030,'S',0x20756D61,0,0,20011,0,0,0xE,1,1,2,' ',0,0,0,0,0,0,0,0,
					0,0,0,0,0,0,0,' ',0,0 },
					{ "Vidala's Snare",'S',"Amulet","Amulet",0x1170,0x0A,0x00C0,'S',0x20756D61,0,0,20016,0,0,0xE,1,1,2,' ',0,0,0,0,0,0,0,0,0
					,0,0,0,0,0,0,' ',0,0 },
					{ "Cathan's Sigil",'S',"Amulet","Amulet",0x1170,0x0E,0x0100,'S',0x20756D61,0,0,20005,0,0,0xE,1,1,2,' ',0,0,0,0,0,0,0,0,0
					,0,0,0,0,0,0,' ',0,0 },
					{ "Tancred's Weird",'S',"Amulet","Amulet",0x1170,0x10,0x3E00,'S',0x20756D61,0,0,20015,0,0,0xE,1,1,2,' ',0,0,0,0,0,0,0,0,
					0,0,0,0,0,0,0,' ',0,0 },
					{ "Angelical Wings",'S',"Amulet","Amulet",0x1170,0x1A,0xC000,'S',0x20756D61,0,0,20001,0,0,0xE,1,1,2,' ',0,0,0,0,0,0,0,0,
					0,0,0,0,0,0,0,' ',0,0 },
					{ "Arcanna's Sign",'S',"Amulet","Amulet",0x1170,0x1E,0x0001,'S',0x20756D61,0,0,20002,0,0,0xE,1,1,2,' ',0,0,0,0,0,0,0,0,0
					,0,0,0,0,0,0,' ',0,0 },
					{ "Nokozan Relic",'U',"Amulet","Amulet",0x1170,0xEA,0,'U',0x20756D61,0,0,9200,0,0,0xE,1,1,2,' ',0,0,0,0,0,0,0,0,0,0,0,0,
					0,0,0,' ',0,0 },
					{ "The Eye of Etlich",'U',"Amulet","Amulet",0x1170,0xEC,0,'U',0x20756D61,0,0,9200,0,0,0xE,1,1,2,' ',0,0,0,0,0,0,0,0,0,0,
					0,0,0,0,0,' ',0,0 },
					{ "The Mahim-Oak Curio",'U',"Amulet","Amulet",0x1170,0xEE,0,'U',0x20756D61,0,0,9200,0,0,0xE,1,1,2,' ',0,0,0,0,0,0,0,0,0,
					0,0,0,0,0,0,' ',0,0 },
					{ "Top of Horadric Staff of Craft",'Q',0,"Special",0x1180,0x0,0,'N',0x20706976,0,IDB_ITEM_TOPOFHORADRICSTAFF,30002,0,0,0
					x1,1,1,-1,' ',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
					{ "Ring",'M',0,"Ring",0x1190,0x0,0,'M',0x206E6972,0,0,8100,2048,16384,0xE,1,1,6,' ',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,
					0 },
					{ "Cathan's Seal",'S',"Ring","Ring",0x1190,0x0E,0x3F00,'S',0x206E6972,0,0,20005,0,0,0xE,1,1,6,' ',0,0,0,0,0,0,0,0,0,0,0,
					0,0,0,0,' ',0,0 },
					{ "Angelical Halo",'S',"Ring","Ring",0x1190,0x1A,0xC0FF,'S',0x206E6972,0,0,20001,0,0,0xE,1,1,6,' ',0,0,0,0,0,0,0,0,0,0,0
					,0,0,0,0,' ',0,0 },
					{ "Nagelring",'U',"Ring","Ring",0x1190,0xF0,0,'U',0x206E6972,0,0,8200,0,0,0xE,1,1,6,' ',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'',0,0 },
					{ "Manald Heal",'U',"Ring","Ring",0x1190,0xF2,0,'U',0x206E6972,0,0,8200,0,0,0xE,1,1,6,' ',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
					' ',0,0 },
					{ "The Stone of Jordan",'U',"Ring","Ring",0x1190,0xF4,0,'U',0x206E6972,0,0,8200,0,0,0xE,1,1,6,' ',0,0,0,0,0,0,0,0,0,0,0,
					0,0,0,0,' ',0,0 },
					{ "Amulet of the Viper",'U',"Ring","Ring",0x1170,0xF6,0,'U',0x206E6972,0,0,0,0,0,0xE,1,1,6,' ',0,0,0,0,0,0,0,0,0,0,0,0,0
					,0,0,' ',0,0 },
					{ "Gold",'X',0,"Trash",0x11A0,0x0,0,'N',0x20646C67,0,IDB_ITEM_GOLD,90000,0,0,0x0,1,1,-1,' ',0,0,0,0,0,0,0,0,0,0,0,0,0,0,
					0,' ',0,0 },
					{ "Scroll of Inifuss",'Q',0,"Special",0x11B0,0x0,0,'N',0x20736B62,0,IDB_ITEM_SCROLLOFINIFUSS,30001,0,0,0x0,2,2,-1,' ',0,
					0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
					{ "Key to the Cairn Stones",'Q',0,"Special",0x11C0,0x0,0,'N',0x20646B62,0,IDB_ITEM_SCROLLOFINIFUSS,30001,0,0,0x0,2,2,-1,
					' ',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Arrows",'A',0,"Weapon Access",0x11D0,0x0,0,'N',0x20767161,0,IDB_ITEM_ARROWS,10000,0,0,0x0,1,3,5,' ',0,0,0,0,0,0,0,0,0
						,0,0,0,0,0,0,' ',250,0 },
						{ "Torch",'A',0,"Accessories",0x11E0,0x0,0,'N',0x20686374,0,IDB_ITEM_TORCH,90000,0,0,0x0,1,2,-1,' ',0,0,0,0,0,0,0,0,0,0,
						0,0,0,0,0,' ',0,0 },
						{ "Bolts",'A',0,"Weapon Access",0x11F0,0x0,0,'N',0x20767163,0,IDB_ITEM_BOLTS,10000,0,0,0x0,1,3,5,' ',0,0,0,0,0,0,0,0,0,0
						,0,0,0,0,0,' ',150,0 },
						{ "Scroll of Town Portal",'N',0,"Scroll",0x1200,0x0,0,'N',0x20637374,1,IDB_ITEM_SCROLLBLUE,10200,0,0,0x0,1,1,-1,' ',0,0,
						0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Scroll of Identify",'N',0,"Scroll",0x1210,0x0,0,'N',0x20637369,1,IDB_ITEM_SCROLLRED,10200,0,0,0x0,1,1,-1,' ',0,0,0,0,
						0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Skeleton HRT not translated",'X',0,"Trash",0x1220,0x0,0,'N',0x20747268,1,IDB_ITEM_HEART,90100,0,0,0x0,1,1,-1,' ',0,0,
						0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Skeleton BRN not xlated",'X',0,"Trash",0x1230,0x0,0,'N',0x207A7262,1,IDB_ITEM_BRAIN,90100,0,0,0x0,1,1,-1,' ',0,0,0,0,
						0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Skeleton JAW not xlated",'X',0,"Trash",0x1240,0x0,0,'N',0x2077616A,1,IDB_ITEM_SKELETONJAW,90100,0,0,0x0,1,1,-1,' ',0,
						0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Skeleton EYE not translated",'X',0,"Trash",0x1250,0x0,0,'N',0x207A7965,1,IDB_ITEM_EYE,90100,0,0,0x0,1,1,-1,' ',0,0,0,
						0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Skeleton HRN not translated",'X',0,"Trash",0x1260,0x0,0,'N',0x206E7268,1,IDB_ITEM_SKELETONHRN,90100,0,0,0x0,1,1,-1,'
						',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Skeleton TAL not translated",'X',0,"Trash",0x1270,0x0,0,'N',0x206C6174,1,IDB_ITEM_SKELETONTAL,90100,0,0,0x0,1,1,-1,'
						',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Skeleton FLG not translated",'X',0,"Trash",0x1280,0x0,0,'N',0x20676C66,1,IDB_ITEM_SKELETONFLG,90100,0,0,0x0,1,1,-1,'
						',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Skeleton FAN not translated",'X',0,"Trash",0x1290,0x0,0,'N',0x20676E66,1,IDB_ITEM_SKELETONFNG,90100,0,0,0x0,1,1,-1,'
						',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Skeleton QLL not translated",'X',0,"Trash",0x12A0,0x0,0,'N',0x206C6C71,1,IDB_ITEM_SKELETONQLL,90100,0,0,0x0,1,1,-1,'
						',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Skeleton SOL not translated",'X',0,"Trash",0x12B0,0x0,0,'N',0x206C6F73,1,IDB_ITEM_SKELETONSOL,90100,0,0,0x0,1,1,-1,'
						',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Skeleton SCZ not translated",'X',0,"Trash",0x12C0,0x0,0,'N',0x207A6373,1,IDB_ITEM_SKELETONSCZ,90100,0,0,0x0,1,1,-1,'
						',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Skeleton SPE not translated",'X',0,"Trash",0x12D0,0x0,0,'N',0x20657073,1,IDB_ITEM_SKELETONSOL,90100,0,0,0x0,1,1,-1,'
						',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Key",'A',0,"Accessories",0x12E0,0x0,0,'N',0x2079656B,0,IDB_ITEM_KEY,10000,0,0,0x0,1,1,-1,' ',0,0,0,0,0,0,0,0,0,0,0,0,
						0,0,0,' ',6,0 },
						{ "Black Tower Key",'X',0,"Trash",0x12F0,0x0,0,'N',0x2076756C,0,IDB_ITEM_BLACKTOWERKEY,90000,0,0,0x0,1,2,-1,' ',0,0,0,0,
						0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Potion of Life",'Q',0,"Special",0x1300,0x0,0,'N',0x207A7978,0,IDB_ITEM_POTIONOFLIFE,30003,0,0,0x0,1,1,-1,' ',0,0,0,0,
						0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Jade Figurine",'Q',0,"Special",0x1310,0x0,0,'N',0x2034336A,0,IDB_ITEM_JADEFIGURINE,30003,0,0,0x0,1,2,-1,' ',0,0,0,0,0
						,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Golden Bird",'Q',0,"Special",0x1320,0x0,0,'N',0x20343367,0,IDB_ITEM_GOLDENBIRD,30003,0,0,0x0,1,2,-1,' ',0,0,0,0,0,0,0
						,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Lam Eseu's Tome",'Q',0,"Special",0x1330,0x0,0,'N',0x20626262,0,IDB_ITEM_LAMESEUSTOME,30003,0,0,0x0,2,2,-1,' ',0,0,0,0
						,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Horadric Cube",'Q',0,"Special",0x1340,0x0,0,'N',0x20786F62,0,IDB_ITEM_HORADRICCUBE,30002,0,0,0x0,2,2,-1,' ',0,0,0,0,0
						,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Horadric Scroll",'Q',0,"Special",0x1350,0x0,0,'N',0x20317274,0,IDB_ITEM_HORADRICSCROLL,30002,0,0,0x0,2,2,-1,' ',0,0,0
						,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Mephisto's Soulstone",'Q',0,"Special",0x1360,0x0,0,'N',0x2073736D,0,IDB_ITEM_MOPHISTOSSOULSTONE,30004,0,0,0x0,1,1,-1,
						' ',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Book of Skill",'Q',0,"Special",0x1370,0x0,0,'N',0x20737361,0,IDB_ITEM_BOOKOFSKILL,30002,0,0,0x0,2,2,-1,' ',0,0,0,0,0,
						0,0,0,0,0,0,0,0,0,0,' ',0,0 },
						{ "Khalim's Eye",'Q',0,"Special",0x1380,0x0,0,'N',0x20796571,0,IDB_ITEM_EYE,30003,0,0,0x0,1,1,-1,' ',0,0,0,0,0,0,0,0,0,0
						,0,0,0,0,0,' ',0,0 },
						{ "Khalim's Heart",'Q',0,"Special",0x1390,0x0,0,'N',0x20726871,0,IDB_ITEM_HEART,30003,0,0,0x0,1,1,-1,' ',0,0,0,0,0,0,0,0
						,0,0,0,0,0,0,0,' ',0,0 },
						{ "Khalim's Brain",'Q',0,"Special",0x13A0,0x0,0,'N',0x20726271,0,IDB_ITEM_BRAIN,30003,0,0,0x0,1,1,-1,' ',0,0,0,0,0,0,0,0
						,0,0,0,0,0,0,0,' ',0,0 },
						{ "Ear",'R',0,"Special",0x13B0,0x0,0,'N',0x20726165,0,IDB_ITEM_EAR,40000,0,0,0x0,1,1,-1,' ',0,0,0,0,0,0,0,0,0,0,0,0,0,0,
						0,' ',0,0 },
						{ "Chipped Amethyst",'G',0,"Gem",0x13C0,0x0,0,'N',0x20766367,1,IDB_ITEM_CHIPPEDAMETHYST,10301,0,0,0x0,1,1,-1,' ',0,0,0,0
						,0,0,0,0,0,0,0,0,0,0,0,' ',0,"Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds to attac
						k rating\\par Shield : adds to shield's defense rating\\par Helm: adds to strength" },
						{ "Flawed Amethyst",'G',0,"Gem",0x13D0,0x0,0,'N',0x20766667,1,IDB_ITEM_FLAWEDAMETHYST,10302,0,0,0x0,1,1,-1,' ',0,0,0,0,0
						,0,0,0,0,0,0,0,0,0,0,' ',0,"Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds to attack
						rating\\par Shield : adds to shield's defense rating\\par Helm: adds to strength" },
						{ "Amethyst",'G',0,"Gem",0x13E0,0x0,0,'N',0x20767367,1,IDB_ITEM_AMETHYST,10303,0,0,0x0,1,1,-1,' ',0,0,0,0,0,0,0,0,0,0,0,
						0,0,0,0,' ',0,"Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds to attack rating\\par S
						hield: adds to shield's defense rating\\par Helm: adds to strength" },
						{ "Flawless Amethyst",'G',0,"Gem",0x13F0,0x0,0,'N',0x20767A67,1,IDB_ITEM_FLAWLESSAMETHYST,10304,0,0,0x0,1,1,-1,' ',0,0,0
						,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,"Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds to att
						ack rating\\par Shield : adds to shield's defense rating\\par Helm: adds to strength" },
						{ "Perfect Amethyst",'G',0,"Gem",0x1400,0x0,0,'N',0x20767067,1,IDB_ITEM_PERFECTAMETHYST,10305,0,0,0x0,1,1,-1,' ',0,0,0,0
						,0,0,0,0,0,0,0,0,0,0,0,' ',0,"Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds to attac
						k rating\\par Shield : adds to shield's defense rating\\par Helm: adds to strength" },
						{ "Chipped Topaz",'G',0,"Gem",0x1410,0x0,0,'N',0x20796367,1,IDB_ITEM_CHIPPEDTOPAZ,10301,0,0,0x0,1,1,-1,' ',0,0,0,0,0,0,0
						, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds lightning dama
						ge to attack\\par Shield : adds resistance to lightning\\par Helm : adds to chance to find magic items" },
					{ "Flawed Topaz", 'G', 0, "Gem", 0x1420, 0x0, 0, 'N', 0x20796667, 1, IDB_ITEM_FLAWEDTOPAZ, 10302, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds lightning damage
						to attack\\par Shield : adds resistance to lightning\\par Helm : adds to chance to find magic items" },
					{ "Topaz", 'G', 0, "Gem", 0x1430, 0x0, 0, 'N', 0x20797367, 1, IDB_ITEM_TOPAZ, 10303, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds lightning damage to attack\\p
						ar Shield : adds resistance to lightning\\par Helm : adds to chance to find magic items" },
					{ "Flawless Topaz", 'G', 0, "Gem", 0x1440, 0x0, 0, 'N', 0x20796C67, 1, IDB_ITEM_FLAWLESSTOPAZ, 10304, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds lightning da
						mage to attack\\par Shield : adds resistance to lightning\\par Helm : adds to chance to find magic items" },
					{ "Perfect Topaz", 'G', 0, "Gem", 0x1450, 0x0, 0, 'N', 0x20797067, 1, IDB_ITEM_PERFECTTOPAZ, 10305, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds lightning dama
						ge to attack\\par Shield : adds resistance to lightning\\par Helm : adds to chance to find magic items" },
					{ "Chipped Sapphire", 'G', 0, "Gem", 0x1460, 0x0, 0, 'N', 0x20626367, 1, IDB_ITEM_CHIPPEDSAPPHIRE, 10301, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds cold dam
						age to attack\\par Shield : adds resistance to cold\\par Helm : adds to maximum mana" },
					{ "Flawed Sapphire", 'G', 0, "Gem", 0x1470, 0x0, 0, 'N', 0x20626667, 1, IDB_ITEM_FLAWEDSAPPHIRE, 10302, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds cold damag
						e to attack\\par Shield : adds resistance to cold\\par Helm : adds to maximum mana" },
					{ "Sapphire", 'G', 0, "Gem", 0x1480, 0x0, 0, 'N', 0x20627367, 1, IDB_ITEM_SAPPHIRE, 10303, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds cold damage to attack\\
						par Shield : adds resistance to cold\\par Helm : adds to maximum mana" },
					{ "Flawless Sapphire", 'G', 0, "Gem", 0x1490, 0x0, 0, 'N', 0x20626C67, 1, IDB_ITEM_FLAWLESSSAPPHIRE, 10304, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds cold d
						amage to attack\\par Shield : adds resistance to cold\\par Helm : adds to maximum mana" },
					{ "Perfect Sapphire", 'G', 0, "Gem", 0x14A0, 0x0, 0, 'N', 0x20627067, 1, IDB_ITEM_PERFECTSAPPHIRE, 10305, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds cold dam
						age to attack\\par Shield : adds resistance to cold\\par Helm : adds to maximum mana" },
					{ "Chipped Emerald", 'G', 0, "Gem", 0x14B0, 0x0, 0, 'N', 0x20676367, 1, IDB_ITEM_CHIPPEDEMERALD, 10301, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds poison dam
						age to attack\\par Shield : adds resistance to poison\\par Helm : adds to dexterity" },
					{ "Flawed Emerald", 'G', 0, "Gem", 0x14C0, 0x0, 0, 'N', 0x20676667, 1, IDB_ITEM_FLAWEDEMERALD, 10302, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds poison damag
						e to attack\\par Shield : adds resistance to poison\\par Helm : adds to dexterity" },
					{ "Emerald", 'G', 0, "Gem", 0x14D0, 0x0, 0, 'N', 0x20677367, 1, IDB_ITEM_EMERALD, 10303, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds poison damage to attack\\
						par Shield : adds resistance to poison\\par Helm : adds to dexterity" },
					{ "Flawless Emerald", 'G', 0, "Gem", 0x14E0, 0x0, 0, 'N', 0x20676C67, 1, IDB_ITEM_FLAWLESSEMERALD, 10304, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds poison d
						amage to attack\\par Shield : adds resistance to poison\\par Helm : adds to dexterity" },
					{ "Perfect Emerald", 'G', 0, "Gem", 0x14F0, 0x0, 0, 'N', 0x20677067, 1, IDB_ITEM_PERFECTEMERALD, 10305, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds poison dam
						age to attack\\par Shield : adds resistance to poison\\par Helm : adds to dexterity" },
					{ "Chipped Ruby", 'G', 0, "Gem", 0x1500, 0x0, 0, 'N', 0x20726367, 1, IDB_ITEM_CHIPPEDRUBY, 10301, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds fire damage to a
						ttack\\par Shield : adds resistance to fire\\par Helm : adds to maximum life" },
					{ "Flawed Ruby", 'G', 0, "Gem", 0x1510, 0x0, 0, 'N', 0x20726667, 1, IDB_ITEM_FLAWEDRUBY, 10302, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds fire damage to att
						ack\\par Shield : adds resistance to fire\\par Helm : adds to maximum life" },
					{ "Ruby", 'G', 0, "Gem", 0x1520, 0x0, 0, 'N', 0x20727367, 1, IDB_ITEM_RUBY, 10303, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds fire damage to attack\\par Shie
						ld: adds resistance to fire\\par Helm : adds to maximum life" },
					{ "Flawless Ruby", 'G', 0, "Gem", 0x1530, 0x0, 0, 'N', 0x20726C67, 1, IDB_ITEM_FLAWLESSRUBY, 10304, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds fire damage to
						attack\\par Shield : adds resistance to fire\\par Helm : adds to maximum life" },
					{ "Perfect Ruby", 'G', 0, "Gem", 0x1540, 0x0, 0, 'N', 0x20727067, 1, IDB_ITEM_PERFECTRUBY, 10305, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds fire damage to a
						ttack\\par Shield : adds resistance to fire\\par Helm : adds to maximum life" },
					{ "Chipped Diamond", 'G', 0, "Gem", 0x1550, 0x0, 0, 'N', 0x20776367, 1, IDB_ITEM_CHIPPEDDIAMOND, 10301, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds to damage
						vs.undead\\par Shield : adds to all resistances\\par Helm : adds to attack rating" },
					{ "Flawed Diamond", 'G', 0, "Gem", 0x1560, 0x0, 0, 'N', 0x20776667, 1, IDB_ITEM_FLAWEDDIAMOND, 10302, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds to damage vs
						.undead\\par Shield : adds to all resistances\\par Helm : adds to attack rating" },
					{ "Diamond", 'G', 0, "Gem", 0x1570, 0x0, 0, 'N', 0x20777367, 1, IDB_ITEM_DIAMOND, 10303, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds to damage vs. undead\\par
						Shield: adds to all resistances\\par Helm : adds to attack rating" },
					{ "Flawless Diamond", 'G', 0, "Gem", 0x1580, 0x0, 0, 'N', 0x20776C67, 1, IDB_ITEM_FLAWLESSDIAMOND, 10304, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds to damag
						e vs.undead\\par Shield : adds to all resistances\\par Helm : adds to attack rating" },
					{ "Perfect Diamond", 'G', 0, "Gem", 0x1590, 0x0, 0, 'N', 0x20777067, 1, IDB_ITEM_PERFECTDIAMOND, 10305, 0, 0, 0x0, 1, 1, -1, ' ', 0, 0, 0, 0, 0
						, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds to damage
						vs.undead\\par Shield : adds to all resistances\\par Helm : adds to attack rating" },
					{ "Minor Healing Potion", 'A', 0, "Potion", 0x15A0, 0x0, 0, 'N', 0x20317068, 1, IDB_ITEM_MINORHEALING, 10101, 0, 0, 0x0, 1, 1, 0, ' ', 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ' ', 0, "Points: 20" },
						{ "Light Healing Potion",'A',0,"Potion",0x15B0,0x0,0,'N',0x20327068,1,IDB_ITEM_LIGHTHEALING,10101,0,0,0x0,1,1,0,' ',0,0,
						0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,"Points: 40" },
						{ "Healing Potion",'A',0,"Potion",0x15C0,0x0,0,'N',0x20337068,1,IDB_ITEM_HEALING,10101,0,0,0x0,1,1,0,' ',0,0,0,0,0,0,0,0
							,0,0,0,0,0,0,0,' ',0,"Points: 60" },
							{ "Greater Healing Potion",'A',0,"Potion",0x15D0,0x0,0,'N',0x20347068,1,IDB_ITEM_GREATERHEALING,10101,0,0,0x0,1,1,0,' ',
							0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,"Points: 80" },
							{ "Super Healing Potion",'A',0,"Potion",0x15E0,0x0,0,'N',0x20357068,1,IDB_ITEM_SUPERHEALING,10101,0,0,0x0,1,1,0,' ',0,0,
							0,0,0,0,0,0,0,0,0,0,0,0,0,' ',0,"Points: 100" },
							{ "Minor Mana Potion",'A',0,"Potion",0x15F0,0x0,0,'N',0x2031706D,1,IDB_ITEM_MINORMANA,10102,0,0,0x0,1,1,0,' ',0,0,0,0,0,
							0,0,0,0,0,0,0,0,0,0,' ',0,"Points: 20" },
							{ "Light Mana Potion",'A',0,"Potion",0x1600,0x0,0,'N',0x2032706D,1,IDB_ITEM_LIGHTMANA,10102,0,0,0x0,1,1,0,' ',0,0,0,0,0,
							0,0,0,0,0,0,0,0,0,0,' ',0,"Points: 40" },
							{ "Mana Potion",'A',0,"Potion",0x1610,0x0,0,'N',0x2033706D,1,IDB_ITEM_MANA,10102,0,0,0x0,1,1,0,' ',0,0,0,0,0,0,0,0,0,0,0
							,0,0,0,0,' ',0,"Points: 60" },
							{ "Greater Mana Potion",'A',0,"Potion",0x1620,0x0,0,'N',0x2034706D,1,IDB_ITEM_GREATERMANA,10102,0,0,0x0,1,1,0,' ',0,0,0,
							0,0,0,0,0,0,0,0,0,0,0,0,' ',0,"Points: 80" },
							{ "Super Mana Potion",'A',0,"Potion",0x1630,0x0,0,'N',0x2035706D,1,IDB_ITEM_SUPERMANA,10102,0,0,0x0,1,1,0,' ',0,0,0,0,0,
							0,0,0,0,0,0,0,0,0,0,' ',0,"Points: 100" },
							{ "Chipped Skull",'G',0,"Gem",0x1640,0x0,0,'N',0x20636B73,1,IDB_ITEM_CHIPPEDSKULL,10301,0,0,0x0,1,1,-1,' ',0,0,0,0,0,0,0
							,0,0,0,0,0,0,0,0,' ',0,"Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds mana and life
							steal to attack\\par Shield : adds attacker takes damage\\par Helm : adds mana and life regeneration" },
							{ "Flawed Skull",'G',0,"Gem",0x1650,0x0,0,'N',0x20666B73,1,IDB_ITEM_FLAWEDSKULL,10302,0,0,0x0,1,1,-1,' ',0,0,0,0,0,0,0,0
							,0,0,0,0,0,0,0,' ',0,"Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds mana and life st
							eal to attack\\par Shield : adds attacker takes damage\\par Helm : adds mana and life regeneration" },
							{ "Skull",'G',0,"Gem",0x1660,0x0,0,'N',0x20756B73,1,IDB_ITEM_SKULL,10303,0,0,0x0,1,1,-1,' ',0,0,0,0,0,0,0,0,0,0,0,0,0,0,
							0,' ',0,"Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds mana and life steal to attack
							\\par Shield : adds attacker takes damage\\par Helm : adds mana and life regeneration" },
							{ "Flawless Skull",'G',0,"Gem",0x1670,0x0,0,'N',0x206C6B73,1,IDB_ITEM_FLAWLESSSKULL,10304,0,0,0x0,1,1,-1,' ',0,0,0,0,0,0
							,0,0,0,0,0,0,0,0,0,' ',0,"Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds mana and lif
							e steal to attack\\par Shield : adds attacker takes damage\\par Helm : adds mana and life regeneration" },
							{ "Perfect Skull",'G',0,"Gem",0x1680,0x0,0,'N',0x207A6B73,1,IDB_ITEM_PERFECTSKULL,10305,0,0,0x0,1,1,-1,' ',0,0,0,0,0,0,0
							,0,0,0,0,0,0,0,0,' ',0,"Can Be Inserted in Socketed\\par Weapons, Shields or Helms\\par\\par Weapon: adds mana and life
							steal to attack\\par Shield : adds attacker takes damage\\par Helm : adds mana and life regeneration" },
							};
							int nItemInfos = sizeof ItemInfos / sizeof ItemInfos[0];;
							HBITMAP ItemInfoGetBitmap(ItemInfo* Info)
							{
							#if defined(JAMELLAEDITOR)
							 if (Info->hBmp) return Info->hBmp;

							 if (Info->BitmapID)
							 {
							 Info->hBmp = LoadBitmap(hInstance,MAKEINTRESOURCE(Info->BitmapID));

							 if (Info->hBmp)
							 {
							 BITMAP bmpinfo;
							 if (GetObject(Info->hBmp,sizeof bmpinfo,&bmpinfo) == 0)
							 {
							 sprintf(buffer,"Bitmap Resource Error ID = %i\n",Info->BitmapID);
							 MessageBox(NULL,buffer,PROGRAMNAME,
							 MB_OK | MB_ICONSTOP | MB_APPLMODAL);
							 exit(0);
							 }

							 if (bmpinfo.bmWidth != Info->SizeX * 29 - 1 ||
							 bmpinfo.bmHeight != Info->SizeY * 29 - 1)
							 {
							 sprintf(buffer,"Resource Error [%i|%i]\nID = %i",bmpinfo.bmWidth,bmpinfo.bmHeight,Info->BitmapID);
							 MessageBox(NULL,buffer,PROGRAMNAME,
							 MB_OK | MB_ICONSTOP | MB_APPLMODAL);
							 exit(0);
							 }
							 }
							 else
							 {
							 sprintf(buffer,"LoadBitmap Error ID = %i\n",Info->BitmapID);
							 MessageBox(NULL,buffer,PROGRAMNAME,
							 MB_OK | MB_ICONSTOP | MB_APPLMODAL);
							 exit(0);
							 }
							 }
							 else
							 {
							 return itemunknown.hBmp;
							 }
							 return Info->hBmp;
							#else
								return 0;
#endif
							}
