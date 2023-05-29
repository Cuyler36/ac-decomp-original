#include "types.h"

u16 pact1_head_table[] = {
  0x0C92, 0x0028, 0x0C02, /* position */
  0x5893, /* angle (124.55749511719 deg) */
  0x2204, /* tool (gelato umbrella) */
  0x0722  /* scale/size? */
};

u16 pact1_key_data[] = {
  0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x19FE,
  0x4300, 0x6F02, 0x7900, 0x7900, 0x7900, 0x7900, 0x7900, 0x7900, 0x7900,
  0x7900, 0x7900, 0x7900, 0x7900, 0x7900, 0x7900, 0x7900, 0x7900, 0x7900,
  0x7900, 0x7900, 0x7900, 0x7900, 0x7900, 0x7900, 0x7900, 0x7900, 0x7900,
  0x6BFA, 0xC302, 0x8900, 0x89F6, 0x89F6, 0x89F6, 0x89F6, 0x89F6, 0x89F6,
  0x89F6, 0x89F6, 0x89F6, 0x89F6, 0x89F6, 0x89F6, 0x89F4, 0x89EE, 0x8BEA,
  0x8DE2, 0x8FD8, 0x91D4, 0x95CC, 0x9FBA, 0xA7B0, 0xA9AE, 0xADAA, 0xB3A4,
  0xBDA4, 0xBDA4, 0xC5A4, 0xCFA4, 0xD3A2, 0xD79E, 0xD79C, 0xD79C, 0xD79C,
  0xD79C, 0xD79C, 0xD79C, 0xD79C, 0xD79C, 0xD79C, 0xD79C, 0xD79C, 0xDD98,
  0xED94, 0xED94, 0xED94, 0xED94, 0xED94, 0xED94, 0xED94, 0xED94, 0xED94,
  0xED96, 0xED96, 0xF198, 0xF79A, 0xF79A, 0xF79A, 0xF99A, 0xFD9A, 0x0B9A,
  0x179C, 0x1B9C, 0x239E, 0x31A6, 0x33A6, 0x35A8, 0x3BAC, 0x3DB0, 0x3FB4,
  0x3FB4, 0x3FB4, 0x3FB6, 0x3FB8, 0x3FBC, 0x3FC2, 0x3FC4, 0x3FC4, 0x3FC4,
  0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4,
  0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4,
  0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4,
  0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3FC4, 0x3DC4, 0x3BC4, 0x39C4,
  0x39C4, 0x39C4, 0x39C4, 0x39C4, 0x39C4, 0x39C2, 0x37C0, 0x37BE, 0x33BA,
  0x23B6, 0x21B6, 0x21B6, 0x21B6, 0x21B6, 0x21B6, 0x21B6, 0x21B6, 0x21B6,
  0x21B6, 0x1BB0, 0x0FAC, 0x0BAA, 0x07AA, 0x07AA, 0xFDAA, 0xFDAA, 0xFDAA,
  0xFDAA, 0xFDAA, 0xFDAA, 0xFDAA, 0xFDAA, 0xFDAA, 0xFDAA, 0xFDAA, 0xFDAA,
  0xFDAA, 0xFDAA, 0xFDAA, 0xFDAA, 0xFDAA, 0xFDAA, 0xFDAA, 0xFDAA, 0xFDAC,
  0xFDAE, 0x13B4, 0x1FB6, 0x2DBE, 0x2FC0, 0x31C6, 0x33D2, 0x35E0, 0x37E4,
  0x37E4, 0x37E4, 0x37E4, 0x37E4, 0x37E4, 0x37E4, 0x37E4, 0x37E4, 0x37E4,
  0x37E4, 0x37E4, 0x37E4, 0x37E4, 0x37E4, 0x37E2, 0x37DC, 0x37D4, 0x37D2,
  0x37CE, 0x37CC, 0x37C8, 0x37C6, 0x39C2, 0x39BE, 0x39BE, 0x39BC, 0x39BA,
  0x39BA, 0x39B8, 0x39B6, 0x39B4, 0x2FAE, 0x2BAC, 0x27A8, 0x23A4, 0x1FA0,
  0x1B9C, 0x0F96, 0x0D94, 0x0B92, 0x0590, 0x0590, 0x0590, 0x0590, 0x0590,
  0x0590, 0x0590, 0x0590, 0x0590, 0x0590, 0x0590, 0x0590, 0x0590, 0x0590,
  0x0594, 0x059C, 0x059C, 0x059C, 0x059C, 0x05A6, 0x05AC, 0x05B6, 0x05B6,
  0x05B8, 0x05B8, 0x05B8, 0x05B8, 0x05B8, 0x05B8, 0x05B8, 0x05B8, 0x17BA,
  0x2BBC, 0x2FBC, 0x2FBC, 0x2FBC, 0x2FBC, 0x2FBC, 0x2FBC, 0x2FBC, 0x2FBC,
  0x2FBC, 0x2FBC, 0x2FBC, 0x2FBC, 0x2FBC, 0x31BC, 0x31BC, 0x23BC, 0x14BC,
  0x14BC, 0x0CBC, 0x0CBC, 0x0CBC, 0x0CBC, 0x0CBC, 0x0CBC, 0x0CBC, 0x0CBC,
  0x0CBC, 0x0CBC, 0x0CBC, 0x0CBA, 0x0CBA, 0x0CBA, 0x0CBA, 0x0CBA, 0x0CBA,
  0xFEB8, 0xFEB8, 0xFEB8, 0xFEB6, 0xFEB6, 0xFEB6, 0xFEB6, 0xF8B6, 0xF6B6,
  0xF6B6, 0xF6B6, 0xF6B6, 0xF6B6, 0xF6B6, 0xF6B6, 0xF2B6, 0xF0B6, 0xF0B6,
  0xF0B6, 0xF0B6, 0xF0B6, 0xE6B6, 0xE2B6, 0xE2B6, 0xE2B6, 0xE2B6, 0xE2B6,
  0xE2B6, 0xE2B6, 0xE2B6, 0xE2B6, 0xE2B6, 0xE2B6, 0xE2B6, 0xE2BC, 0xE2BE,
  0xE2C0, 0xE2C4, 0xE0C6, 0xDEC8, 0xDCCE, 0xDCD0, 0xDCD0, 0xDCD0, 0xDCD0,
  0xDCD0, 0xDCD0, 0xDCD0, 0xDAD6, 0xDAD6, 0xDCDA, 0xE2E0, 0xE6E8, 0xEAEA,
  0xECEC, 0xEEEE, 0xEEF2, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0001,
  0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0xEAFC, 0xE6FC, 0xE6FC, 0xE6FC, 0xE6FC, 0xE6FE, 0xE600, 0xE608,
  0xE608, 0xE608, 0xE608, 0xE608, 0xE608, 0xE60E, 0xE612, 0xE612, 0xE416,
  0xDE22, 0xD62C, 0xD234, 0xD234, 0xD234, 0xD234, 0xD234, 0xD234, 0xD234,
  0xD234, 0xD234, 0xD234, 0xD234, 0xD234, 0xD234, 0xD234, 0xD234, 0xD234,
  0xD234, 0xD234, 0xD234, 0xD234, 0xD234, 0xD234, 0xD234, 0xD234, 0xD234,
  0xD234, 0xD234, 0xD234, 0xD234, 0xD234, 0xD234, 0xD234, 0xD234, 0xCE30,
  0xCE30, 0xCE30, 0xCE30, 0xCA2C, 0xCA2C, 0xCA2A, 0xC828, 0xC424, 0xC220,
  0xC218, 0xC214, 0xC214, 0xC214, 0xC214, 0xC20C, 0xC206, 0xC204, 0xC202,
  0xC202, 0xC2FE, 0xC2FC, 0xC2FC, 0xC2FC, 0xC2FA, 0xC2F4, 0xC2F4, 0xC2F4,
  0xC2F4, 0xC2F4, 0xC2F4, 0xC2F4, 0xC2F4, 0xC2F4, 0xC2F4, 0xC2F4, 0xC2F4,
  0xC2F4, 0xC0F4, 0xBCF4, 0xBCF4, 0xBCF4, 0xBCF4, 0xBCF4, 0xBCF4, 0xBCF4,
  0xBCF4, 0xBCF4, 0xBCF4, 0xBCF4, 0xBCF4, 0xBCF4, 0xBCF4, 0xBCF4, 0xBCF4,
  0xBCF4, 0xBCF4, 0xBCF4, 0xBCF4, 0xBCF4, 0xBCF0, 0xBCE8, 0xBCE6, 0xBCE6,
  0xBCDE, 0xBCD6, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4,
  0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4,
  0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4,
  0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4,
  0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4,
  0xBCD4, 0xBCD4, 0xBCD4, 0xBCD4, 0xBCDA, 0xBCDE, 0xBCE4, 0xBCF0, 0xBCF4,
  0xBCF4, 0xBCF4, 0xBCF4, 0xBCF4, 0xBCF4, 0xBCF8, 0xBCFC, 0xBC02, 0xBC04,
  0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC04,
  0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC04,
  0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC04, 0xBC02,
  0xBC02, 0xBC00, 0xBCFE, 0xB4FC, 0xB2FC, 0xB0FC, 0xAAFC, 0xAAFC, 0xAAFC,
  0x9EFC, 0x9AFC, 0x9AFC, 0x9AFC, 0x9AFC, 0x9AFC, 0x9AFC, 0x9AFC, 0x9AFC,
  0x9AFC, 0xAEFC, 0xB2FC, 0xB2FC, 0xB8FC, 0xBEFE, 0xC002, 0xC204, 0xC204,
  0xC204, 0xC204, 0xC204, 0xC204, 0xC204, 0xC204, 0xC204, 0xC204, 0xC204,
  0xC204, 0xC204, 0xC204, 0xC20E, 0xC21C, 0xC228, 0xC228, 0xC228, 0xC228,
  0xC228, 0xC228, 0xC228, 0xC228, 0xC22E, 0xC238, 0xC238, 0xC238, 0xC238,
  0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238,
  0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238,
  0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238,
  0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238, 0xC238,
  0xC238, 0xC238, 0xC238, 0xC234, 0xC230, 0xC22E, 0xC22E, 0xC22E, 0xC22A,
  0xC22A, 0xC22A, 0xC22A, 0xC222, 0xC222, 0xC222, 0xC222, 0xC222, 0xC222,
  0xC222, 0xC222, 0xC222, 0xC222, 0xC222, 0xC222, 0xC222, 0xC222, 0xC222,
  0xC222, 0xC222, 0xC222, 0xC01A, 0xBE1A, 0xBE1A, 0xBE1A, 0xBC12, 0xBC0C,
  0xBC0C, 0xBC0C, 0xBC08, 0xBC08, 0xBC08, 0xBC08, 0xBC08, 0xC010, 0xC418,
  0xC420, 0xC424, 0xC42A, 0xC432, 0xC432, 0xC434, 0xC434, 0xC434, 0xC434,
  0xC434, 0xC434, 0xC434, 0xC434, 0xC434, 0xC434, 0xC434, 0xC434, 0xC434,
  0xC434, 0xC434, 0xC434, 0xC434, 0xC434, 0xC434, 0xC42E, 0xC426, 0xC426,
  0xC222, 0xC01C, 0xBE18, 0xBC10, 0xB806, 0xB606, 0xB606, 0xB604, 0xB604,
  0xB604, 0xB604, 0xB604, 0xB604, 0xB604, 0xB604, 0xB604, 0xAC00, 0xA800,
  0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800,
  0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800,
  0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800,
  0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800, 0xA800,
  0xA800, 0xA800, 0xA8FE, 0xA8FA, 0xAAFA, 0xAAFA, 0xAAF8, 0xAAE6, 0xAAE2,
  0xAADE, 0xAADC, 0xAECE, 0xB0CC, 0xB0CC, 0xB0CC, 0xB0CC, 0xB0CC, 0xB0CC,
  0xB0CC, 0xB0CC, 0xB0CC, 0xB0CC, 0xB0CC, 0xAED2, 0xA8DA, 0xA8DA, 0xA8DA,
  0xA2E2, 0x96F4, 0x94F6, 0x94F6, 0x94F6, 0x94F6, 0x96F6, 0x96F6, 0x96F6,
  0x96F6, 0x96F6, 0x96F6, 0x96F6, 0x96F6, 0x96F6, 0x96F6, 0x96F6, 0xA0F8,
  0xACFC, 0xB2FC, 0xB2FC, 0xB2FC, 0xB2FC, 0xB2FC, 0xB2FC, 0xB2FC, 0xB2FC,
  0xB2FC, 0xB2FC, 0xB2FC, 0xB2FC, 0xB2FC, 0xB2FC, 0xB2FC, 0xB2FC, 0xB2FA,
  0xB2F8, 0xB2F2, 0xB2EE, 0xB2E8, 0xB2E6, 0xB2E6, 0xB2E6, 0xB2E6, 0xB2E6,
  0xB2E6, 0xB2E6, 0xB2E6, 0xB2E6, 0xB2E6, 0xB2E6, 0xB2E6, 0xB2E6, 0xB2E6,
  0xB2E6, 0xB2E6, 0xB2E6, 0xB2E6, 0xB2EA, 0xB2EE, 0xB2F0, 0xB2F4, 0xB2F8,
  0xB2FA, 0xB200, 0xB206, 0xB20C, 0xB210, 0xB210, 0xB210, 0xB210, 0xB210,
  0xB210, 0xB210, 0xB214, 0xB21A, 0xB21A, 0xB21A, 0xB21A, 0xB21A, 0xB218,
  0xB214, 0xB20A, 0xB202, 0xB0FE, 0xB0F8, 0xB0EE, 0xB0E2, 0xB0D4, 0xB0D2,
  0xB0D2, 0xB0D2, 0xB0D2, 0xB0D4, 0xB0D4, 0xB0D4, 0xB0D4, 0xB0D4, 0xB0D4,
  0xB0D4, 0xB0D4, 0xB0D4, 0xB0D4, 0xB0D4, 0xB0D4, 0xB0D4, 0xB0D4, 0xB0D4,
  0xB0D4, 0xB0D4, 0xB0D4, 0xB0D4, 0xB0DC, 0xB0DC, 0xB0DE, 0xB0DE, 0xB0DE,
  0xB0DE, 0xB0EA, 0xB0EA, 0xB0EA, 0xB0F2, 0xB0F6, 0xB0FC, 0xB000, 0xB002,
  0xB00A, 0xB00A, 0xB00A, 0xAE0C, 0xAE0E, 0xAE0E, 0xAE0E, 0xAE0E, 0xAE0E,
  0xAE0E, 0xAE0E, 0xAE0E, 0xAE0E, 0xAE0E, 0xAE14, 0xAE20, 0xAE2E, 0xAE30,
  0xAE32, 0xAE32, 0xAE32, 0xAE32, 0xAE32, 0xAE32, 0xAE32, 0xAE32, 0xAE2C,
  0xAE1E, 0xAE10, 0xAEF6, 0xAEF4, 0xAEEA, 0xAED8, 0xAEC2, 0xB0BA, 0xB0BA,
  0xB0BA, 0xB2BA, 0xB2BA, 0xB2B8, 0xB2B6, 0xB4B4, 0xB4B4, 0xB4B4, 0xB4B4,
  0xB4B4, 0xB4B4, 0xB4B4, 0xB4B4, 0xB4B4, 0xB4B4, 0xB4B4, 0xB4B4, 0xB4B6,
  0xB4B8, 0xB4B8, 0xB4BC, 0xB4C0, 0xB4C8, 0xB4C8, 0xB4D0, 0xB4D4, 0xB4D8,
  0xB4DC, 0xB4E0, 0xB4E2, 0xB4E2, 0xB4E2, 0xB4E2, 0xB4E2, 0xB4E2, 0xB4E2,
  0xB4E2, 0xB4E2, 0xB4E2, 0xB4E2, 0xB4EC, 0xB4EE, 0xB4EE, 0xB4F0, 0xB4F4,
  0xB4FA, 0xB408, 0xB40C, 0xB40C, 0xB40C, 0xB40C, 0xB40C, 0xB40C, 0xAE08,
  0xAC04, 0xAC04, 0x9E00, 0x9E00, 0x9E00, 0x9E00, 0x9E00, 0x9E00, 0xA000,
  0xA000, 0xA000, 0xA202, 0xA608, 0xAC0E, 0xAC12, 0xAC12, 0xAC12, 0xAC12,
  0xAE12, 0xB016, 0xB016, 0xB016, 0xB016, 0xB016, 0xB216, 0xB216, 0xB216,
  0xB216, 0xB216, 0xB216, 0xB014, 0xAE0E, 0xAE0C, 0xAE0C, 0xAE0C, 0xAE0C,
  0xAE0C, 0xAE0C, 0xAE0C, 0xAE0C, 0xAE0C, 0xAE0C, 0xAE0C, 0xAE0C, 0xAE0C,
  0xAE14, 0xAE16, 0xAE16, 0xAE16, 0xAE16, 0xAE16, 0xAE16, 0xAE16, 0xAE16,
  0xAE16, 0xAE16, 0xAE16, 0xAE16, 0xAE16, 0xAE16, 0xAE16, 0xAE16, 0xAE16,
  0xAE16, 0xAE16, 0xAE16, 0xAE16, 0xAE16, 0xAE16, 0xB01C, 0xB424, 0xB424,
  0xB62A, 0xBA30, 0xBC38, 0xC23A, 0xC23C, 0xC440, 0xC844, 0xCA48, 0xCE4C,
  0xD04C, 0xD04C, 0xD250, 0xD250, 0xDE54, 0xE258, 0xE45A, 0xE45A, 0xF05A,
  0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF05A,
  0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF05A,
  0xF05A, 0xEC5A, 0xD654, 0xBC50, 0xBA50, 0xB850, 0xB850, 0xB850, 0xB850,
  0xB24C, 0xB24C, 0xB24C, 0xB24C, 0xB24C, 0xB24A, 0xB248, 0xB248, 0xB248,
  0xB246, 0xB244, 0xB242, 0xB236, 0xB228, 0xB216, 0xB210, 0xB202, 0xB2FA,
  0xB2F6, 0xB2F2, 0xB2EA, 0xB2DA, 0xB6CA, 0xB6CA, 0xB6CA, 0xB6C2, 0xB6C0,
  0xB6C0, 0xB6C0, 0xB6C0, 0xB6C0, 0xB6BA, 0xB6B6, 0xB6B6, 0xB6B6, 0xB6B6,
  0xB6B6, 0xB6B6, 0xB6B6, 0xB6B6, 0xB6B6, 0xB6B6, 0xB6B6, 0xB6B6, 0xB6B6,
  0xB6B6, 0xB6B8, 0xB6B8, 0xB6B8, 0xB6B8, 0xB6BA, 0xB6BA, 0xB6BC, 0xB6BC,
  0xB6BC, 0xB6BE, 0xB6BE, 0xB6BE, 0xB6BE, 0xB6BE, 0xB6BE, 0xB6BE, 0xB6BE,
  0xB6C0, 0xB6C0, 0xB6C0, 0xB6C4, 0xB6C4, 0xB6C4, 0xB6C6, 0xB6CA, 0xB6D8,
  0xBCF0, 0xBEF6, 0xBE02, 0xBE0A, 0xBE1C, 0xBE24, 0xBE28, 0xBE28, 0xBE32,
  0xBE34, 0xBE36, 0xBE3A, 0xBE3C, 0xC040, 0xC040, 0xC040, 0xC040, 0xC040,
  0xC040, 0xC040, 0xC042, 0xC244, 0xC444, 0xC446, 0xC446, 0xCA4A, 0xCC4C,
  0xCE4C, 0xCE4E, 0xCE4E, 0xD452, 0xDC54, 0xEA5A, 0xEA5A, 0xF05A, 0xF05A,
  0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF05A, 0xF45E,
  0xF45E, 0xF45E, 0xF45E, 0xF45E, 0xF45E, 0xFE5E, 0x025E, 0x025E, 0x025E,
  0x025E, 0x025E, 0x025E, 0x025E, 0x025E, 0x025E, 0x025E, 0x025E, 0x025E,
  0x025E, 0x0260, 0x0262, 0x0262, 0x0262, 0x0262, 0x0262, 0x0262, 0x0262,
  0x0262, 0x0262, 0x0262, 0x0262, 0x0262, 0x0262, 0x0262, 0x0262, 0x0262,
  0x0262, 0x0262, 0x0262, 0x0262, 0x0262, 0x0262, 0x0262, 0x0262, 0x0262,
  0x0262, 0x045E, 0x045E, 0x045C, 0x045C, 0x045C, 0x045C, 0x045C, 0x045C,
  0x045C, 0x045C, 0x045A, 0x045A, 0x0458, 0xFC56, 0xFC56, 0xFC56, 0xFC56,
  0xFC56, 0xFC56, 0xFC56, 0xFC56, 0xFC56, 0xFC56, 0xDC52, 0xDA52, 0xDA52,
  0xDA52, 0xDA52, 0xDA52, 0xDA52, 0xDA52, 0xDA52, 0xDA52, 0xDA52, 0xE652,
  0xE452, 0xEE52, 0xF052, 0xF252, 0xF252, 0xFC52, 0x0252, 0x0252, 0x0252,
  0x0252, 0x0252, 0x0252, 0x0252, 0x0252, 0x0252, 0x0252, 0x0252, 0x0252,
  0x0252, 0x0252, 0x0252, 0x0252, 0x0252, 0x0252, 0x0252, 0x0252, 0x0252,
  0x0452, 0x0652, 0x0652, 0x0652, 0x0E52, 0x0E52, 0x0E52, 0x0E52, 0x0E52,
  0x1452, 0x1452, 0x1452, 0x1C52, 0x2252, 0x2252, 0x2252, 0x2252, 0x2252,
  0x2250, 0x364A, 0x3A4A, 0x3A4A, 0x3A4A, 0x3A4A, 0x3C48, 0x3C48, 0x3C46,
  0x3E42, 0x3E3C, 0x3E3C, 0x3E3C, 0x3E3C, 0x3E3C, 0x3E3C, 0x3E3C, 0x3E3C,
  0x3E3C, 0x3E3C, 0x3E3C, 0x3E3C, 0x3E3C, 0x3E3C, 0x3E3C, 0x3E3C, 0x3E3C,
  0x3E3C, 0x3E3C, 0x3E3C, 0x3E3C, 0x3E3C, 0x3E3C, 0x3A3C, 0x3A3C, 0x363C,
  0x323C, 0x303C, 0x303C, 0x303C, 0x2E3C, 0x2E3C, 0x2E3C, 0x2E3C, 0x2A3C,
  0x2A3C, 0x2A3C, 0x2A3C, 0x2A3C, 0x1E3C, 0x1A3C, 0x1A3C, 0x1A3C, 0x1A3C,
  0x1A3C, 0x183C, 0x123C, 0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C,
  0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C,
  0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C, 0x0E3C,
  0x0E3C, 0x0E3C, 0x163C, 0x263C, 0x2A3C, 0x2C3C, 0x323C, 0x323C, 0x323C,
  0x323C, 0x323C, 0x323C, 0x323C, 0x323C, 0x323C, 0x323C, 0x323C, 0x323C,
  0x323C, 0x323C, 0x383C, 0x383A, 0x3838, 0x3836, 0x3832, 0x3830, 0x3830,
  0x382A, 0x3826, 0x3824, 0x3824, 0x3824, 0x3824, 0x3824, 0x3824, 0x3E1E,
  0x3E1E, 0x3E1C, 0x3E1C, 0x3E1A, 0x3E14, 0x3E14, 0x3E14, 0x3E14, 0x3E12,
  0x3E10, 0x440A, 0x420A, 0x420A, 0x420A, 0x420A, 0x420A, 0x420A, 0x420A,
  0x420A, 0x420A, 0x420A, 0x420A, 0x4202, 0x4202, 0x4202, 0x4202, 0x4202,
  0x4202, 0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FC,
  0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FC,
  0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FC,
  0x42FC, 0x42FC, 0x42FC, 0x42FC, 0x42FA, 0x42FA, 0x42F8, 0x42F4, 0x42F4,
  0x42F4, 0x42F4, 0x42F4, 0x42F4, 0x42F4, 0x42F4, 0x42F4, 0x42F4, 0x42F4,
  0x42F2, 0x42E4, 0x42D6, 0x42D2, 0x42D2, 0x42D2, 0x42D2, 0x42D2, 0x42D2,
  0x42D2, 0x42D2, 0x42CC, 0x42CC, 0x42CC, 0x42CA, 0x3EC6, 0x3EC6, 0x3EC4,
  0x3CC0, 0x3CC0, 0x3CC0, 0x3CC0, 0x3CC0, 0x3AC0, 0x3AC0, 0x3AC0, 0x36C0,
  0x2AC2, 0x24C4, 0x20C8, 0x1ECE, 0x1CD0, 0x1CD0, 0x16D8, 0x0EE4, 0x0CEC,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0001, 0x0001, 0x0001, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};
