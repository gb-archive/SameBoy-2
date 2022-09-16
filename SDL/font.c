#include "font.h"

#define _ 0
#define X 1

uint8_t font[] = {
    /*   */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    
    /* ! */
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    
    /* " */
    X, X, _, X, X, _,
    _, X, _, X, _, _,
    _, X, _, X, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    
    /* # */
    _, X, _, X, _, _,
    _, X, _, X, _, _,
    X, X, X, X, X, _,
    _, X, _, X, _, _,
    X, X, X, X, X, _,
    _, X, _, X, _, _,
    _, X, _, X, _, _,
    _, _, _, _, _, _,
    
    /* $ */
    _, _, X, _, _, _,
    _, X, X, X, _, _,
    X, _, X, _, X, _,
    _, X, X, _, _, _,
    _, _, X, X, _, _,
    X, _, X, _, X, _,
    _, X, X, X, _, _,
    _, _, X, _, _, _,
    
    /* % */
    _, _, _, _, _, _,
    X, X, _, _, _, X,
    X, X, _, _, X, _,
    _, _, _, X, _, _,
    _, _, X, _, _, _,
    _, X, _, _, X, X,
    X, _, _, _, X, X,
    _, _, _, _, _, _,
    
    /* & */
    _, X, X, _, _, _,
    X, _, _, X, _, _,
    X, _, _, X, _, _,
    _, X, X, _, X, _,
    X, _, _, X, _, _,
    X, _, _, X, _, _,
    _, X, X, _, X, _,
    _, _, _, _, _, _,
    
    /* ' */
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    
    /* ( */
    _, _, _, X, _, _,
    _, _, X, _, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, _, X, _, _, _,
    _, _, _, X, _, _,
    
    /* ) */
    _, X, _, _, _, _,
    _, _, X, _, _, _,
    _, _, _, X, _, _,
    _, _, _, X, _, _,
    _, _, _, X, _, _,
    _, _, _, X, _, _,
    _, _, X, _, _, _,
    _, X, _, _, _, _,
    
    /* * */
    _, _, _, _, _, _,
    _, _, X, _, _, _,
    X, _, X, _, X, _,
    _, X, X, X, _, _,
    X, _, X, _, X, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    
    /* + */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    X, X, X, X, X, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    
    /*, */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, X, _, _, _, _,
    
    /* - */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, X, X, X, X, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    
    /* . */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    
    /* / */
    _, _, _, _, X, _,
    _, _, _, _, X, _,
    _, _, _, X, _, _,
    _, _, _, X, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    
    /* 0 */
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* 1 */
    _, _, X, _, _, _,
    X, X, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    X, X, X, X, X, _,
    _, _, _, _, _, _,
    
    /* 2 */
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    _, _, _, _, X, _,
    _, _, X, X, _, _,
    _, X, _, _, _, _,
    X, _, _, _, _, _,
    X, X, X, X, X, _,
    _, _, _, _, _, _,
    
    /* 3 */
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    _, _, _, _, X, _,
    _, _, X, X, _, _,
    _, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* 4 */
    _, _, _, X, _, _,
    _, _, X, X, _, _,
    _, X, _, X, _, _,
    X, _, _, X, _, _,
    X, X, X, X, X, _,
    _, _, _, X, _, _,
    _, _, _, X, _, _,
    _, _, _, _, _, _,
    
    /* 5 */
    X, X, X, X, X, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, X, X, X, _, _,
    _, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* 6 */
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, _, _,
    X, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* 7 */
    X, X, X, X, X, _,
    _, _, _, _, X, _,
    _, _, _, X, _, _,
    _, _, _, X, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    
    /* 8 */
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* 9 */
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, X, _,
    _, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* : */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    
    /* ; */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, X, _, _, _, _,
    
    /* < */
    _, _, _, _, _, _,
    _, _, _, _, X, _,
    _, _, X, X, _, _,
    X, X, _, _, _, _,
    X, X, _, _, _, _,
    _, _, X, X, _, _,
    _, _, _, _, X, _,
    _, _, _, _, _, _,
    
    /* = */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, X, X, X, X, _,
    _, _, _, _, _, _,
    X, X, X, X, X, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    
    /* > */
    _, _, _, _, _, _,
    X, _, _, _, _, _,
    _, X, X, _, _, _,
    _, _, _, X, X, _,
    _, _, _, X, X, _,
    _, X, X, _, _, _,
    X, _, _, _, _, _,
    _, _, _, _, _, _,
    
    /* ? */
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    _, _, _, _, X, _,
    _, _, X, X, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    
    /* @ */
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, X, X, _,
    X, _, X, _, X, _,
    X, _, X, _, X, _,
    X, _, _, X, X, _,
    X, _, _, _, _, _,
    _, X, X, X, X, _,
    
    /* A */
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, X, _, X, _, _,
    _, X, _, X, _, _,
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, _, _, _, _, _,
    
    /* B */
    X, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* C */
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* D */
    X, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* E */
    X, X, X, X, X, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, X, X, X, _, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, X, X, X, X, _,
    _, _, _, _, _, _,
    
    /* F */
    X, X, X, X, X, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, X, X, X, _, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    _, _, _, _, _, _,
    
    /* G */
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, _, _,
    X, _, X, X, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* H */
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, X, X, X, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, _, _, _, _, _,
    
    /* I */
    X, X, X, X, X, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    X, X, X, X, X, _,
    _, _, _, _, _, _,
    
    /* J */
    _, _, X, X, X, _,
    _, _, _, _, X, _,
    _, _, _, _, X, _,
    _, _, _, _, X, _,
    _, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* K */
    X, _, _, _, X, _,
    X, _, _, X, _, _,
    X, _, X, _, _, _,
    X, X, _, _, _, _,
    X, _, X, _, _, _,
    X, _, _, X, _, _,
    X, _, _, _, X, _,
    _, _, _, _, _, _,
    
    /* L */
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, X, X, X, X, _,
    _, _, _, _, _, _,
    
    /* M */
    X, _, _, _, X, _,
    X, X, _, X, X, _,
    X, X, _, X, X, _,
    X, _, X, _, X, _,
    X, _, X, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, _, _, _, _, _,
    
    /* N */
    X, _, _, _, X, _,
    X, X, _, _, X, _,
    X, _, X, _, X, _,
    X, _, X, _, X, _,
    X, _, X, _, X, _,
    X, _, _, X, X, _,
    X, _, _, _, X, _,
    _, _, _, _, _, _,
    
    /* O */
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* P */
    X, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, X, X, X, _, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    _, _, _, _, _, _,
    
    /* Q */
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, X, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, X, X,
    
    /* R */
    X, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, X, X, X, _, _,
    X, _, X, _, _, _,
    X, _, _, X, _, _,
    X, _, _, _, X, _,
    _, _, _, _, _, _,
    
    /* S */
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, _, _,
    _, X, X, X, _, _,
    _, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* T */
    X, X, X, X, X, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    
    /* U */
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* V */
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, _, X, _, _,
    _, X, _, X, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    
    /* W */
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, X, _, X, _,
    X, _, X, _, X, _,
    X, X, _, X, X, _,
    X, X, _, X, X, _,
    X, _, _, _, X, _,
    _, _, _, _, _, _,
    
    /* X */
    X, _, _, _, X, _,
    _, X, _, X, _, _,
    _, X, _, X, _, _,
    _, _, X, _, _, _,
    _, X, _, X, _, _,
    _, X, _, X, _, _,
    X, _, _, _, X, _,
    _, _, _, _, _, _,
    
    /* Y */
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, _, X, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    
    /* Z */
    X, X, X, X, X, _,
    _, _, _, _, X, _,
    _, _, _, X, _, _,
    _, _, X, _, _, _,
    _, X, _, _, _, _,
    X, _, _, _, _, _,
    X, X, X, X, X, _,
    _, _, _, _, _, _,
    
    /* [ */
    _, X, X, X, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, X, X, X, _, _,
    
    /* \ */
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, _, X, _, _,
    _, _, _, X, _, _,
    _, _, _, _, X, _,
    _, _, _, _, X, _,
    
    /* ] */
    _, X, X, X, _, _,
    _, _, _, X, _, _,
    _, _, _, X, _, _,
    _, _, _, X, _, _,
    _, _, _, X, _, _,
    _, _, _, X, _, _,
    _, _, _, X, _, _,
    _, X, X, X, _, _,
    
    /* ^ */
    _, _, X, _, _, _,
    _, X, _, X, _, _,
    _, X, _, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    
    /* _ */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, X, X, X, X, X,
    
    /* ` */
    _, X, _, _, _, _,
    _, _, X, _, _, _,
    _, _, _, X, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    
    /* a */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, X, X, _, _, _,
    _, _, _, X, _, _,
    _, X, X, X, _, _,
    X, _, _, X, _, _,
    _, X, X, _, X, _,
    _, _, _, _, _, _,
    
    /* b */
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, _, X, X, _, _,
    X, X, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* c */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, _, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* d */
    _, _, _, _, X, _,
    _, _, _, _, X, _,
    _, X, X, X, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, X, _,
    _, _, _, _, _, _,
    
    /* e */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, X, X, X, X, _,
    X, _, _, _, _, _,
    _, X, X, X, X, _,
    _, _, _, _, _, _,
    
    /* f */
    _, _, X, X, _, _,
    _, X, _, _, _, _,
    X, X, X, X, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, _, _, _, _, _,
    
    /* g */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, X, X, X, X, _,
    X, _, _, X, _, _,
    _, X, X, _, _, _,
    _, _, _, X, X, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    
    /* h */
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, _, X, X, _, _,
    X, X, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, _, _, _, _, _,
    
    /* i */
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    X, X, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    
    /* j */
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    X, X, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    X, X, _, _, _, _,
    
    /* k */
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, _, _, _, X, _,
    X, _, X, X, _, _,
    X, X, _, _, _, _,
    X, _, X, X, _, _,
    X, _, _, _, X, _,
    _, _, _, _, _, _,
    
    /* l */
    X, X, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, _, X, X, _,
    _, _, _, _, _, _,
    
    /* m */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, X, X, X, _, _,
    X, _, X, _, X, _,
    X, _, X, _, X, _,
    X, _, X, _, X, _,
    X, _, X, _, X, _,
    _, _, _, _, _, _,
    
    /* n */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, _, X, X, _, _,
    X, X, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, _, _, _, _, _,
    
    /* o */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* p */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, X, X, X, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, X, _, _, X, _,
    X, _, X, X, _, _,
    X, _, _, _, _, _,
    
    /* q */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, X, X, X, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, X, X, _,
    _, X, X, _, X, _,
    _, _, _, _, X, _,
    
    /* r */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, X, _, X, _, _,
    _, X, X, _, X, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, _, _, _, _, _,
    
    /* s */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, X, X, X, X, _,
    X, _, _, _, _, _,
    _, X, X, X, _, _,
    _, _, _, _, X, _,
    X, X, X, X, _, _,
    _, _, _, _, _, _,
    
    /* t */
    _, _, _, _, _, _,
    _, X, _, _, _, _,
    X, X, X, X, X, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, _, X, X, X, _,
    _, _, _, _, _, _,
    
    /* u */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, X, X, _,
    _, X, X, _, X, _,
    _, _, _, _, _, _,
    
    /* v */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    _, X, _, X, _, _,
    _, X, _, X, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    
    /* w */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, _, _, _, X, _,
    X, _, X, _, X, _,
    X, _, X, _, X, _,
    _, X, _, X, _, _,
    _, X, _, X, _, _,
    _, _, _, _, _, _,
    
    /* x */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, _, _, _, X, _,
    _, X, _, X, _, _,
    _, _, X, _, _, _,
    _, X, _, X, _, _,
    X, _, _, _, X, _,
    _, _, _, _, _, _,
    
    /* y */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, X, X, _,
    _, X, X, _, X, _,
    _, _, _, _, X, _,
    _, X, X, X, _, _,
    
    /* z */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, X, X, X, X, _,
    _, _, _, X, _, _,
    _, _, X, _, _, _,
    _, X, _, _, _, _,
    X, X, X, X, X, _,
    _, _, _, _, _, _,
    
    /* { */
    _, _, X, X, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, X, _, _, _, _,
    _, X, _, _, _, _,
    _, _, X, X, _, _,
    
    /* | */
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    
    /* } */
    _, X, X, _, _, _,
    _, _, _, X, _, _,
    _, _, _, X, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, _, X, _, _,
    _, _, _, X, _, _,
    _, X, X, _, _, _,
    
    /* ~ */
    _, _, _, _, _, X,
    _, _, _, _, _, _,
    _, _, X, _, _, X,
    _, X, _, X, _, X,
    _, X, _, _, X, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    
    /* Custom characters */
    /* Selection */
    _, X, _, _, _, _,
    _, X, X, _, _, _,
    _, X, X, X, _, _,
    _, X, X, X, X, _,
    _, X, X, X, _, _,
    _, X, X, _, _, _,
    _, X, _, _, _, _,
    _, _, _, _, _, _,

    
    /* CTRL symbol */
    _, X, X, _, _, X,
    X, _, _, X, _, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, _, _, _, _, _,
    X, _, _, X, _, _,
    _, X, X, _, _, _,
    _, _, _, _, _, _,
    
    X, X, _, X, X, X,
    X, _, _, X, _, _,
    X, _, _, X, _, _,
    X, _, _, X, _, _,
    X, _, _, X, X, X,
    X, _, _, X, _, X,
    X, _, _, X, _, _,
    _, _, _, _, _, _,
    
    _, _, X, _, _, _,
    X, _, X, _, _, _,
    X, _, X, _, _, _,
    X, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    X, _, X, X, X, X,
    _, _, _, _, _, _,
    
    /* Shift symbol */
    _, _, X, X, _, _,
    _, X, X, X, X, _,
    X, X, X, X, X, X,
    _, X, X, X, X, _,
    _, X, X, X, X, _,
    _, X, X, X, X, _,
    _, X, X, X, X, _,
    _, _, _, _, _, _,
    
    /* Cmd symbol */
    
    _, _, _, _, _, X,
    _, _, _, _, X, _,
    _, _, _, _, _, X,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, X,
    _, _, _, _, X, _,
    _, _, _, _, _, X,
    
    _, _, _, _, X, _,
    X, _, _, X, _, X,
    X, X, X, X, X, _,
    X, _, _, X, _, _,
    X, _, _, X, _, _,
    X, X, X, X, X, _,
    X, _, _, X, _, X,
    _, _, _, _, X, _,
    
    /* Left Arrow */
    _, _, _, _, X, _,
    _, _, _, X, X, _,
    _, _, X, X, X, _,
    _, X, X, X, X, _,
    _, _, X, X, X, _,
    _, _, _, X, X, _,
    _, _, _, _, X, _,
    _, _, _, _, _, _,
    
    /* Elipsis */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, _, X, _, X, _,
    _, _, _, _, _, _,
    
    /* Mojibake */
    X, X, X, X, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, X, X, X, X, _,
    
    /* Slider */
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, X, X, X, X,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, X, X, X, X, X,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    X, X, X, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    
    /* Slider, selected */
    _, X, X, X, _, _,
    _, X, X, X, _, _,
    _, X, X, X, _, _,
    _, X, X, X, X, X,
    _, X, X, X, _, _,
    _, X, X, X, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    
    _, X, X, X, _, _,
    _, X, X, X, _, _,
    _, X, X, X, _, _,
    X, X, X, X, X, X,
    _, X, X, X, _, _,
    _, X, X, X, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    
    _, X, X, X, _, _,
    _, X, X, X, _, _,
    _, X, X, X, _, _,
    X, X, X, X, _, _,
    _, X, X, X, _, _,
    _, X, X, X, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    
    /* Slider, tick*/
    _, _, _, _, _, _,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    X, X, X, X, X, X,
    _, _, X, _, _, _,
    _, _, X, _, _, _,
    _, _, _, _, _, _,
    _, _, _, _, _, _,
    
    /* Copyright symbol*/
    _, X, X, X, X, _,
    X, _, _, _, _, X,
    X, _, X, X, _, X,
    X, _, X, _, _, X,
    X, _, X, _, _, X,
    X, _, X, X, _, X,
    X, _, _, _, _, X,
    _, X, X, X, X, _,
    
    /* Alt symbol */
    
    _, _, X, X, _, _,
    _, X, _, _, X, _,
    _, X, _, _, X, _,
    _, X, _, _, X, _,
    _, X, X, X, X, _,
    _, X, _, _, X, _,
    _, X, _, _, X, _,
    _, _, _, _, _, _,
    
    X, _, _, X, X, X,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, _, _, _, X, _,
    X, X, X, _, X, _,
    _, _, _, _, _, _,
};

const uint8_t font_max = sizeof(font) / GLYPH_HEIGHT / GLYPH_WIDTH + ' ';
