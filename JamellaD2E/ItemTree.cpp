#include "JamellaD2E.h"
struct _ItemTree ItemTree[] = {
	{1, "Weapons", 1000},  {2, "Regular", 1100},  {3, "Swords", 1101},  {3, "Axes", 1102},  {3, "Maces", 1103},  {3, "Javelins", 1104},  {3, "Spears", 1105},  {3, "Polearms", 1106},
	{3, "Daggers", 1107},  {3, "Throwing", 1108},  {3, "Bows", 1109},  {3, "Crossbows", 1110},  {3, "Wands", 1111},  {3, "Scepters", 1112},  {3, "Staves", 1113},  {2, "Unique", 1200},
	{3, "Swords", 1201},  {3, "Axes", 1202},  {3, "Maces", 1203},  {3, "Daggers", 1204},  {3, "Spears", 1205},  {3, "Polearms", 1206},  {3, "Bows", 1207},  {3, "Crossbows", 1208},
	{3, "Wands", 1209},  {3, "Scepters", 1210},  {3, "Staves", 1211},  {2, "Exceptional", 1300},  {3, "Swords", 1301},  {3, "Axes", 1302},  {3, "Maces", 1303},  {3, "Javelins", 1304},
	{3, "Spears", 1305},  {3, "Polearms", 1306},  {3, "Daggers", 1307},  {3, "Throwing", 1308},  {3, "Bows", 1309},  {3, "Crossbows", 1310},  {3, "Wands", 1311},  {3, "Scepters", 1312},
	{3, "Staves", 1313},  {2, "Potions", 1400},  {1, "Helms", 2000},  {2, "Regular", 2100},  {2, "Unique", 2200},  {2, "Exceptional", 2300},  {1, "Armor", 3000},  {2, "Regular", 3100},
	{2, "Unique", 3200},  {2, "Exceptional", 3300},  {1, "Shields", 4000},  {2, "Regular", 4100},  {2, "Unique", 4200},  {2, "Exceptional", 4300},  {1, "Gloves", 5000},
	{2, "Regular", 5100},  {2, "Unique", 5200},  {2, "Exceptional", 5300},  {1, "Boots", 6000},  {2, "Regular", 6100},  {2, "Unique", 6200},  {2, "Exceptional", 6300},
	{1, "Belts", 7000},  {2, "Regular", 7100},  {2, "Unique", 7200},  {2, "Exceptional", 7300},  {1, "Rings", 8000},  {2, "Magical", 8100},  {2, "Unique", 8200},  {1, "Amulets", 9000},
	{2, "Magical", 9100},  {2, "Unique", 9200},  {1, "Accessories", 10000},  {2, "Potions", 10100},  {3, "Healing", 10101},  {2, "Scrolls&Tomes", 10200},  {2, "Gems", 10300},
	{3, "Chipped", 10301},  {3, "Flawed", 10302},  {3, "Regular", 10303},  {3, "Flawless", 10304},  {3, "Perfect", 10305},  {1, "SetItems", 20000},  {2, "AngelicRaiment", 20001},
	{2, "Arcanna'sTricks", 20002},  {2, "ArcticGear", 20003},  {2, "Berserker'sArsenal", 20004},  {2, "Cathan'sTraps", 20005},  {2, "Civerb'sVestments", 20006},
	{2, "Cleglaw'sBrace", 20007},  {2, "Death'sDisguise", 20008},  {2, "Hsaru'sDefense", 20009},  {2, "InfernalTools", 20010},  {2, "Iratha'sFinery", 20011},
	{2, "Isenhart'sArmory", 20012},  {2, "Milabrega'sRegalia", 20013},  {2, "Sigon'sCompleteSteel", 20014},  {2, "Tancred'sBattlegear", 20015},  {2, "Vidala'sRig", 20016},
	{1, "QuestItems", 30000},  {2, "ActI", 30001},  {2, "ActII", 30002},  {2, "ActIII", 30003},  {2, "ActIV", 30004},  {1, "SpecialItems", 40000},
	{1, "UselessJunk(butfun)", 90000},  {2, "SkeletonCollection", 90100},
};
int nItemTree = sizeof ItemTree / sizeof ItemTree[0];
