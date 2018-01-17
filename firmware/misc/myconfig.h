#ifndef MYCONFIG_H_
#define MYCONFIG_H_

#define DEFAULT_DEVICETAG "shogcake"
#define DEFAULT_LANGUAGE "English"
#define DEFAULT_WARNCPM "180"

//255 all modes, 1 | 2 | 4 | 8 = 15 (no beq, no qr)
#define DEFAULT_OPMODES "15"

#define DEFAULT_QRTEMPLATE "http://twitter.com/home?status=CPM:%u"

//#define DEFAULT_MUTEALARM "false"
#define DEFAULT_MUTEALARM 0
//#define DEFAULT_GEIGERBEEP "false"
#define DEFAULT_GEIGERBEEP 0

//#define DEFAULT_LOGINTERVAL "60"
#define DEFAULT_LOGINTERVAL 0

#define DEFAULT_PULSE "10"
#define DEFAULT_DIMDELAY "20"
#define DEFAULT_CPMCPSAUTO "true"

//Default duration for timed counter
#define DEFAULT_COUNTERWIN "600"






#define BUZZER_DETECT_LENGTH 0.005

// 440 Hz
#define BUZZER_BLOCK_FREQUENCY 440

#endif
