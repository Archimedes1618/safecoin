#ifndef CROSSCHAIN_H
#define CROSSCHAIN_H

#include "cc/eval.h"


/* On assetchain */
TxProof GetAssetchainProof(uint256 hash);

/* On SAFE */
uint256 CalculateProofRoot(const char* symbol, uint32_t targetCCid, int safeHeight,
        std::vector<uint256> &moms, uint256 &destNotarisationTxid);
TxProof GetCrossChainProof(const uint256 txid, const char* targetSymbol, uint32_t targetCCid,
        const TxProof assetChainProof);
void CompleteImportTransaction(CTransaction &importTx);

/* On assetchain */
bool CheckMoMoM(uint256 safeNotarisationHash, uint256 momom);


#endif /* CROSSCHAIN_H */
