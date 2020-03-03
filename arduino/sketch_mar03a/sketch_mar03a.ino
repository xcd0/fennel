

void setup() {
	// put your setup code here, to run once:

	/*
	   1	D1	TXO	x
	   2	D0	RXI	x
	   3	GND	GND	gnd
	   4	GND	GND	gnd
	   5	D2	2	x
	   6	D3	3	x
	   7	D4	4	software_reset
	   8	D5	5	ser
	   9	D6	6	sck
	   10	D7	7	scl
	   11	D8	8	rck
	   12	D9	9	oe
	   13	D10	10	row5
	   14	D16	16	row4
	   15	D14	14	row3
	   16	D15	15	row2
	   17	A0	A0	row1
	   18	A1	A1	row0
	   19	A2	A2	x
	   20	A3	A3	x
	   21	VCC	VCC	vcc
	   22	RST	RST	hardware_reset
	   23	GND	GND	gnd
	   24	RAW	RAW	x
	 */

	pinMode( 4, INPUT );
	pinMode( 5, OUTPUT );
	pinMode( 6, OUTPUT );
	pinMode( 7, OUTPUT );
	pinMode( 8, OUTPUT );
	pinMode( 9, INPUT );
	pinMode( 10, INPUT );
	pinMode( 16, INPUT );
	pinMode( 14, INPUT );
	pinMode( 15, INPUT );
	pinMode( A0,INPUT_PULLUP ); // 入力プルアップ抵抗付加
	pinMode( A1,INPUT_PULLUP ); // 入力プルアップ抵抗付加
}


#define srst	4 
#define ser 	5 
#define sck 	6 
#define scl 	7 
#define rck 	8 
#define oe  	9 
#define row5	10
#define row4	16
#define row3	14
#define row2	15
#define row1	A0
#define row0	A1


#define JP_ZHTG KC_GRV   // hankaku/zenkaku|kanzi
#define JP_YEN KC_INT3   // yen, |
#define JP_CIRC KC_EQL   // ^, ~
#define JP_AT KC_LBRC    // @, `
#define JP_LBRC KC_RBRC  // [, {
#define JP_COLN KC_QUOT  // :, *
#define JP_RBRC KC_NUHS  // ], }
#define JP_BSLS KC_INT1  // \, _
#define JP_MHEN KC_INT5  // muhenkan
#define JP_HENK KC_INT4  // henkan
#define JP_KANA KC_INT2  // katakana/hiragana|ro-mazi

#define JP_MKANA KC_LANG1  // kana on MacOSX
#define JP_MEISU KC_LANG2  // eisu on MacOSX

// Aliases for shifted symbols
#define JP_DQT LSFT(KC_2)      // "
#define JP_AMPR LSFT(KC_6)     // &
#define JP_QUOT LSFT(KC_7)     // '
#define JP_LPRN LSFT(KC_8)     // (
#define JP_RPRN LSFT(KC_9)     // )
#define JP_EQL LSFT(KC_MINS)   // =
#define JP_TILD LSFT(JP_CIRC)  // ~
#define JP_PIPE LSFT(JP_YEN)   // |
#define JP_GRV LSFT(JP_AT)     // `
#define JP_LCBR LSFT(JP_LBRC)  // {
#define JP_PLUS LSFT(KC_SCLN)  // +
#define JP_ASTR LSFT(JP_COLN)  // *
#define JP_RCBR LSFT(JP_RBRC)  // }
#define JP_UNDS LSFT(JP_BSLS)  // _

// These symbols are correspond to US101-layout.
#define JP_MINS KC_MINS  // -
#define JP_SCLN KC_SCLN  // ;
#define JP_COMM KC_COMM  // ,
#define JP_DOT KC_DOT    // .
#define JP_SLSH KC_SLSH  // /
// shifted
#define JP_EXLM KC_EXLM  // !
#define JP_HASH KC_HASH  // #
#define JP_DLR KC_DLR    // $
#define JP_PERC KC_PERC  // %
#define JP_LT KC_LT      // <
#define JP_GT KC_GT      // >
#define JP_QUES KC_QUES  // ?
/*
 * Short names for ease of definition of keymap
 */
/* Transparent */
#define KC_TRANSPARENT 0x01
#define KC_TRNS KC_TRANSPARENT

/* Punctuation */
#define KC_ENT KC_ENTER
#define KC_ESC KC_ESCAPE
#define KC_BSPC KC_BSPACE
#define KC_SPC KC_SPACE
#define KC_MINS KC_MINUS
#define KC_EQL KC_EQUAL
#define KC_LBRC KC_LBRACKET
#define KC_RBRC KC_RBRACKET
#define KC_BSLS KC_BSLASH
#define KC_NUHS KC_NONUS_HASH
#define KC_SCLN KC_SCOLON
#define KC_QUOT KC_QUOTE
#define KC_GRV KC_GRAVE
#define KC_COMM KC_COMMA
#define KC_SLSH KC_SLASH
#define KC_NUBS KC_NONUS_BSLASH

/* Lock Keys */
#define KC_CLCK KC_CAPSLOCK
#define KC_CAPS KC_CAPSLOCK
#define KC_SLCK KC_SCROLLLOCK
#define KC_NLCK KC_NUMLOCK
#define KC_LCAP KC_LOCKING_CAPS
#define KC_LNUM KC_LOCKING_NUM
#define KC_LSCR KC_LOCKING_SCROLL

/* Commands */
#define KC_PSCR KC_PSCREEN
#define KC_PAUS KC_PAUSE
#define KC_BRK KC_PAUSE
#define KC_INS KC_INSERT
#define KC_DEL KC_DELETE
#define KC_PGDN KC_PGDOWN
#define KC_RGHT KC_RIGHT
#define KC_APP KC_APPLICATION
#define KC_EXEC KC_EXECUTE
#define KC_SLCT KC_SELECT
#define KC_AGIN KC_AGAIN
#define KC_PSTE KC_PASTE
#define KC_ERAS KC_ALT_ERASE
#define KC_CLR KC_CLEAR

/* Keypad */
#define KC_PSLS KC_KP_SLASH
#define KC_PAST KC_KP_ASTERISK
#define KC_PMNS KC_KP_MINUS
#define KC_PPLS KC_KP_PLUS
#define KC_PENT KC_KP_ENTER
#define KC_P1 KC_KP_1
#define KC_P2 KC_KP_2
#define KC_P3 KC_KP_3
#define KC_P4 KC_KP_4
#define KC_P5 KC_KP_5
#define KC_P6 KC_KP_6
#define KC_P7 KC_KP_7
#define KC_P8 KC_KP_8
#define KC_P9 KC_KP_9
#define KC_P0 KC_KP_0
#define KC_PDOT KC_KP_DOT
#define KC_PEQL KC_KP_EQUAL
#define KC_PCMM KC_KP_COMMA

/* Japanese specific */
#define KC_ZKHK KC_GRAVE
#define KC_RO KC_INT1
#define KC_KANA KC_INT2
#define KC_JYEN KC_INT3
#define KC_HENK KC_INT4
#define KC_MHEN KC_INT5

/* Korean specific */
#define KC_HAEN KC_LANG1
#define KC_HANJ KC_LANG2

/* Modifiers */
#define KC_LCTL KC_LCTRL
#define KC_LSFT KC_LSHIFT
#define KC_LCMD KC_LGUI
#define KC_LWIN KC_LGUI
#define KC_RCTL KC_RCTRL
#define KC_RSFT KC_RSHIFT
#define KC_ALGR KC_RALT
#define KC_RCMD KC_RGUI
#define KC_RWIN KC_RGUI

/* Generic Desktop Page (0x01) */
#define KC_PWR KC_SYSTEM_POWER
#define KC_SLEP KC_SYSTEM_SLEEP
#define KC_WAKE KC_SYSTEM_WAKE

/* Consumer Page (0x0C) */
#define KC_MUTE KC_AUDIO_MUTE
#define KC_VOLU KC_AUDIO_VOL_UP
#define KC_VOLD KC_AUDIO_VOL_DOWN
#define KC_MNXT KC_MEDIA_NEXT_TRACK
#define KC_MPRV KC_MEDIA_PREV_TRACK
#define KC_MSTP KC_MEDIA_STOP
#define KC_MPLY KC_MEDIA_PLAY_PAUSE
#define KC_MSEL KC_MEDIA_SELECT
#define KC_EJCT KC_MEDIA_EJECT
#define KC_CALC KC_CALCULATOR
#define KC_MYCM KC_MY_COMPUTER
#define KC_WSCH KC_WWW_SEARCH
#define KC_WHOM KC_WWW_HOME
#define KC_WBAK KC_WWW_BACK
#define KC_WFWD KC_WWW_FORWARD
#define KC_WSTP KC_WWW_STOP
#define KC_WREF KC_WWW_REFRESH
#define KC_WFAV KC_WWW_FAVORITES
#define KC_MFFD KC_MEDIA_FAST_FORWARD
#define KC_MRWD KC_MEDIA_REWIND
#define KC_BRIU KC_BRIGHTNESS_UP
#define KC_BRID KC_BRIGHTNESS_DOWN

/* System Specific */
#define KC_BRMU KC_PAUSE
#define KC_BRMD KC_SCROLLLOCK

/* Mouse Keys */
#define KC_MS_U KC_MS_UP
#define KC_MS_D KC_MS_DOWN
#define KC_MS_L KC_MS_LEFT
#define KC_MS_R KC_MS_RIGHT
#define KC_BTN1 KC_MS_BTN1
#define KC_BTN2 KC_MS_BTN2
#define KC_BTN3 KC_MS_BTN3
#define KC_BTN4 KC_MS_BTN4
#define KC_BTN5 KC_MS_BTN5
#define KC_WH_U KC_MS_WH_UP
#define KC_WH_D KC_MS_WH_DOWN
#define KC_WH_L KC_MS_WH_LEFT
#define KC_WH_R KC_MS_WH_RIGHT
#define KC_ACL0 KC_MS_ACCEL0
#define KC_ACL1 KC_MS_ACCEL1
#define KC_ACL2 KC_MS_ACCEL2

/* Keyboard/Keypad Page (0x07) */
enum hid_keyboard_keypad_usage {
    KC_NO = 0x00,
    KC_ROLL_OVER,
    KC_POST_FAIL,
    KC_UNDEFINED,
    KC_A,
    KC_B,
    KC_C,
    KC_D,
    KC_E,
    KC_F,
    KC_G,
    KC_H,
    KC_I,
    KC_J,
    KC_K,
    KC_L,
    KC_M,  // 0x10
    KC_N,
    KC_O,
    KC_P,
    KC_Q,
    KC_R,
    KC_S,
    KC_T,
    KC_U,
    KC_V,
    KC_W,
    KC_X,
    KC_Y,
    KC_Z,
    KC_1,
    KC_2,
    KC_3,  // 0x20
    KC_4,
    KC_5,
    KC_6,
    KC_7,
    KC_8,
    KC_9,
    KC_0,
    KC_ENTER,
    KC_ESCAPE,
    KC_BSPACE,
    KC_TAB,
    KC_SPACE,
    KC_MINUS,
    KC_EQUAL,
    KC_LBRACKET,
    KC_RBRACKET,  // 0x30
    KC_BSLASH,
    KC_NONUS_HASH,
    KC_SCOLON,
    KC_QUOTE,
    KC_GRAVE,
    KC_COMMA,
    KC_DOT,
    KC_SLASH,
    KC_CAPSLOCK,
    KC_F1,
    KC_F2,
    KC_F3,
    KC_F4,
    KC_F5,
    KC_F6,
    KC_F7,  // 0x40
    KC_F8,
    KC_F9,
    KC_F10,
    KC_F11,
    KC_F12,
    KC_PSCREEN,
    KC_SCROLLLOCK,
    KC_PAUSE,
    KC_INSERT,
    KC_HOME,
    KC_PGUP,
    KC_DELETE,
    KC_END,
    KC_PGDOWN,
    KC_RIGHT,
    KC_LEFT,  // 0x50
    KC_DOWN,
    KC_UP,
    KC_NUMLOCK,
    KC_KP_SLASH,
    KC_KP_ASTERISK,
    KC_KP_MINUS,
    KC_KP_PLUS,
    KC_KP_ENTER,
    KC_KP_1,
    KC_KP_2,
    KC_KP_3,
    KC_KP_4,
    KC_KP_5,
    KC_KP_6,
    KC_KP_7,
    KC_KP_8,  // 0x60
    KC_KP_9,
    KC_KP_0,
    KC_KP_DOT,
    KC_NONUS_BSLASH,
    KC_APPLICATION,
    KC_POWER,
    KC_KP_EQUAL,
    KC_F13,
    KC_F14,
    KC_F15,
    KC_F16,
    KC_F17,
    KC_F18,
    KC_F19,
    KC_F20,
    KC_F21,  // 0x70
    KC_F22,
    KC_F23,
    KC_F24,
    KC_EXECUTE,
    KC_HELP,
    KC_MENU,
    KC_SELECT,
    KC_STOP,
    KC_AGAIN,
    KC_UNDO,
    KC_CUT,
    KC_COPY,
    KC_PASTE,
    KC_FIND,
    KC__MUTE,
    KC__VOLUP,  // 0x80
    KC__VOLDOWN,
    KC_LOCKING_CAPS,
    KC_LOCKING_NUM,
    KC_LOCKING_SCROLL,
    KC_KP_COMMA,
    KC_KP_EQUAL_AS400,
    KC_INT1,
    KC_INT2,
    KC_INT3,
    KC_INT4,
    KC_INT5,
    KC_INT6,
    KC_INT7,
    KC_INT8,
    KC_INT9,
    KC_LANG1,  // 0x90
    KC_LANG2,
    KC_LANG3,
    KC_LANG4,
    KC_LANG5,
    KC_LANG6,
    KC_LANG7,
    KC_LANG8,
    KC_LANG9,
    KC_ALT_ERASE,
    KC_SYSREQ,
    KC_CANCEL,
    KC_CLEAR,
    KC_PRIOR,
    KC_RETURN,
    KC_SEPARATOR,
    KC_OUT,  // 0xA0
    KC_OPER,
    KC_CLEAR_AGAIN,
    KC_CRSEL,
    KC_EXSEL,

#if 0
  // ***************************************************************
  // These keycodes are present in the HID spec, but are           *
  // nonfunctional on modern OSes. QMK uses this range (0xA5-0xDF) *
  // for the media and function keys instead - see below.          *
  // ***************************************************************

  KC_KP_00                = 0xB0,
  KC_KP_000,
  KC_THOUSANDS_SEPARATOR,
  KC_DECIMAL_SEPARATOR,
  KC_CURRENCY_UNIT,
  KC_CURRENCY_SUB_UNIT,
  KC_KP_LPAREN,
  KC_KP_RPAREN,
  KC_KP_LCBRACKET,
  KC_KP_RCBRACKET,
  KC_KP_TAB,
  KC_KP_BSPACE,
  KC_KP_A,
  KC_KP_B,
  KC_KP_C,
  KC_KP_D,
  KC_KP_E,                //0xC0
  KC_KP_F,
  KC_KP_XOR,
  KC_KP_HAT,
  KC_KP_PERC,
  KC_KP_LT,
  KC_KP_GT,
  KC_KP_AND,
  KC_KP_LAZYAND,
  KC_KP_OR,
  KC_KP_LAZYOR,
  KC_KP_COLON,
  KC_KP_HASH,
  KC_KP_SPACE,
  KC_KP_ATMARK,
  KC_KP_EXCLAMATION,
  KC_KP_MEM_STORE,        //0xD0
  KC_KP_MEM_RECALL,
  KC_KP_MEM_CLEAR,
  KC_KP_MEM_ADD,
  KC_KP_MEM_SUB,
  KC_KP_MEM_MUL,
  KC_KP_MEM_DIV,
  KC_KP_PLUS_MINUS,
  KC_KP_CLEAR,
  KC_KP_CLEAR_ENTRY,
  KC_KP_BINARY,
  KC_KP_OCTAL,
  KC_KP_DECIMAL,
  KC_KP_HEXADECIMAL,
#endif

    /* Modifiers */
    KC_LCTRL = 0xE0,
    KC_LSHIFT,
    KC_LALT,
    KC_LGUI,
    KC_RCTRL,
    KC_RSHIFT,
    KC_RALT,
    KC_RGUI

    // **********************************************
    // * 0xF0-0xFF are unallocated in the HID spec. *
    // * QMK uses these for Mouse Keys - see below. *
    // **********************************************
};

/* Media and Function keys */
enum internal_special_keycodes {
    /* Generic Desktop Page (0x01) */
    KC_SYSTEM_POWER = 0xA5,
    KC_SYSTEM_SLEEP,
    KC_SYSTEM_WAKE,

    /* Consumer Page (0x0C) */
    KC_AUDIO_MUTE,
    KC_AUDIO_VOL_UP,
    KC_AUDIO_VOL_DOWN,
    KC_MEDIA_NEXT_TRACK,
    KC_MEDIA_PREV_TRACK,
    KC_MEDIA_STOP,
    KC_MEDIA_PLAY_PAUSE,
    KC_MEDIA_SELECT,
    KC_MEDIA_EJECT,  // 0xB0
    KC_MAIL,
    KC_CALCULATOR,
    KC_MY_COMPUTER,
    KC_WWW_SEARCH,
    KC_WWW_HOME,
    KC_WWW_BACK,
    KC_WWW_FORWARD,
    KC_WWW_STOP,
    KC_WWW_REFRESH,
    KC_WWW_FAVORITES,
    KC_MEDIA_FAST_FORWARD,
    KC_MEDIA_REWIND,
    KC_BRIGHTNESS_UP,
    KC_BRIGHTNESS_DOWN,

    /* Fn keys */
    KC_FN0 = 0xC0,
    KC_FN1,
    KC_FN2,
    KC_FN3,
    KC_FN4,
    KC_FN5,
    KC_FN6,
    KC_FN7,
    KC_FN8,
    KC_FN9,
    KC_FN10,
    KC_FN11,
    KC_FN12,
    KC_FN13,
    KC_FN14,
    KC_FN15,
    KC_FN16,  // 0xD0
    KC_FN17,
    KC_FN18,
    KC_FN19,
    KC_FN20,
    KC_FN21,
    KC_FN22,
    KC_FN23,
    KC_FN24,
    KC_FN25,
    KC_FN26,
    KC_FN27,
    KC_FN28,
    KC_FN29,
    KC_FN30,
    KC_FN31
};

enum mouse_keys {
    /* Mouse Buttons */
    KC_MS_UP = 0xF0,
    KC_MS_DOWN,
    KC_MS_LEFT,
    KC_MS_RIGHT,
    KC_MS_BTN1,
    KC_MS_BTN2,
    KC_MS_BTN3,
    KC_MS_BTN4,
    KC_MS_BTN5,

    /* Mouse Wheel */
    KC_MS_WH_UP,
    KC_MS_WH_DOWN,
    KC_MS_WH_LEFT,
    KC_MS_WH_RIGHT,

    /* Acceleration */
    KC_MS_ACCEL0,
    KC_MS_ACCEL1,
    KC_MS_ACCEL2
};

boolean rows[6] = { false };

char keymap[91]=
	KC_NONE,   KC_NONE,  KC_F1,  KC_F2,    KC_F3,  KC_F4,   KC_F5,   KC_F8, KC_NO,   KC_F10, KC_F11,   KC_F12,  KC_SLCK, KC_PAUS, KC_NONE,
	KC_NONE,   KC_ESC,   KC_1,   KC_2,     KC_3,   KC_4,    KC_5,    KC_F7, KC_NONE, KC_9,   KC_0,     KC_MINS, KC_DEL,  KC_PSCR, KC_NONE,
	KC_HOME,   KC_TAB,   KC_Q,   KC_W,     KC_E,   KC_R,    KC_T,    KC_F6, KC_F9,   KC_I,   KC_O,     KC_P,    KC_BS,   KC_PGUP, KC_NONE,
	KC_END,    KC_SHIFT, KC_A,   KC_S,     KC_D,   KC_F,    KC_G,    KC_6,  KC_8,    KC_J,   KC_J,     KC_K,    KC_L,    KC_PGDN, KC_NONE,
	KC_INSERT, KC_CTRL,  KC_Z,   KC_X,     KC_C,   KC_V,    KC_B,    KC_7,  KC_U,    KC_N,   KC_M,     KC_UNDS, KC_MHEN, KC_HENK, KC_NONE,
	KC_NONE,   KC_ALT,   KC_GUI, KC_COMMA, KC_DOT, KC_NONE, KC_BSLS, KC_Y,  KC_H,    KC_SLSH, KC_NONE, KC_NONE, KC_SHFT, KC_ENTR, KC_NONE
};

void loop() {
	// put your main code here, to run repeatedly:
	INIT();
	int i;

	while(){
		i = 0;
		digitalWrite( ser, HIGH );
		RCLK();
		run(i);
		digitalWrite( ser, LOW );
		for(; i < 15; i++){
			RCLK();
			run( i );
		}
	}
}

void run(int i){
	readRow();
	int keyNum = getKey( i );

}

int getKey(int i){
	int keyNum = 0;
	for( int j = 0; j < 6; j++ ){
		keyNum += rows[j] ? j * 15 : 0;
	}
	keyNum += i;
	return keyNum;
}
void readRow(){
	rows[0] = digitanRead( row0 );
	rows[1] = digitanRead( row1 );
	rows[2] = digitanRead( row2 );
	rows[3] = digitanRead( row3 );
	rows[4] = digitanRead( row4 );
	rows[5] = digitanRead( row5 );
}

void SRCLR(){ digitalWrite( scl, LOW ); digitalWrite( scl, HIGH ); }
void OE(){ digitalWrite( oe, LOW ); digitalWrite( oe, HIGH ); }
void SRCLK(){ digitalWrite( sck, HIGH ); digitalWrite( sck, LOW ); }
void RCLK(){ digitalWrite( sck, LOW ); digitalWrite( sck, HIGH ); }
void SER(){ digitalWrite( sck, HIGH ); digitalWrite( sck, LOW ); }

void INIT(){
	digitalWrite( srst, LOW );
	digitalWrite( ser, LOW );
	digitalWrite( sck, LOW );
	digitalWrite( scl, LOW );
	digitalWrite( rck, LOW );
	digitalWrite( oe, LOW );
}

