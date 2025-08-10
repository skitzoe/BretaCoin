// BretaCoin (BRETA) - clientversion.h snippet
// Modify version strings, client name, and copyright notices here.
// Replace the corresponding definitions in upstream clientversion.h

#ifndef CLIENTVERSION_H
#define CLIENTVERSION_H

// Editable client display strings
#define CLIENT_NAME "BretaCoin"    // <-- GUI/daemon display name
#define CLIENT_TICKER "BRETA"      // <-- Ticker symbol used in UI/RPC

// Use the values from raven-config.h if they exist, otherwise define defaults
#ifndef CLIENT_VERSION_MAJOR
#define CLIENT_VERSION_MAJOR 4  // BretaCoin major version
#endif

#ifndef CLIENT_VERSION_MINOR
#define CLIENT_VERSION_MINOR 7  // BretaCoin minor version
#endif

#ifndef CLIENT_VERSION_REVISION
#define CLIENT_VERSION_REVISION 0
#endif

#ifndef CLIENT_VERSION_BUILD
#define CLIENT_VERSION_BUILD 0
#endif


#endif // CLIENTVERSION_H
