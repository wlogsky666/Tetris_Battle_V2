#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

/*  ***************************** Color for Text ********************************** */

#define RED    FOREGROUND_INTENSITY | FOREGROUND_RED
#define GREEN  FOREGROUND_INTENSITY | FOREGROUND_GREEN
#define BLUE   FOREGROUND_INTENSITY | FOREGROUND_BLUE
#define YELLOW FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN
#define PURPLE FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE
#define CYAN   FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE
#define WHITE  FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE
#define BLACK 0

/* ******************************  BackGround  ************************************* */

#define GREEN_BACK BACKGROUND_GREEN
#define RED_BACK  BACKGROUND_RED | BACKGROUND_INTENSITY
#define BLUE_BACK  BACKGROUND_BLUE
#define PURPLE_BACK BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE
#define YELLOW_BACK BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY
#define CYAN_BACK   BACKGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE
#define WHITE_BACK  BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE
#define BLACK_BACK  0

/* refer */

enum Color{ Red = 31 , Green , Blue , Yellow , Purple , Cyan , White , BgOffset = 10 } ;

#endif // COLOR_H_INCLUDED
