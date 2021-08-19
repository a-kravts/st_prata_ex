/*Definitions for Ch15Ex7*/
enum {
    mask_id        = 0xff,
    mask_size      = 0x7f00,
    mask_alignment = 0x18000,
    mask_bold      = 0x20000,
    mask_italic    = 0x40000,
    mask_underline = 0x80000
};

enum {
    shifts_size      = 8,
    shifts_alignment = 15,
    shifts_bold      = 17,
    shifts_italic    = 18,
    shifts_underline = 19
};
