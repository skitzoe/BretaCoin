// BretaCoin (BRETA) - util.cpp snippet
// Minimal snippet to show changing display strings. Replace or merge into upstream util.cpp.

#include "util.h"
#include "clientversion.h"

// Return the client name for RPC/help/version output
std::string GetClientName()
{
    // Use the CLIENT_NAME from clientversion.h — editable there
    return std::string(CLIENT_NAME);
}
