#ifndef CLIENTVERSION_H
#define CLIENTVERSION_H

// Editable client display strings
#define CLIENT_NAME "BretaCoin"    // <-- GUI/daemon display name
#define CLIENT_TICKER "BRETA"      // <-- Ticker symbol used in UI/RPC

// Version macros (already present in your file, kept here for context)
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

// -------------------------------------------------------------
// Define CLIENT_VERSION as a combined integer for serialization
#ifndef CLIENT_VERSION
#define CLIENT_VERSION \
    (1000000 * CLIENT_VERSION_MAJOR + 10000 * CLIENT_VERSION_MINOR + 100 * CLIENT_VERSION_REVISION + CLIENT_VERSION_BUILD)
#endif

#include <string>

// Declare FormatFullVersion function to return human-readable version string
std::string FormatFullVersion();

#endif // CLIENTVERSION_H
