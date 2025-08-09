// BretaCoin (BRETA) - patched validation.cpp subsidy snippet
// Replace GetBlockSubsidy in your Ravencoin-derived validation.cpp with the snippet below.
// The function uses consensus.nSubsidyHalvingInterval and an initial subsidy you can adjust.

// NOTE: This code assumes COIN and CAmount types are defined in your build (as in Bitcoin/Ravencoin).

#include "consensus/consensus.h"

// Calculate block subsidy (reward) for BretaCoin.
// nHeight: current block height
// consensusParams: consensus parameters struct
CAmount GetBlockSubsidy(int nHeight, const Consensus::Params& consensusParams)
{
    // Determine how many halvings have occurred
    int halvings = nHeight / consensusParams.nSubsidyHalvingInterval;

    // Safety: stop subsidy after 64 halvings (practically unreachable)
    if (halvings >= 64)
        return 0;

    // Initial block reward (editable)
    // Note: multiply by COIN constant from upstream code (COIN == 100000000 satoshis)
    CAmount nSubsidy = 500 * COIN;  // <-- initial reward: 500 BRETA

    // Apply halvings (right shift by number of halvings)
    nSubsidy >>= halvings;

    return nSubsidy;
}
