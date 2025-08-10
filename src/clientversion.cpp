// clientversion.cpp - BretaCoin fork

#include "clientversion.h"
#include "tinyformat.h"  // For strprintf()
#include <string>
#include <vector>
#include <sstream>

// Change client name to your fork's display name
const std::string CLIENT_NAME("BretaCoin");

#define CLIENT_VERSION_SUFFIX ""

// The rest of your build description macros and git info can remain unchanged

// FormatFullVersion: returns the full version string e.g. "4.7.0.0"
std::string FormatFullVersion()
{
    return strprintf("%d.%d.%d.%d",
                     CLIENT_VERSION_MAJOR,
                     CLIENT_VERSION_MINOR,
                     CLIENT_VERSION_REVISION,
                     CLIENT_VERSION_BUILD);
}

// Optional: FormatSubVersion remains unchanged if you want BIP14 compliance
std::string FormatSubVersion(const std::string& name, int nClientVersion, const std::vector<std::string>& comments)
{
    std::ostringstream ss;
    ss << "/";
    ss << name << ":" << FormatFullVersion();
    if (!comments.empty())
    {
        auto it = comments.begin();
        ss << "(" << *it;
        for (++it; it != comments.end(); ++it)
            ss << "; " << *it;
        ss << ")";
    }
    ss << "/";
    return ss.str();
}
