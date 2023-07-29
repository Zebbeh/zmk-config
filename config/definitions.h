/*
*
* Copyright (c) 2022 Cu3b
* SPDX-License-Identifier: MIT
*
*/

// Layers:
#define BASE  0
#define SYM   1
#define NUM   2
#define ARR   3
#define SHC   4
#define MEDIA 5

// Hold tap key timers
#define QUICK_TAP    250
#define TAPPING_TERM 175
#define HR_TAPPING_TERM 175
#define COMBO_TERM_S 30
#define COMBO_TERM_M 50
#define COMBO_TERM_L 65

// Aliases for FI and SWE characters for corresponding KC-codes, windows environment.
// Letters:
#define F_ARNG  (LBKT)                   // Å
#define F_ODIA  (SEMI)                   // Ö
#define F_ADIA  (SQT)                    // Ä

// Symbols: 
#define F_COMM  (COMMA)                  // ,
#define F_DOT   (DOT)                    // .
#define F_SECT  (GRAVE)                  // §
#define F_LABK  (NON_US_BSLH)            // < (ISO)
#define F_PLUS  (MINUS)                  // +
#define F_ACUT  (EQUAL)                  // ´ (dead)
#define F_QUOT  (NON_US_HASH)            // ' (ISO)
#define F_MINS  (SLASH)                  // -
#define F_DQUO  (LS(N2))                 // "
#define F_HASH  (LS(N3))                 // #
#define F_CURR  (LS(N4))                 // ¤
#define F_DIAE  (RBKT)                   // ¨ (dead)
// Shifted symbols:
#define F_HALF  (LS(GRAVE))              // ½
#define F_EXLM  (LS(N1))                 // !
#define F_PERC  (LS(N5))                 // %
#define F_AMPR  (LS(N6))                 // &
#define F_FSLH  (LS(N7))                 // /
#define F_LPRN  (LS(N8))                 // (
#define F_RPRN  (LS(N9))                 // )
#define F_EQL   (LS(N0))                 // =
#define F_QUES  (LS(MINUS))              // ?
#define F_GRV   (LS(EQUAL))              // ` (dead)
#define F_CIRC  (LS(RBKT))               // ^ (dead)
#define F_ASTR  (LS(NON_US_HASH))        // *
#define F_RABK  (LS(NON_US_BSLH))        // >
#define F_SCLN  (LS(COMMA))              // ;
#define F_COLN  (LS(DOT))                // :
#define F_UNDS  (LS(SLASH))              // _
// AltGr symbols:
#define F_AT    (RA(N2))                 // @
#define F_PND   (RA(N3))                 // £
#define F_DLR   (RA(N4))                 // $
#define F_EURO  (RA(N5))                 // €
#define F_LBRC  (RA(N7))                 // {
#define F_LBKT  (RA(N8))                 // [
#define F_RBKT  (RA(N9))                 // ]
#define F_RBRC  (RA(N0))                 // }
#define F_BSLH  (RA(MINUS))              // (backslash)
#define F_TILD  (RA(RBKT))               // ~ (dead)
#define F_PIPE  (RA(NON_US_BSLH))        // |
#define F_MICR  (RA(M))                  // µ
// Shortcuts:
#define F_BRK   (LC(PAUSE_BREAK))        // break, ctrl + pause

#define TskView (LG(TAB))                // Task view
#define TaskMgr LC(LS(ESC))              // Task manager

#define ShwDstp (LG(D))                 // Show desktop
#define ClsDstp (LG(LC(F4)))             // Close virtual desktop
#define NewDstp (LG(LC(D)))              // New virtual desktop
#define PrvDstp (LG(LC(LEFT)))           // Previous virtual desktop
#define NxtDstp (LG(LC(RIGHT)))           // Next virtual desktop

#define SC_Clse (LA(F4))                 // Close window
#define PrevTab  (LC(PG_UP))             // Previous tab (win), ctrl + pgup
#define NextTab  (LC(PG_DN))             // Next tab (win), ctrl + pgdn
#define RestTab  (LC(LS(T)))             // Restore tab (Browser), ctrl + shift + T  toimiiko???
#define ClseTab  (LC(W))                 // Close tab (Ctrl + W)

#define SC_Lock (LG(L))                  // Lock windows
#define SC_Snip (LG(LS(S)))              // Windows snipping tool

#define SC_Psth (LG(V))                  // Paste with history
#define SC_Undo (LC(Z))                  // Undo
#define SC_Cut  (LC(X))                  // Cut
#define SC_Copy (LC(C))                  // Copy
#define SC_Pste (LC(V))                  // Paste
#define SC_SelA (LC(A))                  // Select all
#define SC_Find (LC(F))                  // Find
#define SC_Redo (LC(LS(Z)))              // Redo
#define SC_Save (LC(S))                  // Save
#define SC_MicM (LC(LS(M)))              // Mute microphone in MS Teams
