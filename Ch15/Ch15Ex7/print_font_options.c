#include "print_font_options.h"
#include "definitions.h"
#include <stdio.h>

void print_font_options(unsigned int font_options)
{
    unsigned int id, size, alignment, state_bold, state_italic,
        state_underline;
    const char *alignment_str[3] = {"left", "center", "right"};

    id = font_options & mask_id;
    size = (font_options & mask_size) >> shifts_size;
    alignment = (font_options & mask_alignment) >> shifts_alignment;
    state_bold = (font_options & mask_bold) >> shifts_bold;
    state_italic = (font_options & mask_italic) >> shifts_italic;
    state_underline = (font_options & mask_underline) >> shifts_underline;

    printf(" id  size alignment bold italic underline\n");
    printf("%3u   %3u    %6s  %3s    %3s       %3s\n\n", id, size,
        alignment_str[alignment], state_bold ? "on" : "off",
        state_italic ? "on" : "off", state_underline ? "on" : "off");
}
