typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;

struct Unk2106FA0 {
    u8 filler0[0x8];
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
};

extern struct Unk2106FA0 gUnknown2106FA0;

void sub_02000DF4(void)
{
    gUnknown2106FA0.unk8 = ~0;
    gUnknown2106FA0.unkC = 0;
    gUnknown2106FA0.unk10 = ~0;
    gUnknown2106FA0.unk14 = 0;
}
