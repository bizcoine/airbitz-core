/*
 * Copyright (c) 2014, AirBitz, Inc.
 * All rights reserved.
 *
 * See the LICENSE file for more information.
 */

#ifndef ABCD_CRYPTO_RANDOM_HPP
#define ABCD_CRYPTO_RANDOM_HPP

#include "../util/Data.hpp"
#include "../util/Status.hpp"

namespace abcd {

tABC_CC ABC_CryptoSetRandomSeed(const tABC_U08Buf Seed,
                                tABC_Error        *pError);

/**
 * Generates cryptographically-secure random data.
 */
Status
randomData(DataChunk &result, size_t size);

/**
 * Creates a random version 4 UUID.
 */
Status
randomUuid(std::string &result);

} // namespace abcd

#endif
