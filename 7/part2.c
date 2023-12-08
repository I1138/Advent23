#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <sys/param.h>

#define INPUT_HANDS 1000
uint32_t input[INPUT_HANDS][2] = {
    {0x77776, 507},
    {0x26135, 214},
    {0x9999C, 314},
    {0x31DCD, 630},
    {0xEE77D, 94},
    {0x55E55, 372},
    {0x92514, 622},
    {0x788A2, 783},
    {0xE6E9E, 763},
    {0xD588D, 2},
    {0xDE61E, 601},
    {0x22DC7, 574},
    {0x59A95, 281},
    {0x4D973, 658},
    {0xE7A1A, 413},
    {0x6D212, 859},
    {0xDEDED, 528},
    {0x84EAA, 657},
    {0xA4792, 376},
    {0x5716C, 414},
    {0x23C2C, 466},
    {0x7ACCC, 718},
    {0x88588, 858},
    {0x396E7, 213},
    {0x93339, 843},
    {0x3DDAD, 221},
    {0xCCACC, 323},
    {0xEAA85, 608},
    {0x2643D, 989},
    {0x18881, 439},
    {0x16616, 754},
    {0x95777, 353},
    {0x497C3, 576},
    {0x77ED1, 829},
    {0x9DDD9, 516},
    {0x55585, 98},
    {0x3131C, 675},
    {0x87727, 780},
    {0x16A2A, 223},
    {0x5353E, 826},
    {0x47AD1, 285},
    {0x6E661, 840},
    {0xDCDCC, 112},
    {0x12A2A, 697},
    {0x71268, 172},
    {0x88144, 385},
    {0x4681C, 350},
    {0xE751A, 973},
    {0x6A69A, 489},
    {0x4C222, 705},
    {0xA869D, 173},
    {0x6A677, 43},
    {0xC7963, 562},
    {0x61E33, 322},
    {0x17579, 274},
    {0x4A9E6, 455},
    {0xAA7A9, 671},
    {0x226DD, 679},
    {0x2DCC1, 957},
    {0xE1A9E, 494},
    {0xC55EA, 365},
    {0x6C33C, 201},
    {0x49DAE, 293},
    {0x2257E, 438},
    {0x111EE, 116},
    {0xE6985, 644},
    {0x2777E, 397},
    {0xA6E15, 912},
    {0x46AE1, 459},
    {0x77547, 674},
    {0x1DD1D, 779},
    {0x7C324, 998},
    {0x64517, 977},
    {0x34D2D, 232},
    {0x8DE97, 187},
    {0x55554, 470},
    {0x5E66D, 282},
    {0x88882, 632},
    {0x75777, 321},
    {0x94555, 163},
    {0x47818, 967},
    {0x46264, 884},
    {0xAAA7A, 165},
    {0x318AA, 828},
    {0x72868, 915},
    {0x95D55, 368},
    {0xEC5A9, 686},
    {0x112EE, 568},
    {0xEE7C2, 838},
    {0x77E11, 896},
    {0x83333, 345},
    {0x6A897, 54},
    {0x337C7, 95},
    {0x29E99, 317},
    {0x222CC, 539},
    {0x98534, 359},
    {0x21271, 834},
    {0xE5D5D, 72},
    {0xC5D57, 641},
    {0x46744, 307},
    {0x99192, 653},
    {0x534D9, 706},
    {0x27172, 342},
    {0xA77A7, 745},
    {0x66761, 635},
    {0x6AAAA, 243},
    {0x44222, 555},
    {0xE5A55, 426},
    {0x29924, 596},
    {0xC8196, 683},
    {0xCD366, 792},
    {0x1D542, 146},
    {0xADD68, 302},
    {0x28A41, 817},
    {0x2C21C, 597},
    {0x444DC, 388},
    {0xD8838, 20},
    {0x45E15, 131},
    {0x3A3E3, 869},
    {0x8198D, 577},
    {0x49D88, 224},
    {0x2EEEE, 719},
    {0x2222D, 31},
    {0x1E255, 194},
    {0xCC188, 467},
    {0xAE33A, 910},
    {0x96C96, 944},
    {0xC7778, 150},
    {0xEC41A, 291},
    {0x43464, 381},
    {0x72185, 448},
    {0x713E5, 363},
    {0x3E531, 259},
    {0x5E5C5, 303},
    {0x3DDD9, 935},
    {0xEE45C, 807},
    {0x66999, 664},
    {0x4CDCC, 49},
    {0x28215, 6},
    {0x16116, 777},
    {0xA5A17, 11},
    {0x344A7, 184},
    {0x4CA3E, 717},
    {0x67788, 354},
    {0x9A6A9, 360},
    {0x73773, 17},
    {0x675C4, 225},
    {0xDD7DD, 588},
    {0x66DDD, 711},
    {0x15285, 136},
    {0x72932, 425},
    {0x99A9A, 430},
    {0xAAAA2, 920},
    {0x58858, 9},
    {0x5D55D, 749},
    {0x5A77A, 147},
    {0x58333, 325},
    {0x9A711, 79},
    {0x83156, 245},
    {0x4E1E4, 250},
    {0x66296, 708},
    {0x5D9D9, 304},
    {0x3478E, 526},
    {0x1C828, 769},
    {0x1447C, 485},
    {0xEAEEA, 107},
    {0xA6E78, 685},
    {0x45A9C, 386},
    {0xA9CAD, 71},
    {0xCC2CC, 73},
    {0x8A313, 280},
    {0x43434, 157},
    {0x37777, 549},
    {0x84618, 586},
    {0x5E551, 444},
    {0xAE6A6, 242},
    {0x88846, 518},
    {0x253E7, 500},
    {0xD2D22, 349},
    {0x59A41, 809},
    {0xE6EEE, 797},
    {0x912C7, 346},
    {0x55595, 934},
    {0xE941E, 416},
    {0x666DE, 129},
    {0xE4E24, 271},
    {0x12722, 278},
    {0x63336, 92},
    {0x1D366, 811},
    {0xE1E76, 591},
    {0xC8C7C, 873},
    {0xE1E5A, 853},
    {0xD5A6C, 599},
    {0x14E16, 971},
    {0xA2A1A, 390},
    {0xC1C92, 669},
    {0xA9A42, 961},
    {0x8D98E, 402},
    {0xAD936, 923},
    {0xD83D1, 230},
    {0x1E99E, 953},
    {0x8CC11, 964},
    {0x75D37, 24},
    {0xE1A22, 398},
    {0x47675, 695},
    {0xA1A55, 737},
    {0xE156C, 514},
    {0x5419D, 212},
    {0xAAA17, 446},
    {0x19412, 988},
    {0xDE42D, 235},
    {0x5EC45, 696},
    {0x7D772, 236},
    {0x3977D, 435},
    {0x8596A, 332},
    {0x99969, 594},
    {0x3184C, 721},
    {0x4678C, 729},
    {0xE55EE, 445},
    {0x84A77, 839},
    {0xE9CC8, 904},
    {0xAAA4A, 498},
    {0xA9762, 60},
    {0x79D24, 678},
    {0xD7DE3, 462},
    {0x15444, 480},
    {0xC19C5, 289},
    {0x66D16, 978},
    {0x55655, 647},
    {0xED9D8, 930},
    {0x2A8E1, 623},
    {0xD1DDD, 340},
    {0x55158, 370},
    {0x777D8, 389},
    {0x28A2A, 55},
    {0x661DD, 482},
    {0x5D3DD, 99},
    {0x33393, 384},
    {0x18443, 151},
    {0x8EEEE, 379},
    {0x79799, 247},
    {0xA1787, 571},
    {0xE226D, 472},
    {0x66DD6, 367},
    {0x15762, 453},
    {0x7D7D7, 393},
    {0x3366D, 355},
    {0xCCC9C, 688},
    {0xEED56, 638},
    {0x3A53D, 872},
    {0xAAADC, 581},
    {0xE2E51, 210},
    {0x2E2DA, 890},
    {0x62466, 122},
    {0x4E5DE, 724},
    {0x22662, 521},
    {0x2621E, 373},
    {0x3D371, 898},
    {0x11EA8, 7},
    {0x94646, 643},
    {0x9C38A, 709},
    {0x19C26, 857},
    {0x44464, 50},
    {0x66566, 554},
    {0x7998D, 774},
    {0x2DC62, 814},
    {0xC4648, 103},
    {0x2C122, 690},
    {0x946C6, 411},
    {0x44E71, 557},
    {0x29E5D, 931},
    {0x81248, 968},
    {0x99773, 762},
    {0x483D7, 962},
    {0x22242, 567},
    {0x49999, 527},
    {0x88511, 297},
    {0xC8813, 983},
    {0x28A44, 195},
    {0x48544, 909},
    {0xA4121, 570},
    {0x545EE, 864},
    {0x5333D, 648},
    {0xDD677, 566},
    {0x2244C, 100},
    {0x26229, 142},
    {0xD5EA4, 356},
    {0x3156A, 996},
    {0x21655, 645},
    {0x88C81, 473},
    {0x88733, 403},
    {0xA411D, 895},
    {0xEE313, 491},
    {0x81CC7, 188},
    {0xE1EEE, 652},
    {0xA6A64, 479},
    {0x53363, 589},
    {0x1CD2E, 248},
    {0xE9986, 324},
    {0xEDEEE, 879},
    {0xD46C1, 41},
    {0xEA4EE, 63},
    {0x55719, 318},
    {0x42989, 155},
    {0x46785, 741},
    {0x14AE2, 37},
    {0x1ECCC, 620},
    {0x8DA8D, 126},
    {0xC928A, 759},
    {0x51557, 714},
    {0x471A9, 991},
    {0x15EEE, 756},
    {0xD127E, 44},
    {0x8A598, 747},
    {0x737D7, 506},
    {0x48383, 701},
    {0xD9199, 832},
    {0xAED85, 460},
    {0xC8312, 358},
    {0x72CC5, 362},
    {0x6CCC5, 938},
    {0xCA9A9, 5},
    {0x9E8D5, 766},
    {0xC1AAC, 45},
    {0x1DD3A, 933},
    {0xE5CEC, 419},
    {0x38AE9, 299},
    {0x55ADA, 703},
    {0x822D2, 927},
    {0xEEEE7, 357},
    {0x5AA9A, 192},
    {0x91EDA, 56},
    {0x935C7, 650},
    {0xDD224, 465},
    {0xAD1DA, 208},
    {0x3AAAA, 226},
    {0xCE16C, 913},
    {0x3A867, 715},
    {0x3EA92, 160},
    {0x77378, 400},
    {0xE9CE1, 875},
    {0x88488, 298},
    {0x2D8D8, 452},
    {0x11111, 90},
    {0xD383D, 612},
    {0x7E368, 326},
    {0x61E2A, 255},
    {0x22722, 955},
    {0x5D85D, 119},
    {0xEE7AA, 477},
    {0x4149A, 320},
    {0xE9CD3, 127},
    {0xEE5E7, 375},
    {0x48579, 605},
    {0x54465, 975},
    {0x94941, 8},
    {0xDEE5E, 883},
    {0xDA9A2, 626},
    {0x74433, 481},
    {0x471CC, 534},
    {0x2222C, 541},
    {0x92D55, 229},
    {0x181A6, 932},
    {0x4EEE1, 668},
    {0x31222, 167},
    {0x444A1, 614},
    {0x44449, 217},
    {0xC4982, 629},
    {0x53315, 176},
    {0x93715, 504},
    {0x44997, 108},
    {0xC38AD, 148},
    {0x49342, 46},
    {0x9198C, 659},
    {0x59E7C, 175},
    {0xDC488, 851},
    {0x66662, 945},
    {0x75775, 295},
    {0x96C6C, 997},
    {0x441D2, 241},
    {0x92912, 531},
    {0xE182E, 682},
    {0x66E45, 694},
    {0x4A26C, 886},
    {0x63393, 204},
    {0x13333, 424},
    {0x99666, 310},
    {0xAA1AA, 341},
    {0x72177, 409},
    {0x8AAA1, 785},
    {0xA1472, 408},
    {0xAA333, 240},
    {0x4E313, 182},
    {0x3D6A1, 922},
    {0x51CE2, 816},
    {0xEE46E, 806},
    {0x54397, 881},
    {0x66414, 238},
    {0x98D88, 976},
    {0xC9345, 768},
    {0xA4442, 275},
    {0xD9995, 76},
    {0x95D83, 841},
    {0xD7496, 940},
    {0x9899A, 87},
    {0x93949, 463},
    {0x9C362, 993},
    {0x6A576, 509},
    {0x88ED8, 14},
    {0x99199, 78},
    {0x41A91, 263},
    {0x57755, 970},
    {0x166D7, 288},
    {0xAEAAE, 908},
    {0x577DC, 53},
    {0xEE33A, 144},
    {0x44417, 950},
    {0x727E6, 984},
    {0x2EA7D, 517},
    {0xAAA22, 128},
    {0x61669, 511},
    {0x5CE6D, 929},
    {0x85617, 987},
    {0x953D7, 947},
    {0x6628E, 611},
    {0x9C9C9, 82},
    {0xEAAA8, 860},
    {0x9D77D, 819},
    {0x87558, 469},
    {0x96E2E, 124},
    {0x64661, 610},
    {0xE2212, 171},
    {0x77724, 958},
    {0x959A8, 52},
    {0xA48AA, 573},
    {0x23C82, 710},
    {0x37393, 617},
    {0x8878C, 96},
    {0x477E7, 844},
    {0xCCCC8, 267},
    {0xC27C9, 969},
    {0x5966A, 980},
    {0xDD6AD, 637},
    {0x57555, 924},
    {0x1826E, 162},
    {0x15A51, 639},
    {0xE9D61, 156},
    {0x5525A, 114},
    {0x8D79D, 982},
    {0x11118, 451},
    {0xA7625, 26},
    {0x62222, 395},
    {0xCCC33, 67},
    {0x22977, 25},
    {0xAD349, 556},
    {0x52222, 450},
    {0x44994, 575},
    {0x3D7D9, 728},
    {0x77A65, 906},
    {0x21CCC, 572},
    {0x2D69D, 347},
    {0x37D8A, 137},
    {0x99399, 776},
    {0x1EE66, 663},
    {0x52661, 787},
    {0x96119, 692},
    {0x1E699, 704},
    {0xD5D7D, 132},
    {0x81679, 633},
    {0x3A168, 732},
    {0x4AAAD, 428},
    {0xA918D, 928},
    {0x61566, 123},
    {0x38383, 782},
    {0xC5CCC, 40},
    {0x288AA, 237},
    {0xA5555, 475},
    {0x867A2, 804},
    {0x1ADAC, 866},
    {0xECA42, 543},
    {0xE3647, 894},
    {0x22666, 405},
    {0x67757, 74},
    {0x9E492, 330},
    {0xEE444, 621},
    {0xCCC3C, 874},
    {0x21119, 32},
    {0x43343, 595},
    {0xC7377, 761},
    {0x449CC, 607},
    {0x9C7A1, 429},
    {0x3C294, 911},
    {0x156D3, 547},
    {0xDAAE6, 348},
    {0x92E5C, 246},
    {0x1E318, 12},
    {0xCCCC4, 164},
    {0xA24AA, 478},
    {0x72A6D, 598},
    {0x484CC, 265},
    {0x3D1A5, 454},
    {0xD6E6E, 535},
    {0x51155, 461},
    {0x55551, 770},
    {0xCC313, 283},
    {0xAE7E9, 994},
    {0xDA3A1, 432},
    {0xCACCA, 846},
    {0xD3948, 627},
    {0x11777, 143},
    {0x81376, 565},
    {0xE7C96, 209},
    {0x781CA, 508},
    {0xE1AAC, 544},
    {0x9979A, 251},
    {0x2E1DA, 981},
    {0xA997A, 139},
    {0xC6CD7, 748},
    {0xEA327, 361},
    {0x97171, 713},
    {0xEEE44, 609},
    {0x9E43A, 837},
    {0x11222, 218},
    {0xD33D5, 582},
    {0x38C31, 152},
    {0x8CD45, 186},
    {0x777C7, 672},
    {0x12792, 887},
    {0xCDDCD, 778},
    {0x677C7, 758},
    {0xDDD5D, 744},
    {0x2255D, 956},
    {0x53E55, 233},
    {0x28966, 765},
    {0x82C88, 29},
    {0xC8E54, 343},
    {0x91712, 104},
    {0x785D2, 1},
    {0xAA2E5, 946},
    {0x78592, 488},
    {0xE3333, 118},
    {0xCD264, 538},
    {0x19CAC, 339},
    {0xEDE6E, 284},
    {0xA539E, 974},
    {0x991AD, 662},
    {0x18333, 730},
    {0x93CA2, 899},
    {0xE119E, 550},
    {0x87878, 83},
    {0x46643, 135},
    {0xEEEDD, 130},
    {0x14DED, 651},
    {0x5748A, 673},
    {0x96C43, 824},
    {0x8D881, 81},
    {0xD9566, 185},
    {0xA44AA, 38},
    {0x63A71, 311},
    {0x91362, 966},
    {0x33D1D, 422},
    {0x77789, 33},
    {0x8239A, 661},
    {0x5639A, 734},
    {0x91D19, 889},
    {0xAD8C9, 600},
    {0x45E7E, 888},
    {0x96198, 110},
    {0xA19DA, 279},
    {0x95999, 992},
    {0x41444, 457},
    {0x15559, 786},
    {0xECD85, 919},
    {0x29DAC, 69},
    {0x25223, 781},
    {0xC6235, 585},
    {0x99398, 262},
    {0x559E5, 333},
    {0xC9845, 812},
    {0x4D581, 66},
    {0x445DD, 590},
    {0xEE77E, 27},
    {0x17977, 753},
    {0x26526, 10},
    {0x45EC2, 646},
    {0xC83AA, 371},
    {0xDDADA, 900},
    {0xD6D1D, 750},
    {0xDDD43, 583},
    {0x333A3, 406},
    {0x4424E, 290},
    {0xE882A, 378},
    {0x44484, 979},
    {0xCA3D3, 986},
    {0x1747D, 960},
    {0x29D3A, 447},
    {0x46465, 707},
    {0x55125, 505},
    {0xED2DE, 788},
    {0x5AD3E, 941},
    {0x31A44, 892},
    {0x44232, 963},
    {0x5C1A7, 77},
    {0x3ED85, 926},
    {0xCAACE, 296},
    {0x783C4, 606},
    {0xCCC99, 624},
    {0x41CEC, 551},
    {0x3DA28, 228},
    {0x69E28, 334},
    {0x77779, 905},
    {0x5655A, 312},
    {0x7E7E7, 65},
    {0xEDEE8, 524},
    {0xD414D, 264},
    {0xD7771, 698},
    {0xCC6D1, 561},
    {0xE7717, 487},
    {0x4A77C, 443},
    {0x3CE11, 468},
    {0xE49D1, 825},
    {0x45445, 760},
    {0x6C667, 799},
    {0x18C9C, 856},
    {0x5A5A2, 689},
    {0x58A12, 366},
    {0x2574E, 580},
    {0xD43C9, 495},
    {0x9666D, 15},
    {0x1C41D, 738},
    {0x51313, 773},
    {0x6C378, 328},
    {0x121AE, 22},
    {0x28362, 97},
    {0x8D314, 616},
    {0xCCCC1, 105},
    {0x3D562, 196},
    {0x34494, 85},
    {0xD4823, 954},
    {0xE4744, 219},
    {0xD6A16, 999},
    {0x73372, 712},
    {0xA5AA7, 227},
    {0xDD199, 631},
    {0x6E6AE, 959},
    {0x21846, 102},
    {0x95A9A, 757},
    {0x73AA1, 421},
    {0x56566, 640},
    {0x38388, 316},
    {0x33EE3, 854},
    {0x95D75, 93},
    {0x81488, 415},
    {0x75D52, 948},
    {0x411DD, 292},
    {0x54883, 560},
    {0x855C5, 990},
    {0x886D6, 642},
    {0x32232, 407},
    {0x96D9A, 193},
    {0x54885, 684},
    {0xE1C1C, 755},
    {0xAA11A, 39},
    {0x4C1DD, 716},
    {0x9D41D, 423},
    {0x57522, 810},
    {0xAE331, 937},
    {0xA2123, 863},
    {0xE46E6, 30},
    {0xD888D, 61},
    {0x67EA3, 84},
    {0x47424, 272},
    {0x1A51E, 166},
    {0xC4DEE, 893},
    {0x9C368, 731},
    {0x55AEE, 273},
    {0xEE822, 751},
    {0x55445, 916},
    {0x81777, 313},
    {0x8A8AA, 772},
    {0x8AAA2, 300},
    {0x22455, 972},
    {0x6CCCC, 723},
    {0x98885, 19},
    {0xCDA4C, 519},
    {0x99A66, 336},
    {0x17777, 57},
    {0x44314, 337},
    {0x1E238, 70},
    {0x65ACA, 775},
    {0x9D65E, 180},
    {0x5CD28, 942},
    {0x7182A, 501},
    {0x7C3A5, 532},
    {0x88951, 211},
    {0xA737C, 437},
    {0x9336D, 91},
    {0x21757, 699},
    {0xAA9AA, 764},
    {0x8D9DD, 191},
    {0x4ED41, 308},
    {0x44384, 602},
    {0x77C81, 159},
    {0x56A53, 739},
    {0x22A5C, 499},
    {0xA7664, 51},
    {0x66CCC, 925},
    {0xE9E9E, 329},
    {0xEE33E, 59},
    {0xDDDE1, 257},
    {0xDD8D7, 113},
    {0xDDDD9, 47},
    {0x33137, 503},
    {0x25A2A, 902},
    {0xD59DD, 121},
    {0x49A99, 287},
    {0x4E69C, 625},
    {0x1D212, 740},
    {0x134DD, 338},
    {0xD5C76, 569},
    {0xEEEE5, 75},
    {0xE14E8, 28},
    {0xE68A6, 464},
    {0xC22CE, 965},
    {0xD1632, 901},
    {0x1E572, 391},
    {0x4AED8, 871},
    {0x3A57D, 634},
    {0xE4271, 855},
    {0x59199, 177},
    {0x52256, 767},
    {0xDADEE, 133},
    {0x94593, 294},
    {0x9EE99, 676},
    {0x61162, 13},
    {0xA7323, 80},
    {0x2DC33, 878},
    {0x44424, 862},
    {0xE4646, 301},
    {0x8888E, 200},
    {0x55752, 35},
    {0x193C9, 529},
    {0x8383E, 120},
    {0xD5787, 680},
    {0x2272C, 258},
    {0xDD1D3, 510},
    {0x28813, 835},
    {0xDEE44, 885},
    {0xA7AA7, 523},
    {0x44774, 216},
    {0x16666, 548},
    {0xC78D5, 456},
    {0x73E33, 252},
    {0xE1E1E, 670},
    {0xCC777, 306},
    {0x41E88, 725},
    {0x87778, 693},
    {0xD67D6, 179},
    {0x7E76E, 823},
    {0xA6E8A, 170},
    {0xE5628, 427},
    {0xD8888, 115},
    {0x37733, 434},
    {0x18888, 276},
    {0x6C792, 327},
    {0x6772C, 800},
    {0x22DDD, 891},
    {0x55552, 545},
    {0x4A6E8, 401},
    {0xDDD55, 205},
    {0x93993, 476},
    {0x48859, 842},
    {0x64666, 579},
    {0x44142, 36},
    {0x2CE67, 394},
    {0x937D9, 649},
    {0xD99D9, 559},
    {0x5531A, 512},
    {0x89591, 790},
    {0x69AD5, 269},
    {0x833D9, 18},
    {0x777E3, 914},
    {0x16662, 64},
    {0x1E95A, 220},
    {0xDDDCD, 319},
    {0xDDDD6, 836},
    {0x495AE, 603},
    {0xC3D96, 833},
    {0xED435, 553},
    {0xC7744, 660},
    {0xEE2E2, 244},
    {0xAA9A9, 305},
    {0x298D9, 733},
    {0x21133, 736},
    {0x5EEE3, 190},
    {0xDDDD2, 134},
    {0xAA34D, 471},
    {0x44248, 655},
    {0x5519E, 949},
    {0x76677, 702},
    {0x21662, 111},
    {0xD94C9, 830},
    {0xAA1CA, 268},
    {0xA2AD1, 48},
    {0x1242C, 943},
    {0x3CC9C, 231},
    {0xC34D3, 870},
    {0xA7C7C, 58},
    {0x62221, 850},
    {0x71A97, 377},
    {0x33DE1, 215},
    {0x3985A, 813},
    {0x38663, 936},
    {0x12623, 952},
    {0xE2333, 145},
    {0x74477, 202},
    {0x33311, 677},
    {0x88788, 593},
    {0x477D7, 618},
    {0x53533, 656},
    {0x7526D, 820},
    {0x2E36A, 497},
    {0xADDDD, 726},
    {0x13362, 158},
    {0xADDAA, 619},
    {0x66869, 868},
    {0x98888, 613},
    {0x58835, 558},
    {0x55225, 493},
    {0xEAEEE, 178},
    {0x4A313, 154},
    {0x23D59, 604},
    {0x99932, 803},
    {0x6DDCD, 254},
    {0x992DD, 138},
    {0x8551D, 382},
    {0xCCC13, 125},
    {0x29C38, 865},
    {0x15455, 490},
    {0xD397C, 861},
    {0x74176, 536},
    {0xA3AA3, 315},
    {0x661C6, 831},
    {0xDD638, 203},
    {0x3127D, 449},
    {0x41E44, 821},
    {0x848C4, 628},
    {0x33336, 530},
    {0xEE592, 266},
    {0x85353, 520},
    {0x2AAA9, 882},
    {0xEA1C3, 654},
    {0x3726D, 552},
    {0x22343, 845},
    {0xE6E41, 199},
    {0xD56AE, 794},
    {0x6CCC9, 665},
    {0x36E95, 805},
    {0xCC16C, 847},
    {0xAC454, 249},
    {0x9999E, 687},
    {0x5D336, 877},
    {0x55835, 169},
    {0x16A39, 222},
    {0x4A94D, 742},
    {0x1C1CC, 564},
    {0x2E368, 261},
    {0xC6CCE, 852},
    {0x98899, 23},
    {0x4DD44, 793},
    {0xCEE96, 380},
    {0x8A5E4, 801},
    {0x11A1A, 667},
    {0x28818, 522},
    {0x19911, 344},
    {0x79214, 1000},
    {0xC5266, 352},
    {0x1EE92, 86},
    {0xE2989, 89},
    {0x14863, 636},
    {0x1C84D, 533},
    {0x5CC8C, 546},
    {0x66E6E, 101},
    {0x25186, 410},
    {0x8E842, 592},
    {0x22922, 720},
    {0xE71E7, 183},
    {0x7C12E, 109},
    {0x55616, 802},
    {0x67379, 995},
    {0x23CED, 174},
    {0x44CC4, 903},
    {0xC5D83, 666},
    {0x91519, 876},
    {0x8C276, 42},
    {0x7AD42, 351},
    {0x26999, 848},
    {0x86844, 727},
    {0x9E913, 897},
    {0x7A7DA, 140},
    {0xEECAD, 722},
    {0x96D59, 106},
    {0xC6C61, 492},
    {0xEE1E3, 484},
    {0x5C238, 743},
    {0x3EC52, 796},
    {0xE8E88, 789},
    {0x63666, 181},
    {0xE8EE1, 515},
    {0x96747, 198},
    {0x55588, 420},
    {0xA4222, 849},
    {0x99899, 795},
    {0x3D9C5, 784},
    {0x27727, 691},
    {0xAACC9, 563},
    {0x458DD, 149},
    {0x2178E, 917},
    {0x224E2, 496},
    {0x99D99, 387},
    {0x44884, 808},
    {0x26AAA, 418},
    {0xC45D7, 798},
    {0x433EA, 951},
    {0xCCAD1, 771},
    {0x49A81, 615},
    {0x85ACD, 234},
    {0x9C4E7, 270},
    {0x6928D, 752},
    {0xA4AD9, 513},
    {0x4226A, 207},
    {0xE7666, 3},
    {0x3C865, 197},
    {0xE7777, 331},
    {0x77A67, 153},
    {0x22A2A, 417},
    {0xEEE12, 16},
    {0x6C3C5, 867},
    {0x33D38, 168},
    {0xDEAE1, 921},
    {0x66668, 189},
    {0xC3DD2, 746},
    {0xEE7DE, 431},
    {0x94DC1, 260},
    {0xD9AC6, 4},
    {0x818C1, 458},
    {0xC9ED9, 486},
    {0x7113C, 141},
    {0x77764, 286},
    {0xE9DE6, 474},
    {0x6A63A, 309},
    {0xD4E67, 815},
    {0x22812, 918},
    {0x31939, 62},
    {0x68858, 985},
    {0x35555, 88},
    {0xEEE9E, 399},
    {0xE9495, 433},
    {0xC5512, 540},
    {0x19C92, 681},
    {0x93737, 700},
    {0xA5515, 404},
    {0xD8922, 584},
    {0x1E492, 277},
    {0xA1EAA, 117},
    {0x4E444, 239},
    {0x47922, 441},
    {0x24E92, 436},
    {0x51E99, 21},
    {0xEDA18, 502},
    {0xC6DCC, 822},
    {0x79797, 68},
    {0x7C9EA, 939},
    {0x6C268, 525},
    {0x8469A, 442},
    {0xC5C5C, 335},
    {0x44474, 587},
    {0x48222, 392},
    {0xDD333, 735},
    {0xDDD3D, 483},
    {0x265A1, 161},
    {0xA6AD1, 383},
    {0xD7664, 34},
    {0xA9AA1, 880},
    {0x66339, 827},
    {0xE2981, 818},
    {0xDE4A7, 542},
    {0xDDD44, 253},
    {0x1A744, 907},
    {0xECEEC, 369},
    {0x22212, 396},
    {0xEE1E7, 206},
    {0x3D414, 537},
    {0x91CC3, 791},
    {0x14144, 440},
    {0xC6183, 412},
    {0x88221, 578},
    {0xE555E, 256},
    {0xA9643, 374},
    {0x77787, 364},
};

// #define INPUT_HANDS 5
// uint32_t input[INPUT_HANDS][2] = {
//     {0x32A3D, 765},
//     {0xA5515, 684},
//     {0xDD677, 28},
//     {0xDA11A, 220},
//     {0xCCC1E, 483},
// };

uint32_t value(size_t indx)
{
    const uint32_t FIVEK  = 7;
    const uint32_t FOURK  = 6;
    const uint32_t FULLH  = 5;
    const uint32_t THREEK = 4;
    const uint32_t TWOP   = 3;
    const uint32_t PAIR   = 2;
    const uint32_t HIGHC  = 1;
    size_t hand = input[indx][0];
    int values[16] = {};
    for (int i = 0; i < 5; i++) {
        values[hand & 0xF]++;
        hand >>= 4;
    }
    uint32_t rank = HIGHC;
    int pairs = 0;
    int jthree = 0;
    int jpairs = 0;
    for (int j = 0; j < 16; j++) {
        int count = values[j];
        int jokers = values[1];
        if (j != 1) {
            count += jokers;
        }
        switch (count) {
            case 5:
                rank = FIVEK;
                break;
            case 4:
                // X AJJJJ
                if (rank < FOURK) {
                    rank = FOURK;
                }
                break;
            case 3:
                // X AJJBB
                // ABJJC
                // X AJJJB
                if (jokers == 0) {
                    if (pairs > 0) {
                        rank = FULLH;
                    } else {
                        rank = THREEK;
                    }
                } else if (jokers == 1) {
                    if (jthree) {
                        // second JTHREE 
                        // AAJBB
                        rank = FULLH;
                    } else if (rank < THREEK) {
                        // AAJ**
                        rank = THREEK;
                    }
                    jthree = 1;
                } else if (jokers == 2) {
                    // ABCJJ
                    if (rank < THREEK) {
                        rank = THREEK;
                    }
                }
                break;
            case 2:
                if (jokers == 0) {
                    pairs++;
                    if (rank == THREEK) {
                        rank = FULLH;
                    } else if (pairs > 1) {
                        rank = TWOP;
                    } else {
                        rank = PAIR;
                    }
                } else if (jokers == 1) {
                    // ABCDJ
                    if (rank < PAIR) {
                        rank = PAIR;
                    }
                }
                break;
            case 1:
            case 0:
            default:
                break;
        }
    }
    return (input[indx][0] | (rank << 20));
}

void swap(size_t a, size_t b)
{
    // swap a,b (including bids)
    // {uint32_t, uint32_t} should always be 64 bits
    uint64_t tmp = *((uint64_t*)input[a]);
    *((uint64_t*)input[a]) = *((uint64_t*)input[b]);
    *((uint64_t*)input[b]) = tmp;
}

size_t partition(size_t s, size_t e)
{
    size_t p = e;
    uint32_t pval = value(e);
    size_t a = s-1;
    for (size_t b = s; b < e; b++) {
        if (value(b) <= pval) {
            a++;
            swap(a,b);
        }
    }
    a++;
    swap(a, p);
    return a;
}

void qs(size_t s, size_t e) 
{
    if (s >= e) {
        return;
    }
    size_t p = partition(s, e);
    if (p > 0) {
        qs(s, p-1);
    }
    qs(p+1, e);
}

int main() {
    uint64_t total = 0;
    qs(0, INPUT_HANDS-1);
    for (size_t i = 0; i < INPUT_HANDS; i++) {
        uint64_t win = input[i][1] * (i+1);
        printf("%zu win: %lu bid: %u value: %x\n", (i+1), win, input[i][1], value(i));
        total += win;
    }
    printf("total: %lu\n", total);
    return 0;
}