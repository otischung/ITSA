#include <stdio.h>

int main() {
    char map[95];
    char c;

    map[0] = ' ';   // 32: space
    map[1] = '@';   // 33: !
    map[2] = '"';   // 34: "
    map[3] = '$';   // 35: #
    map[4] = '%';   // 36: $
    map[5] = '^';   // 37: %
    map[6] = '*';   // 38: &
    map[7] = '\'';  // 39: '
    map[8] = ')';   // 40: (
    map[9] = '_';   // 41: )
    map[10] = '(';  // 42: *
    map[11] = '+';  // 43: +
    map[12] = '.';  // 44: ,
    map[13] = '=';  // 45: -
    map[14] = '/';  // 46: .
    map[15] = '/';  // 47: /
    map[16] = '-';  // 48: 0
    map[17] = '2';  // 49: 1
    map[18] = '3';  // 50: 2
    map[19] = '4';  // 51: 3
    map[20] = '5';  // 52: 4
    map[21] = '6';  // 53: 5
    map[22] = '7';  // 54: 6
    map[23] = '8';  // 55: 7
    map[24] = '9';  // 56: 8
    map[25] = '0';  // 57: 9
    map[26] = '"';  // 58: :
    map[27] = '\''; // 59: ;
    map[28] = '>';  // 60: <
    map[29] = '=';  // 61: =
    map[30] = '?';  // 62: >
    map[31] = '?';  // 63: ?
    map[32] = '#';  // 64: @
    map[33] = 's';  // 65: A
    map[34] = 'n';  // 66: B
    map[35] = 'v';  // 67: C
    map[36] = 'f';  // 68: D
    map[37] = 'r';  // 69: E
    map[38] = 'g';  // 70: F
    map[39] = 'h';  // 71: G
    map[40] = 'j';  // 72: H
    map[41] = 'o';  // 73: I
    map[42] = 'k';  // 74: J
    map[43] = 'l';  // 75: K
    map[44] = ';';  // 76: L
    map[45] = ',';  // 77: M
    map[46] = 'm';  // 78: N
    map[47] = 'p';  // 79: O
    map[48] = '[';  // 80: P
    map[49] = 'w';  // 81: Q
    map[50] = 't';  // 82: R
    map[51] = 'd';  // 83: S
    map[52] = 'y';  // 84: T
    map[53] = 'i';  // 85: U
    map[54] = 'b';  // 86: V
    map[55] = 'e';  // 87: W
    map[56] = 'c';  // 88: X
    map[57] = 'u';  // 89: Y
    map[58] = 'x';  // 90: Z
    map[59] = ']';  // 91: [
    map[60] = '\\'; // 92: '\'
    map[61] = '\\'; // 93: ]
    map[62] = '&';  // 94: ^
    map[63] = '+';  // 95: _
    map[64] = '1';  // 96: `
    map[65] = 's';  // 97: a
    map[66] = 'n';  // 98: b
    map[67] = 'v';  // 99: c
    map[68] = 'f';  // 100: d
    map[69] = 'r';  // 101: e
    map[70] = 'g';  // 102: f
    map[71] = 'h';  // 103: g
    map[72] = 'j';  // 104: h
    map[73] = 'o';  // 105: i
    map[74] = 'k';  // 106: j
    map[75] = 'l';  // 107: k
    map[76] = ';';  // 108: l
    map[77] = ',';  // 109: m
    map[78] = 'm';  // 110: n
    map[79] = 'p';  // 111: o
    map[80] = '[';  // 112: p
    map[81] = 'w';  // 113: q
    map[82] = 't';  // 114: r
    map[83] = 'd';  // 115: s
    map[84] = 'y';  // 116: t
    map[85] = 'i';  // 117: u
    map[86] = 'b';  // 118: v
    map[87] = 'e';  // 119: w
    map[88] = 'c';  // 120: x
    map[89] = 'u';  // 121: y
    map[90] = 'x';  // 122: z
    map[91] = '}';  // 123: {
    map[92] = '|';  // 124: |
    map[93] = '|';  // 125: }
    map[94] = '!';  // 126: ~

    while (1) {
        c = getchar();
        if (c == EOF || c == '\n') break;
        if (c >= 32 && c <= 126) putchar(map[c - 32]);
    }
    putchar('\n');
    return 0;
}
