// BretaCoin (BRETA) - consensus.h patch
// Add or modify halving interval constant and related consensus parameters here.
// This is a minimal header snippet; ensure compatibility with upstream consensus headers.

#ifndef BITCOIN_CONSENSUS_CONSENSUS_H
#define BITCOIN_CONSENSUS_CONSENSUS_H

namespace Consensus {

// You can set a default halving interval here if your upstream expects a constant.
// If upstream uses a runtime parameter struct, ensure that is set in chainparams.cpp instead.
static const int DEFAULT_SUBSIDY_HALVING_INTERVAL = 420000; // <-- 420,000 blocks per halving

struct Params {
    int nSubsidyHalvingInterval = DEFAULT_SUBSIDY_HALVING_INTERVAL;
    int nPowTargetSpacing = 60; // target block time in seconds (editable)
    // ... other consensus params are present in upstream; include as needed
    std::string sCoinName; // optional: human readable coin name in params
};

} // namespace Consensus

#endif // BITCOIN_CONSENSUS_CONSENSUS_H
