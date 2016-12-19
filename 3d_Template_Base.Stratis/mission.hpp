// #define DOUBLES(var1,var2) ##var1##_##var2
#define QUOTE(var1) #var1

#ifdef TASK_FORCE
    #define RESPAWN_TYPE -1
#else
    #define RESPAWN_TYPE 0
#endif

// #define LS(ID) QUOTE(\mrb_mod\data\loadingScreens\DOUBLES(loadingScreen,ID).paa)
// #define LOADING_SCREEN __EVAL(selectRandom [LS(0), LS(1), LS(2)])

// #define LOADING_MESSAGE __EVAL(selectRandom ["Loading message #1", "Loading message #2", "Loading message #3"])

// #define ADD_LOADING_SCREEN loadScreen = LOADING_SCREEN; \
// overviewPicture = LOADING_SCREEN

respawnOnStart = RESPAWN_TYPE;
// loadScreen = LOADING_SCREEN;
// overviewPicture = LOADING_SCREEN;
// onLoadMission = LOADING_MESSAGE;
// onLoadIntro = LOADING_MESSAGE;

#define FNC(NAME) class NAME {};

#define SET_SYS(CORE,VAR,VAL,TYPE) class CORE##_##VAR { \
    value = VAL; \
    typeName = QUOTE(TYPE); \
    force = 1; \
};
#define SETB(A,B) SET_SYS(ace,A,B,BOOL)
#define SETS(A,B) SET_SYS(ace,A,B,SCALAR)
#define XSETB(A,B) SET_SYS(acex,A,B,BOOL)
#define XSETS(A,B) SET_SYS(acex,A,B,SCALAR)
