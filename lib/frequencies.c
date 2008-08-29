/* Copyright (C) 2006 Nathan Laredo <laredo@gnu.org>
   Nathan contributed the frequency tables.

   Copyright (C) 2006 Hans Verkuil <hverkuil@xs4all.nl>
   Added the iso-std table.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

#include <stdlib.h>

#include <linux/videodev2.h>
#include "v4l2.h"

/* This source was originally written by Nathan Laredo <laredo@gnu.org>.
   He kindly gave permission to release this source under the LGPL
   license. */

/* --------------------------------------------------------------------- */

/* US broadcast */
static const struct v4l2_channel_list ntsc_bcast[] = {
    { "2",	 55250 },
    { "3",	 61250 },
    { "4",	 67250 },
    { "5",	 77250 },
    { "6",	 83250 },
    { "7",	175250 },
    { "8",	181250 },
    { "9",	187250 },
    { "10",	193250 },
    { "11",	199250 },
    { "12",	205250 },
    { "13",	211250 },
    { "14",	471250 },
    { "15",	477250 },
    { "16",	483250 },
    { "17",	489250 },
    { "18",	495250 },
    { "19",	501250 },
    { "20",	507250 },
    { "21",	513250 },
    { "22",	519250 },
    { "23",	525250 },
    { "24",	531250 },
    { "25",	537250 },
    { "26",	543250 },
    { "27",	549250 },
    { "28",	555250 },
    { "29",	561250 },
    { "30",	567250 },
    { "31",	573250 },
    { "32",	579250 },
    { "33",	585250 },
    { "34",	591250 },
    { "35",	597250 },
    { "36",	603250 },
    { "37",	609250 },
    { "38",	615250 },
    { "39",	621250 },
    { "40",	627250 },
    { "41",	633250 },
    { "42",	639250 },
    { "43",	645250 },
    { "44",	651250 },
    { "45",	657250 },
    { "46",	663250 },
    { "47",	669250 },
    { "48",	675250 },
    { "49",	681250 },
    { "50",	687250 },
    { "51",	693250 },
    { "52",	699250 },
    { "53",	705250 },
    { "54",	711250 },
    { "55",	717250 },
    { "56",	723250 },
    { "57",	729250 },
    { "58",	735250 },
    { "59",	741250 },
    { "60",	747250 },
    { "61",	753250 },
    { "62",	759250 },
    { "63",	765250 },
    { "64",	771250 },
    { "65",	777250 },
    { "66",	783250 },
    { "67",	789250 },
    { "68",	795250 },
    { "69",	801250 },

    { "70",	807250 },
    { "71",	813250 },
    { "72",	819250 },
    { "73",	825250 },
    { "74",	831250 },
    { "75",	837250 },
    { "76",	843250 },
    { "77",	849250 },
    { "78",	855250 },
    { "79",	861250 },
    { "80",	867250 },
    { "81",	873250 },
    { "82",	879250 },
    { "83",	885250 },
};

/* US cable */
static const struct v4l2_channel_list ntsc_cable[] = {
    { "1",	 73250 },
    { "2",	 55250 },
    { "3",	 61250 },
    { "4",	 67250 },
    { "5",	 77250 },
    { "6",	 83250 },
    { "7",	175250 },
    { "8",	181250 },
    { "9",	187250 },
    { "10",	193250 },
    { "11",	199250 },
    { "12",	205250 },

    { "13",	211250 },
    { "14",	121250 },
    { "15",	127250 },
    { "16",	133250 },
    { "17",	139250 },
    { "18",	145250 },
    { "19",	151250 },
    { "20",	157250 },

    { "21",	163250 },
    { "22",	169250 },
    { "23",	217250 },
    { "24",	223250 },
    { "25",	229250 },
    { "26",	235250 },
    { "27",	241250 },
    { "28",	247250 },
    { "29",	253250 },
    { "30",	259250 },
    { "31",	265250 },
    { "32",	271250 },
    { "33",	277250 },
    { "34",	283250 },
    { "35",	289250 },
    { "36",	295250 },
    { "37",	301250 },
    { "38",	307250 },
    { "39",	313250 },
    { "40",	319250 },
    { "41",	325250 },
    { "42",	331250 },
    { "43",	337250 },
    { "44",	343250 },
    { "45",	349250 },
    { "46",	355250 },
    { "47",	361250 },
    { "48",	367250 },
    { "49",	373250 },
    { "50",	379250 },
    { "51",	385250 },
    { "52",	391250 },
    { "53",	397250 },
    { "54",	403250 },
    { "55",	409250 },
    { "56",	415250 },
    { "57",	421250 },
    { "58",	427250 },
    { "59",	433250 },
    { "60",	439250 },
    { "61",	445250 },
    { "62",	451250 },
    { "63",	457250 },
    { "64",	463250 },
    { "65",	469250 },
    { "66",	475250 },
    { "67",	481250 },
    { "68",	487250 },
    { "69",	493250 },

    { "70",	499250 },
    { "71",	505250 },
    { "72",	511250 },
    { "73",	517250 },
    { "74",	523250 },
    { "75",	529250 },
    { "76",	535250 },
    { "77",	541250 },
    { "78",	547250 },
    { "79",	553250 },
    { "80",	559250 },
    { "81",	565250 },
    { "82",	571250 },
    { "83",	577250 },
    { "84",	583250 },
    { "85",	589250 },
    { "86",	595250 },
    { "87",	601250 },
    { "88",	607250 },
    { "89",	613250 },
    { "90",	619250 },
    { "91",	625250 },
    { "92",	631250 },
    { "93",	637250 },
    { "94",	643250 },
    { "95",	 91250 },
    { "96",	 97250 },
    { "97",	103250 },
    { "98",	109250 },
    { "99",	115250 },
    { "100",	649250 },
    { "101",	655250 },
    { "102",	661250 },
    { "103",	667250 },
    { "104",	673250 },
    { "105",	679250 },
    { "106",	685250 },
    { "107",	691250 },
    { "108",	697250 },
    { "109",	703250 },
    { "110",	709250 },
    { "111",	715250 },
    { "112",	721250 },
    { "113",	727250 },
    { "114",	733250 },
    { "115",	739250 },
    { "116",	745250 },
    { "117",	751250 },
    { "118",	757250 },
    { "119",	763250 },
    { "120",	769250 },
    { "121",	775250 },
    { "122",	781250 },
    { "123",	787250 },
    { "124",	793250 },
    { "125",	799250 },

    { "T7", 	  8250 },
    { "T8",	 14250 },
    { "T9",	 20250 },
    { "T10",	 26250 },
    { "T11",	 32250 },
    { "T12",	 38250 },
    { "T13",	 44250 },
    { "T14",	 50250 }
};

/* US HRC */
static const struct v4l2_channel_list ntsc_hrc[] = {
    { "1",	  72000 },

    { "2",	  54000 },
    { "3",	  60000 },
    { "4",	  66000 },

    { "5",	  78000 },
    { "6",	  84000 },

    { "7",	 174000 },
    { "8",	 180000 },
    { "9",	 186000 },
    { "10",	 192000 },
    { "11",	 198000 },
    { "12",	 204000 },
    { "13",	 210000 },
    { "14",	 120000 },
    { "15",	 126000 },
    { "16",	 132000 },
    { "17",	 138000 },
    { "18",	 144000 },
    { "19",	 150000 },
    { "20",	 156000 },
    { "21",	 162000 },
    { "22",	 168000 },
    { "23",	 216000 },
    { "24",	 222000 },
    { "25",	 228000 },
    { "26",	 234000 },
    { "27",	 240000 },
    { "28",	 246000 },
    { "29",	 252000 },
    { "30",	 258000 },
    { "31",	 264000 },
    { "32",	 270000 },
    { "33",	 276000 },
    { "34",	 282000 },
    { "35",	 288000 },
    { "36",	 294000 },
    { "37",	 300000 },
    { "38",	 306000 },
    { "39",	 312000 },
    { "40",	 318000 },
    { "41",	 324000 },
    { "42",	 330000 },
    { "43",	 336000 },
    { "44",	 342000 },
    { "45",	 348000 },
    { "46",	 354000 },
    { "47",	 360000 },
    { "48",	 366000 },
    { "49",	 372000 },
    { "50",	 378000 },
    { "51",	 384000 },
    { "52",	 390000 },
    { "53",	 396000 },
    { "54",	 402000 },
    { "55",	 408000 },
    { "56",	 414000 },
    { "57",	 420000 },
    { "58",	 426000 },
    { "59",	 432000 },
    { "60",	 438000 },
    { "61",	 444000 },
    { "62",	 450000 },
    { "63",	 456000 },
    { "64",	 462000 },
    { "65",	 468000 },
    { "66",	 474000 },
    { "67",	 480000 },
    { "68",	 486000 },
    { "69",	 492000 },
    { "70",	 498000 },
    { "71",	 504000 },
    { "72",	 510000 },
    { "73",	 516000 },
    { "74",	 522000 },
    { "75",	 528000 },
    { "76",	 534000 },
    { "77",	 540000 },
    { "78",	 546000 },
    { "79",	 552000 },
    { "80",	 558000 },
    { "81",	 564000 },
    { "82",	 570000 },
    { "83",	 576000 },
    { "84",	 582000 },
    { "85",	 588000 },
    { "86",	 594000 },
    { "87",	 600000 },
    { "88",	 606000 },
    { "89",	 612000 },
    { "90",	 618000 },
    { "91",	 624000 },
    { "92",	 630000 },
    { "93",	 636000 },
    { "94",	 642000 },

    { "95",	  90000 },
    { "96",	  96000 },
    { "97",	 102000 },
    { "98",	 108000 },
    { "99",	 114000 },

    { "100",	 648000 },
    { "101",	 654000 },
    { "102",	 660000 },
    { "103",	 666000 },
    { "104",	 672000 },
    { "105",	 678000 },
    { "106",	 684000 },
    { "107",	 690000 },
    { "108",	 696000 },
    { "109",	 702000 },
    { "110",	 708000 },
    { "111",	 714000 },
    { "112",	 720000 },
    { "113",	 726000 },
    { "114",	 732000 },
    { "115",	 738000 },
    { "116",	 744000 },
    { "117",	 750000 },
    { "118",	 756000 },
    { "119",	 762000 },
    { "120",	 768000 },
    { "121",	 774000 },
    { "122",	 780000 },
    { "123",	 786000 },
    { "124",	 792000 },
    { "125",	 798000 },

    { "T7",	   7000 },
    { "T8",	  13000 },
    { "T9",	  19000 },
    { "T10",	  25000 },
    { "T11",	  31000 },
    { "T12",	  37000 },
    { "T13",	  43000 },
    { "T14",	  49000 },
};

/* US IRC */
static const struct v4l2_channel_list ntsc_irc[] = {
    { "1",      73250 },
    { "2",      55250 },
    { "3",      61250 },
    { "4",      67250 },
    { "5",      79250 },
    { "6",      85250 },
    { "7",     175250 },
    { "8",     181250 },
    { "9",     187250 },
    { "10",    193250 },
    { "11",    199250 },
    { "12",    205250 },
    { "13",    211250 },

    { "14",    121150 },
    { "15",    127150 },
    { "16",    133150 },
    { "17",    139150 },
    { "18",    145150 },
    { "19",    151150 },
    { "20",    157150 },
    { "21",    163150 },
    { "22",    169150 },

    { "23",    217250 },
    { "24",    223250 },
    { "25",    229250 },
    { "26",    235250 },
    { "27",    241250 },
    { "28",    247250 },
    { "29",    253250 },
    { "30",    259250 },
    { "31",    265250 },
    { "32",    271250 },
    { "33",    277250 },
    { "34",    283250 },
    { "35",    289250 },
    { "36",    295250 },
    { "37",    301250 },
    { "38",    307250 },
    { "39",    313250 },
    { "40",    319250 },
    { "41",    325250 },
    { "42",    331250 },
    { "43",    337250 },
    { "44",    343250 },
    { "45",    349250 },
    { "46",    355250 },
    { "47",    361250 },
    { "48",    367250 },
    { "49",    373250 },
    { "50",    379250 },
    { "51",    385250 },
    { "52",    391250 },
    { "53",    397250 },
    { "54",    403250 },
    { "55",    409250 },
    { "56",    415250 },
    { "57",    421250 },
    { "58",    427250 },
    { "59",    433250 },
    { "60",    439250 },
    { "61",    445250 },
    { "62",    451250 },
    { "63",    457250 },
    { "64",    463250 },
    { "65",    469250 },
    { "66",    475250 },
    { "67",    481250 },
    { "68",    487250 },
    { "69",    493250 },
    { "70",    499250 },
    { "71",    505250 },
    { "72",    511250 },
    { "73",    517250 },
    { "74",    523250 },
    { "75",    529250 },
    { "76",    535250 },
    { "77",    541250 },
    { "78",    547250 },
    { "79",    553250 },
    { "80",    559250 },
    { "81",    565250 },
    { "82",    571250 },
    { "83",    577250 },
    { "84",    583250 },
    { "85",    589250 },
    { "86",    595250 },
    { "87",    601250 },
    { "88",    607250 },
    { "89",    613250 },
    { "90",    619250 },
    { "91",    625250 },
    { "92",    631250 },
    { "93",    637250 },
    { "94",    643250 },

    { "95",     91250 },
    { "96",     97250 },
    { "97",    103250 },
    { "98",    109250 },
    { "99",    115250 },
    { "100",   649250 },
    { "101",   655250 },
    { "102",   661250 },
    { "103",   667250 },
    { "104",   673250 },
    { "105",   679250 },
    { "106",   685250 },
    { "107",   691250 },
    { "108",   697250 },
    { "109",   703250 },
    { "110",   709250 },
    { "111",   715250 },
    { "112",   721250 },
    { "113",   727250 },
    { "114",   733250 },
    { "115",   739250 },
    { "116",   745250 },
    { "117",   751250 },
    { "118",   757250 },
    { "119",   763250 },
    { "120",   769250 },
    { "121",   775250 },
    { "122",   781250 },
    { "123",   787250 },
    { "124",   793250 },
    { "125",   799250 },

    { "T7",      8250 },
    { "T8",     14250 },
    { "T9",     20250 },
    { "T10",    26250 },
    { "T11",    32250 },
    { "T12",    38250 },
    { "T13",    44250 },
    { "T14",    50250 }
};


/* --------------------------------------------------------------------- */

/* JP broadcast */
static const struct v4l2_channel_list ntsc_bcast_jp[] = {
    { "1",   91250 },
    { "2",   97250 },
    { "3",  103250 },
    { "4",  171250 },
    { "5",  177250 },
    { "6",  183250 },
    { "7",  189250 },
    { "8",  193250 },
    { "9",  199250 },
    { "10", 205250 },
    { "11", 211250 },
    { "12", 217250 },

    { "13", 471250 },
    { "14", 477250 },
    { "15", 483250 },
    { "16", 489250 },
    { "17", 495250 },
    { "18", 501250 },
    { "19", 507250 },
    { "20", 513250 },
    { "21", 519250 },
    { "22", 525250 },
    { "23", 531250 },
    { "24", 537250 },
    { "25", 543250 },
    { "26", 549250 },
    { "27", 555250 },
    { "28", 561250 },
    { "29", 567250 },
    { "30", 573250 },
    { "31", 579250 },
    { "32", 585250 },
    { "33", 591250 },
    { "34", 597250 },
    { "35", 603250 },
    { "36", 609250 },
    { "37", 615250 },
    { "38", 621250 },
    { "39", 627250 },
    { "40", 633250 },
    { "41", 639250 },
    { "42", 645250 },
    { "43", 651250 },
    { "44", 657250 },

    { "45", 663250 },
    { "46", 669250 },
    { "47", 675250 },
    { "48", 681250 },
    { "49", 687250 },
    { "50", 693250 },
    { "51", 699250 },
    { "52", 705250 },
    { "53", 711250 },
    { "54", 717250 },
    { "55", 723250 },
    { "56", 729250 },
    { "57", 735250 },
    { "58", 741250 },
    { "59", 747250 },
    { "60", 753250 },
    { "61", 759250 },
    { "62", 765250 },
};

/* JP cable */
static const struct v4l2_channel_list ntsc_cable_jp[] = {
    { "13",	109250 },
    { "14",	115250 },
    { "15",	121250 },
    { "16",	127250 },
    { "17",	133250 },
    { "18",	139250 },
    { "19",	145250 },
    { "20",	151250 },

    { "21",	157250 },
    { "22",	165250 },
    { "23",	223250 },
    { "24",	231250 },
    { "25",	237250 },
    { "26",	243250 },
    { "27",	249250 },
    { "28",	253250 },
    { "29",	259250 },
    { "30",	265250 },
    { "31",	271250 },
    { "32",	277250 },
    { "33",	283250 },
    { "34",	289250 },
    { "35",	295250 },
    { "36",	301250 },
    { "37",	307250 },
    { "38",	313250 },
    { "39",	319250 },
    { "40",	325250 },
    { "41",	331250 },
    { "42",	337250 },
    { "43",	343250 },
    { "44",	349250 },
    { "45", 	355250 },
    { "46", 	361250 },
    { "47", 	367250 },
    { "48", 	373250 },
    { "49", 	379250 },
    { "50", 	385250 },
    { "51", 	391250 },
    { "52", 	397250 },
    { "53", 	403250 },
    { "54", 	409250 },
    { "55", 	415250 },
    { "56", 	421250 },
    { "57", 	427250 },
    { "58", 	433250 },
    { "59", 	439250 },
    { "60", 	445250 },
    { "61", 	451250 },
    { "62", 	457250 },
    { "63",	463250 },
};

/* --------------------------------------------------------------------- */

/* australia */
static const struct v4l2_channel_list pal_australia[] = {
    { "0",	 46250 },
    { "1",	 57250 },
    { "2",	 64250 },
    { "3",	 86250 },
    { "4",  	 95250 },
    { "5",  	102250 },
    { "5A",  	138250 },
    { "6",  	175250 },
    { "7",  	182250 },
    { "8",  	189250 },
    { "9",  	196250 },
    { "10", 	209250 },
    { "11",	216250 },
    { "28",	527250 },
    { "29",	534250 },
    { "30",	541250 },
    { "31",	548250 },
    { "32",	555250 },
    { "33",	562250 },
    { "34",	569250 },
    { "35",	576250 },
    { "36",     591250 },
    { "39",	604250 },
    { "40",	611250 },
    { "41",	618250 },
    { "42",	625250 },
    { "43",	632250 },
    { "44",	639250 },
    { "45",	646250 },
    { "46",	653250 },
    { "47",	660250 },
    { "48",	667250 },
    { "49",	674250 },
    { "50",	681250 },
    { "51",	688250 },
    { "52",	695250 },
    { "53",	702250 },
    { "54",	709250 },
    { "55",	716250 },
    { "56",	723250 },
    { "57",	730250 },
    { "58",	737250 },
    { "59",	744250 },
    { "60",	751250 },
    { "61",	758250 },
    { "62",	765250 },
    { "63",	772250 },
    { "64",	779250 },
    { "65",	786250 },
    { "66",	793250 },
    { "67",	800250 },
    { "68",	807250 },
    { "69",	814250 },
};

static const struct v4l2_channel_list pal_australia_optus[] = {
   { "1",  138250 },
   { "2",  147250 },
   { "3",  154250 },
   { "4",  161250 },
   { "5",  168250 },
   { "6",  175250 },
   { "7",  182250 },
   { "8",  189250 },
   { "9",  196250 },
   { "10", 209250 },
   { "11", 216250 },
   { "12", 224250 },
   { "13", 231250 },
   { "14", 238250 },
   { "15", 245250 },
   { "16", 252250 },
   { "17", 259250 },
   { "18", 266250 },
   { "19", 273250 },
   { "20", 280250 },
   { "21", 287250 },
   { "22", 294250 },
   { "23", 303250 },
   { "24", 310250 },
   { "25", 317250 },
   { "26", 324250 },
   { "27", 338250 },
   { "28", 345250 },
   { "29", 352250 },
   { "30", 359250 },
   { "31", 366250 },
   { "32", 373250 },
   { "33", 380250 },
   { "34", 387250 },
   { "35", 394250 },
   { "36", 401250 },
   { "37", 408250 },
   { "38", 415250 },
   { "39", 422250 },
   { "40", 429250 },
   { "41", 436250 },
   { "42", 443250 },
   { "43", 450250 },
   { "44", 457250 },
   { "45", 464250 },
   { "46", 471250 },
   { "47", 478250 },
   { "48", 485250 },
   { "49", 492250 },
   { "50", 499250 },
   { "51", 506250 },
   { "52", 513250 },
   { "53", 520250 },
   { "54", 527250 },
   { "55", 534250 },
};


/* --------------------------------------------------------------------- */
/* europe                                                                */

/* CCIR frequencies */

#define FREQ_CCIR_I_III		\
    { "E2",	  48250 },	\
    { "E3",	  55250 },	\
    { "E4",	  62250 },	\
				\
    { "S01",	  69250 },	\
    { "S02",	  76250 },	\
    { "S03",	  83250 },	\
				\
    { "E5",	 175250 },	\
    { "E6",	 182250 },	\
    { "E7",	 189250 },	\
    { "E8",	 196250 },	\
    { "E9",	 203250 },	\
    { "E10",	 210250 },	\
    { "E11",	 217250 },	\
    { "E12",	 224250 }

#define FREQ_CCIR_SL_SH		\
    { "SE1",	 105250 },	\
    { "SE2",	 112250 },	\
    { "SE3",	 119250 },	\
    { "SE4",	 126250 },	\
    { "SE5",	 133250 },	\
    { "SE6",	 140250 },	\
    { "SE7",	 147250 },	\
    { "SE8",	 154250 },	\
    { "SE9",	 161250 },	\
    { "SE10",    168250 },	\
				\
    { "SE11",    231250 },	\
    { "SE12",    238250 },	\
    { "SE13",    245250 },	\
    { "SE14",    252250 },	\
    { "SE15",    259250 },	\
    { "SE16",    266250 },	\
    { "SE17",    273250 },	\
    { "SE18",    280250 },	\
    { "SE19",    287250 },	\
    { "SE20",    294250 }

#define FREQ_CCIR_H	\
    { "S21", 303250 },	\
    { "S22", 311250 },	\
    { "S23", 319250 },	\
    { "S24", 327250 },	\
    { "S25", 335250 },	\
    { "S26", 343250 },	\
    { "S27", 351250 },	\
    { "S28", 359250 },	\
    { "S29", 367250 },	\
    { "S30", 375250 },	\
    { "S31", 383250 },	\
    { "S32", 391250 },	\
    { "S33", 399250 },	\
    { "S34", 407250 },	\
    { "S35", 415250 },	\
    { "S36", 423250 },	\
    { "S37", 431250 },	\
    { "S38", 439250 },	\
    { "S39", 447250 },	\
    { "S40", 455250 },	\
    { "S41", 463250 }

/* OIRT frequencies */

#define FREQ_OIRT_I_III		\
    { "R1",       49750 },	\
    { "R2",       59250 },	\
				\
    { "R3",       77250 },	\
    { "R4",       85250 },	\
    { "R5",       93250 },	\
				\
    { "R6",	 175250 },	\
    { "R7",	 183250 },	\
    { "R8",	 191250 },	\
    { "R9",	 199250 },	\
    { "R10",	 207250 },	\
    { "R11",	 215250 },	\
    { "R12",	 223250 }

#define FREQ_OIRT_SL_SH		\
    { "SR1",	 111250 },	\
    { "SR2",	 119250 },	\
    { "SR3",	 127250 },	\
    { "SR4",	 135250 },	\
    { "SR5",	 143250 },	\
    { "SR6",	 151250 },	\
    { "SR7",	 159250 },	\
    { "SR8",	 167250 },	\
				\
    { "SR11",    231250 },	\
    { "SR12",    239250 },	\
    { "SR13",    247250 },	\
    { "SR14",    255250 },	\
    { "SR15",    263250 },	\
    { "SR16",    271250 },	\
    { "SR17",    279250 },	\
    { "SR18",    287250 },	\
    { "SR19",    295250 }

#define FREQ_UHF	\
    { "21",  471250 },	\
    { "22",  479250 },	\
    { "23",  487250 },	\
    { "24",  495250 },	\
    { "25",  503250 },	\
    { "26",  511250 },	\
    { "27",  519250 },	\
    { "28",  527250 },	\
    { "29",  535250 },	\
    { "30",  543250 },	\
    { "31",  551250 },	\
    { "32",  559250 },	\
    { "33",  567250 },	\
    { "34",  575250 },	\
    { "35",  583250 },	\
    { "36",  591250 },	\
    { "37",  599250 },	\
    { "38",  607250 },	\
    { "39",  615250 },	\
    { "40",  623250 },	\
    { "41",  631250 },	\
    { "42",  639250 },	\
    { "43",  647250 },	\
    { "44",  655250 },	\
    { "45",  663250 },	\
    { "46",  671250 },	\
    { "47",  679250 },	\
    { "48",  687250 },	\
    { "49",  695250 },	\
    { "50",  703250 },	\
    { "51",  711250 },	\
    { "52",  719250 },	\
    { "53",  727250 },	\
    { "54",  735250 },	\
    { "55",  743250 },	\
    { "56",  751250 },	\
    { "57",  759250 },	\
    { "58",  767250 },	\
    { "59",  775250 },	\
    { "60",  783250 },	\
    { "61",  791250 },	\
    { "62",  799250 },	\
    { "63",  807250 },	\
    { "64",  815250 },	\
    { "65",  823250 },	\
    { "66",  831250 },	\
    { "67",  839250 },	\
    { "68",  847250 },	\
    { "69",  855250 }

static const struct v4l2_channel_list europe_west[] = {
    FREQ_CCIR_I_III,
    FREQ_CCIR_SL_SH,
    FREQ_CCIR_H,
    FREQ_UHF
};

static const struct v4l2_channel_list europe_east[] = {
    FREQ_OIRT_I_III,
    FREQ_OIRT_SL_SH,
    FREQ_CCIR_I_III,
    FREQ_CCIR_SL_SH,
    FREQ_CCIR_H,
    FREQ_UHF
};

static const struct v4l2_channel_list pal_italy[] = {
    { "A",	 53750 },
    { "B",	 62250 },
    { "C",	 82250 },
    { "D",	175250 },
    { "E",	183750 },
    { "F",	192250 },
    { "G",	201250 },
    { "H",	210250 },
    { "H1",	217250 },
    { "H2",	224250 },
    FREQ_UHF
};

static const struct v4l2_channel_list pal_ireland[] = {
    { "A0",    45750 },
    { "A1",    48000 },
    { "A2",    53750 },
    { "A3",    56000 },
    { "A4",    61750 },
    { "A5",    64000 },
    { "A6",   175250 },
    { "A7",   176000 },
    { "A8",   183250 },
    { "A9",   184000 },
    { "A10",   191250 },
    { "A11",   192000 },
    { "A12",   199250 },
    { "A13",   200000 },
    { "A14",   207250 },
    { "A15",   208000 },
    { "A16",   215250 },
    { "A17",   216000 },
    { "A18",   224000 },
    { "A19",   232000 },
    { "A20",   248000 },
    { "A21",   256000 },
    { "A22",   264000 },
    { "A23",   272000 },
    { "A24",   280000 },
    { "A25",   288000 },
    { "A26",   296000 },
    { "A27",   304000 },
    { "A28",   312000 },
    { "A29",   320000 },
    { "A30",   344000 },
    { "A31",   352000 },
    { "A32",   408000 },
    { "A33",   416000 },
    { "A34",   448000 },
    { "A35",   480000 },
    { "A36",   520000 },
    FREQ_UHF,
};

static const struct v4l2_channel_list secam_france[] = {
    { "K01",    47750 },
    { "K02",    55750 },
    { "K03",    60500 },
    { "K04",    63750 },
    { "K05",   176000 },
    { "K06",   184000 },
    { "K07",   192000 },
    { "K08",   200000 },
    { "K09",   208000 },
    { "K10",   216000 },
    { "KB",    116750 },
    { "KC",    128750 },
    { "KD",    140750 },
    { "KE",    159750 },
    { "KF",    164750 },
    { "KG",    176750 },
    { "KH",    188750 },
    { "KI",    200750 },
    { "KJ",    212750 },
    { "KK",    224750 },
    { "KL",    236750 },
    { "KM",    248750 },
    { "KN",    260750 },
    { "KO",    272750 },
    { "KP",    284750 },
    { "KQ",    296750 },
    { "H01",   303250 },
    { "H02",   311250 },
    { "H03",   319250 },
    { "H04",   327250 },
    { "H05",   335250 },
    { "H06",   343250 },
    { "H07",   351250 },
    { "H08",   359250 },
    { "H09",   367250 },
    { "H10",   375250 },
    { "H11",   383250 },
    { "H12",   391250 },
    { "H13",   399250 },
    { "H14",   407250 },
    { "H15",   415250 },
    { "H16",   423250 },
    { "H17",   431250 },
    { "H18",   439250 },
    { "H19",   447250 },
    FREQ_UHF,
};

/* --------------------------------------------------------------------- */

static const struct v4l2_channel_list pal_newzealand[] = {
    { "1", 	  45250 },
    { "2",	  55250 },
    { "3",	  62250 },
    { "4",	 175250 },
    { "5",	 182250 },
    { "6",	 189250 },
    { "7",	 196250 },
    { "8",	 203250 },
    { "9",	 210250 },
    { "10",	 217250 },
    { "11",	 224250 },
    FREQ_UHF,
};

/* --------------------------------------------------------------------- */

/* China broadcast */
static const struct v4l2_channel_list pal_bcast_cn[] = {
    { "1",	49750 },
    { "2",	57750 },
    { "3",	65750 },
    { "4",	77250 },
    { "5",	85250 },
    { "6",	112250 },
    { "7",	120250 },
    { "8",	128250 },
    { "9",	136250 },
    { "10",	144250 },
    { "11",	152250 },
    { "12",	160250 },
    { "13",	168250 },
    { "14",	176250 },
    { "15",	184250 },
    { "16",	192250 },
    { "17",	200250 },
    { "18",	208250 },
    { "19",	216250 },
    { "20",	224250 },
    { "21",	232250 },
    { "22",	240250 },
    { "23",	248250 },
    { "24",	256250 },
    { "25",	264250 },
    { "26",	272250 },
    { "27",	280250 },
    { "28",	288250 },
    { "29",	296250 },
    { "30",	304250 },
    { "31",	312250 },
    { "32",	320250 },
    { "33",	328250 },
    { "34",	336250 },
    { "35",	344250 },
    { "36",	352250 },
    { "37",	360250 },
    { "38",	368250 },
    { "39",	376250 },
    { "40",	384250 },
    { "41",	392250 },
    { "42",	400250 },
    { "43",	408250 },
    { "44",	416250 },
    { "45",	424250 },
    { "46",	432250 },
    { "47",	440250 },
    { "48",	448250 },
    { "49",	456250 },
    { "50",	463250 },
    { "51",	471250 },
    { "52",	479250 },
    { "53",	487250 },
    { "54",	495250 },
    { "55",	503250 },
    { "56",	511250 },
    { "57",	519250 },
    { "58",	527250 },
    { "59",	535250 },
    { "60",	543250 },
    { "61",	551250 },
    { "62",	559250 },
    { "63",	607250 },
    { "64",	615250 },
    { "65",	623250 },
    { "66",	631250 },
    { "67",	639250 },
    { "68",	647250 },
    { "69",	655250 },
    { "70",	663250 },
    { "71",	671250 },
    { "72",	679250 },
    { "73",	687250 },
    { "74",	695250 },
    { "75",	703250 },
    { "76",	711250 },
    { "77",	719250 },
    { "78",	727250 },
    { "79",	735250 },
    { "80",	743250 },
    { "81",	751250 },
    { "82",	759250 },
    { "83",	767250 },
    { "84",	775250 },
    { "85",	783250 },
    { "86",	791250 },
    { "87",	799250 },
    { "88",	807250 },
    { "89",	815250 },
    { "90",	823250 },
    { "91",	831250 },
    { "92",	839250 },
    { "93",	847250 },
    { "94",	855250 },
};

/* --------------------------------------------------------------------- */
/* South Africa Broadcast */

static const struct v4l2_channel_list pal_bcast_za[] ={
    { "4", 175250 },
    { "5", 183250 },
    { "6", 191250 },
    { "7", 199250 },
    { "8", 207250 },
    { "9", 215250 },
    { "10", 223250 },
    { "11", 231250 },
    { "12", 239250 },
    { "13", 247250 },
    FREQ_UHF
};

/* --------------------------------------------------------------------- */

static const struct v4l2_channel_list argentina[] = {
    { "001",   56250 },
    { "002",   62250 },
    { "003",   68250 },
    { "004",   78250 },
    { "005",   84250 },
    { "006",  176250 },
    { "007",  182250 },
    { "008",  188250 },
    { "009",  194250 },
    { "010",  200250 },
    { "011",  206250 },
    { "012",  212250 },
    { "013",  122250 },
    { "014",  128250 },
    { "015",  134250 },
    { "016",  140250 },
    { "017",  146250 },
    { "018",  152250 },
    { "019",  158250 },
    { "020",  164250 },
    { "021",  170250 },
    { "022",  218250 },
    { "023",  224250 },
    { "024",  230250 },
    { "025",  236250 },
    { "026",  242250 },
    { "027",  248250 },
    { "028",  254250 },
    { "029",  260250 },
    { "030",  266250 },
    { "031",  272250 },
    { "032",  278250 },
    { "033",  284250 },
    { "034",  290250 },
    { "035",  296250 },
    { "036",  302250 },
    { "037",  308250 },
    { "038",  314250 },
    { "039",  320250 },
    { "040",  326250 },
    { "041",  332250 },
    { "042",  338250 },
    { "043",  344250 },
    { "044",  350250 },
    { "045",  356250 },
    { "046",  362250 },
    { "047",  368250 },
    { "048",  374250 },
    { "049",  380250 },
    { "050",  386250 },
    { "051",  392250 },
    { "052",  398250 },
    { "053",  404250 },
    { "054",  410250 },
    { "055",  416250 },
    { "056",  422250 },
    { "057",  428250 },
    { "058",  434250 },
    { "059",  440250 },
    { "060",  446250 },
    { "061",  452250 },
    { "062",  458250 },
    { "063",  464250 },
    { "064",  470250 },
    { "065",  476250 },
    { "066",  482250 },
    { "067",  488250 },
    { "068",  494250 },
    { "069",  500250 },
    { "070",  506250 },
    { "071",  512250 },
    { "072",  518250 },
    { "073",  524250 },
    { "074",  530250 },
    { "075",  536250 },
    { "076",  542250 },
    { "077",  548250 },
    { "078",  554250 },
    { "079",  560250 },
    { "080",  566250 },
    { "081",  572250 },
    { "082",  578250 },
    { "083",  584250 },
    { "084",  590250 },
    { "085",  596250 },
    { "086",  602250 },
    { "087",  608250 },
    { "088",  614250 },
    { "089",  620250 },
    { "090",  626250 },
    { "091",  632250 },
    { "092",  638250 },
    { "093",  644250 },
};

/* --------------------------------------------------------------------- */

#define CHAN_COUNT(x) (sizeof(x)/sizeof(struct v4l2_channel_list))

const struct v4l2_channel_lists v4l2_channel_lists[] = {
    { "us-bcast",         ntsc_bcast,        	CHAN_COUNT(ntsc_bcast)        	},
    { "us-cable",         ntsc_cable,        	CHAN_COUNT(ntsc_cable)        	},
    { "us-cable-hrc",     ntsc_hrc,          	CHAN_COUNT(ntsc_hrc)          	},
    { "us-cable-irc",     ntsc_irc,          	CHAN_COUNT(ntsc_irc)          	},
    { "japan-bcast",      ntsc_bcast_jp,     	CHAN_COUNT(ntsc_bcast_jp)     	},
    { "japan-cable",      ntsc_cable_jp,     	CHAN_COUNT(ntsc_cable_jp)     	},
    { "europe-west",      europe_west,       	CHAN_COUNT(europe_west)       	},
    { "europe-east",      europe_east,       	CHAN_COUNT(europe_east)       	},
    { "italy",		  pal_italy,         	CHAN_COUNT(pal_italy)         	},
    { "newzealand",       pal_newzealand,    	CHAN_COUNT(pal_newzealand)    	},
    { "australia",        pal_australia,     	CHAN_COUNT(pal_australia)     	},
    { "ireland",          pal_ireland,       	CHAN_COUNT(pal_ireland)       	},
    { "france",           secam_france,      	CHAN_COUNT(secam_france)      	},
    { "china-bcast",      pal_bcast_cn,      	CHAN_COUNT(pal_bcast_cn)      	},
    { "southafrica",      pal_bcast_za,      	CHAN_COUNT(pal_bcast_za)      	},
    { "argentina",        argentina,         	CHAN_COUNT(argentina)         	},
    { "australia-optus",  pal_australia_optus, 	CHAN_COUNT(pal_australia_optus) },
    { NULL, NULL, 0 } /* EOF */
};

/* This list contains omissions and almost certainly incorrect information.
   Please provide me (Hans Verkuil, <hverkuil@xs4all.nl>) with corrections. */
const struct v4l2_country_std_map v4l2_country_std_map[] = {
	{ "AE", V4L2_STD_PAL_BG   }, /* United Arab Emirates */
	{ "AF", V4L2_STD_SECAM_D  }, /* Afghanistan */
	{ "AG", V4L2_STD_NTSC_M   }, /* Antigua */
	{ "AL", V4L2_STD_PAL_BG   }, /* Albania */
	{ "AM", V4L2_STD_SECAM_DK }, /* Armenia */
	{ "AN", V4L2_STD_NTSC_M   }, /* Netherlands Antilles */
	{ "AO", V4L2_STD_PAL_I    }, /* Angola */
	{ "AR", V4L2_STD_PAL_Nc   }, /* Argentina */
	{ "AT", V4L2_STD_PAL_BG   }, /* Austria */
	{ "AU", V4L2_STD_PAL_B    }, /* Australia */
	{ "AW", V4L2_STD_NTSC_M   }, /* Aruba */
	{ "AZ", V4L2_STD_SECAM_DK }, /* Azerbaijan */
	{ "BA", V4L2_STD_PAL_BG   }, /* Bosnia and Herzegovina */
	{ "BB", V4L2_STD_NTSC_M   }, /* Barbados */
	{ "BD", V4L2_STD_PAL_B    }, /* Bangladesh */
	{ "BE", V4L2_STD_PAL_B | V4L2_STD_PAL_H }, /* Belgium */
	{ "BF", V4L2_STD_SECAM_K1 }, /* Burkina Faso */
	{ "BG", V4L2_STD_SECAM_DK }, /* Bulgaria */
	{ "BH", V4L2_STD_PAL_BG   }, /* Bahrain */
	{ "BI", V4L2_STD_SECAM_K1 }, /* Burundi */
	{ "BJ", V4L2_STD_SECAM_K1 }, /* Benin */
	{ "BM", V4L2_STD_NTSC_M   }, /* Bermuda */
	{ "BN", V4L2_STD_PAL_B    }, /* Brunei Darussalam */
	{ "BO", V4L2_STD_NTSC_M   }, /* Bolivia */
	{ "BR", V4L2_STD_PAL_M    }, /* Brazil */
	{ "BS", V4L2_STD_NTSC_M   }, /* Bahamas */
	{ "BW", V4L2_STD_PAL_I    }, /* Botswana */
	{ "BY", V4L2_STD_SECAM_D  }, /* Belarus */
	{ "BZ", V4L2_STD_NTSC_M   }, /* Belize */
	{ "CA", V4L2_STD_NTSC_M   }, /* Canada */
	{ "CD", V4L2_STD_SECAM_K1 }, /* The Democratic Republic of the Congo */
	{ "CF", V4L2_STD_SECAM_K1 }, /* Central African Republic */
	{ "CG", V4L2_STD_SECAM_K1 }, /* Republic of the Congo */
	{ "CH", V4L2_STD_PAL_BG   }, /* Switzerland */
	{ "CL", V4L2_STD_NTSC_M   }, /* Chile */
	{ "CM", V4L2_STD_PAL_BG   }, /* Cameroon */
	{ "CN", V4L2_STD_PAL_D    }, /* China */
	{ "CO", V4L2_STD_NTSC_M   }, /* Colombia */
	{ "CR", V4L2_STD_NTSC_M   }, /* Costa Rica */
	{ "CU", V4L2_STD_NTSC_M   }, /* Cuba */
	{ "CY", V4L2_STD_PAL_BG   }, /* Cyprus */
	{ "CZ", V4L2_STD_PAL_D    }, /* Czech Republic */
	{ "DE", V4L2_STD_PAL_BG   }, /* Germany */
	{ "DJ", V4L2_STD_SECAM_B  }, /* Djibouti */
	{ "DK", V4L2_STD_PAL_BG   }, /* Denmark */
	{ "DO", V4L2_STD_NTSC_M   }, /* Dominican Republic */
	{ "DZ", V4L2_STD_PAL_BG   }, /* Algeria */
	{ "EC", V4L2_STD_NTSC_M   }, /* Ecuador */
	{ "EE", V4L2_STD_SECAM_DK }, /* Estonia */
	{ "EG", V4L2_STD_PAL_BG   }, /* Egypt */
	{ "ES", V4L2_STD_PAL_BG   }, /* Spain */
	{ "ET", V4L2_STD_PAL_BG   }, /* Ethiopia */
	{ "FI", V4L2_STD_PAL_BG   }, /* Finland */
	{ "FR", V4L2_STD_SECAM_L  }, /* France */
	{ "GA", V4L2_STD_SECAM_K1 }, /* Gabon */
	{ "GB", V4L2_STD_PAL_I    }, /* United Kingdom */
	{ "GE", V4L2_STD_SECAM_DK }, /* Georgia */
	{ "GH", V4L2_STD_PAL_B    }, /* Ghana */
	{ "GI", V4L2_STD_PAL_BG   }, /* Gibraltar */
	{ "GL", V4L2_STD_PAL_BG   }, /* Greenland */
	{ "GM", V4L2_STD_PAL_I    }, /* Gambia */
	{ "GQ", V4L2_STD_PAL_BG   }, /* Equatorial Guinea */
	{ "GR", V4L2_STD_SECAM_B  }, /* Greece */
	{ "GR", V4L2_STD_SECAM_G  }, /* Greece */
	{ "GT", V4L2_STD_NTSC_M   }, /* Guatemala */
	{ "GU", V4L2_STD_NTSC_M   }, /* Guam */
	{ "GW", V4L2_STD_PAL_I    }, /* Guinea-Bissau */
	{ "HK", V4L2_STD_PAL_I    }, /* Hong Kong */
	{ "HN", V4L2_STD_NTSC_M   }, /* Honduras */
	{ "HR", V4L2_STD_PAL_BG   }, /* Croatia */
	{ "HU", V4L2_STD_SECAM_DK }, /* Hungary */
	{ "ID", V4L2_STD_PAL_B    }, /* Indonesia */
	{ "IE", V4L2_STD_PAL_I    }, /* Ireland */
	{ "IL", V4L2_STD_PAL_BG   }, /* Israel */
	{ "IN", V4L2_STD_PAL_B    }, /* India */
	{ "IQ", V4L2_STD_SECAM_B | V4L2_STD_SECAM_G }, /* Iraq */
	{ "IR", V4L2_STD_SECAM_B | V4L2_STD_SECAM_G }, /* Iran */
	{ "IS", V4L2_STD_PAL_BG   }, /* Iceland */
	{ "IT", V4L2_STD_PAL_BG   }, /* Italy */
	{ "JM", V4L2_STD_NTSC_M   }, /* Jamaica */
	{ "JO", V4L2_STD_PAL_BG   }, /* Jordan */
	{ "JP", V4L2_STD_NTSC_M_JP }, /* Japan */
	{ "KE", V4L2_STD_PAL_BG   }, /* Kenya */
	{ "KH", V4L2_STD_PAL_BG   }, /* Cambodia */
	{ "KM", V4L2_STD_SECAM_K1 }, /* Comoros */
	{ "KN", V4L2_STD_NTSC_M   }, /* Saint Kitts and Nevis */
	{ "KP", V4L2_STD_PAL_D    }, /* North Korea */
	{ "KR", V4L2_STD_NTSC_M_KR }, /* South Korea */
	{ "KW", V4L2_STD_PAL_BG   }, /* Kuwait */
	{ "KZ", V4L2_STD_SECAM_D  }, /* Kazakhstan */
	{ "KZ", V4L2_STD_SECAM_K  }, /* Kazakhstan */
	{ "LB", V4L2_STD_SECAM_B  }, /* Lebanon */
	{ "LK", V4L2_STD_PAL_BG   }, /* Sri Lanka */
	{ "LR", V4L2_STD_PAL_BG   }, /* Liberia */
	{ "LS", V4L2_STD_PAL_I    }, /* Lesotho */
	{ "LT", V4L2_STD_SECAM_DK }, /* Lithuania */
	{ "LU", V4L2_STD_PAL_BG   }, /* Luxembourg */
	{ "LY", V4L2_STD_PAL_BG   }, /* Libya */
	{ "MA", V4L2_STD_SECAM_B | V4L2_STD_SECAM_G }, /* Morocco */
	{ "MC", V4L2_STD_PAL_G    }, /* Monaco */
	{ "MD", V4L2_STD_SECAM_DK }, /* Moldova */
	{ "MG", V4L2_STD_SECAM_K | V4L2_STD_SECAM_K1 }, /* Madagascar */
	{ "ML", V4L2_STD_SECAM_B | V4L2_STD_SECAM_G }, /* Mali */
	{ "MM", V4L2_STD_NTSC_M   }, /* Myanmar */
	{ "MN", V4L2_STD_SECAM_D  }, /* Mongolia */
	{ "MR", V4L2_STD_SECAM_B  }, /* Mauritania */
	{ "MS", V4L2_STD_NTSC_M   }, /* Montserrat */
	{ "MT", V4L2_STD_PAL_B    }, /* Malta */
	{ "MU", V4L2_STD_SECAM_B | V4L2_STD_SECAM_G }, /* Mauritius */
	{ "MV", V4L2_STD_PAL_B    }, /* Maldives */
	{ "MW", V4L2_STD_PAL_I    }, /* Malawi */
	{ "MX", V4L2_STD_NTSC_M   }, /* Mexico */
	{ "MY", V4L2_STD_PAL_BG   }, /* Malaysia */
	{ "MZ", V4L2_STD_PAL_G    }, /* Mozambique */
	{ "NA", V4L2_STD_PAL_I    }, /* Namibia */
	{ "NE", V4L2_STD_SECAM_K1 }, /* Niger */
	{ "NG", V4L2_STD_PAL_BG   }, /* Nigeria */
	{ "NI", V4L2_STD_NTSC_M   }, /* Nicaragua */
	{ "NL", V4L2_STD_PAL_BG   }, /* Netherlands */
	{ "NO", V4L2_STD_PAL_BG   }, /* Norway */
	{ "NP", V4L2_STD_PAL_B    }, /* Nepal */
	{ "NZ", V4L2_STD_PAL_BG   }, /* New Zealand */
	{ "OM", V4L2_STD_PAL_BG   }, /* Oman */
	{ "PA", V4L2_STD_NTSC_M   }, /* Panama */
	{ "PE", V4L2_STD_NTSC_M   }, /* Peru */
	{ "PG", V4L2_STD_PAL_BG   }, /* Papua New Guinea */
	{ "PH", V4L2_STD_NTSC_M   }, /* Philippines */
	{ "PK", V4L2_STD_PAL_BG   }, /* Pakistan */
	{ "PL", V4L2_STD_SECAM_K  }, /* Poland */
	{ "PR", V4L2_STD_NTSC_M   }, /* Puerto Rico */
	{ "PT", V4L2_STD_PAL_BG   }, /* Portugal */
	{ "PY", V4L2_STD_PAL_N    }, /* Paraguay */
	{ "QA", V4L2_STD_PAL_BG   }, /* Qatar */
	{ "RO", V4L2_STD_PAL_DK   }, /* Romania */
	{ "RU", V4L2_STD_SECAM_DK }, /* Russia */
	{ "RW", V4L2_STD_SECAM_K1 }, /* Rwanda */
	{ "SA", V4L2_STD_PAL_BG | V4L2_STD_SECAM_B | V4L2_STD_SECAM_G }, /* Saudi Arabia */
	{ "SC", V4L2_STD_PAL_B    }, /* Seychelles */
	{ "SD", V4L2_STD_PAL_BG   }, /* Sudan */
	{ "SE", V4L2_STD_PAL_BG   }, /* Sweden */
	{ "SG", V4L2_STD_PAL_BG   }, /* Singapore */
	{ "SI", V4L2_STD_PAL_BG   }, /* Slovenia */
	{ "SK", V4L2_STD_SECAM_DK }, /* Slovak Republic */
	{ "SL", V4L2_STD_PAL_BG   }, /* Sierra Leone */
	{ "SN", V4L2_STD_SECAM_K1 }, /* Senegal */
	{ "SO", V4L2_STD_PAL_BG   }, /* Somalia */
	{ "SR", V4L2_STD_NTSC_M   }, /* Suriname */
	{ "ST", V4L2_STD_PAL_B    }, /* Sao Tome and Principe */
	{ "SV", V4L2_STD_NTSC_M   }, /* El Salvador */
	{ "SY", V4L2_STD_PAL_BG   }, /* Syria */
	{ "SZ", V4L2_STD_PAL_BG   }, /* Swaziland */
	{ "TD", V4L2_STD_SECAM_K1 }, /* Chad */
	{ "TG", V4L2_STD_SECAM_K1 }, /* Togo */
	{ "TH", V4L2_STD_PAL_BG   }, /* Thailand */
	{ "TN", V4L2_STD_PAL_BG   }, /* Tunisia */
	{ "TR", V4L2_STD_PAL_BG   }, /* Turkey */
	{ "TT", V4L2_STD_NTSC_M   }, /* Trinidad and Tobago */
	{ "TW", V4L2_STD_NTSC_M   }, /* Taiwan */
	{ "TZ", V4L2_STD_PAL_I    }, /* Tanzania */
	{ "UA", V4L2_STD_SECAM_DK }, /* Ukraine */
	{ "UG", V4L2_STD_PAL_B    }, /* Uganda */
	{ "US", V4L2_STD_NTSC_M   }, /* United States */
	{ "UY", V4L2_STD_PAL_N    }, /* Uruguay */
	{ "VC", V4L2_STD_SECAM_K1 }, /* Cape Verde */
	{ "VE", V4L2_STD_NTSC_M   }, /* Venezuela */
	{ "VG", V4L2_STD_NTSC_M   }, /* Virgin Islands, British */
	{ "VI", V4L2_STD_NTSC_M   }, /* Virgin Islands, U.S. */
	{ "VN", V4L2_STD_SECAM_DK }, /* Vietnam */
	{ "WS", V4L2_STD_NTSC_M   }, /* Samoa */
	{ "YE", V4L2_STD_PAL_BG   }, /* Yemen */
	{ "ZA", V4L2_STD_PAL_I    }, /* South Africa */
	{ "ZM", V4L2_STD_PAL_G    }, /* Zambia */
	{ "ZW", V4L2_STD_PAL_G    }, /* Zimbabwe */
	{ NULL, 0 }
};
