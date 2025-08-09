// BretaCoin (BRETA) - patched chainparams.cpp snippet
// NOTE: This is a patch file with the important parameters to replace in Ravencoin's src/chainparams.cpp
// Replace the corresponding sections in the upstream file. Lines here are illustrative and include
// comments to make the adjustments straightforward.

#include "chainparams.h"
#include "consensus/consensus.h"
#include "util.h"

// Editable network parameters (tweak these if you want different behavior)
static void SetupBretaConsensus(Consensus::Params &consensus) {
    // Target block spacing in seconds
    consensus.nPowTargetSpacing = 60; // <-- 60 seconds block time

    // Halving interval (in blocks)
    consensus.nSubsidyHalvingInterval = 420000; // <-- 420,000 blocks per halving

    // Other consensus params may be present in upstream; keep them unchanged unless you know what
    // you're modifying (e.g., BIP34Height, etc).
}

// Example code showing where to set coin name/ticker and ports
void CChainParams::SetBretaBaseParams() {
    // Network display names
    strNetworkID = "main";
    // Change here if you want to alter human-friendly name
    consensus.sCoinName = "Breta"; // <-- editable

    // Default ports — change to avoid conflict with upstream Ravencoin
    nDefaultPort = 8768;        // <-- mainnet p2p port (editable)
    nDefaultRPCPort = 8769;     // <-- RPC port (editable)

    // Message start — you SHOULD generate unique bytes for your network
    pchMessageStart[0] = 0x9b;  // <-- placeholder bytes, replace with secure unique ones
    pchMessageStart[1] = 0x1c;
    pchMessageStart[2] = 0xa6;
    pchMessageStart[3] = 0xb2;
}

// Genesis block placeholder — you MUST mine a genesis block and replace these values
void CChainParams::SetGenesisPlaceholders() {
    // After mining a genesis block with your parameters, replace the following:
    // consensus.hashGenesisBlock = uint256S("<GENESIS_HASH_HEX>");
    // genesis.nTime = <GENESIS_TIMESTAMP>;
    // genesis.nNonce = <GENESIS_NONCE>;
    // genesis.hashMerkleRoot = uint256S("<MERKLE_ROOT>");
}
