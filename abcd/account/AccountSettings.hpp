/*
 * Copyright (c) 2014, AirBitz, Inc.
 * All rights reserved.
 *
 * See the LICENSE file for more information.
 */

#ifndef ABCD_ACCOUNT_ACCOUNT_SETTINGS_HPP
#define ABCD_ACCOUNT_ACCOUNT_SETTINGS_HPP

#include "../../src/ABC.h"

namespace abcd {

class Login;

tABC_CC ABC_AccountSettingsLoad(const Login &login,
                                tABC_AccountSettings **ppSettings,
                                tABC_Error *pError);

tABC_CC ABC_AccountSettingsSave(const Login &login,
                                tABC_AccountSettings *pSettings,
                                tABC_Error *pError);

void ABC_AccountSettingsFree(tABC_AccountSettings *pSettings);

} // namespace abcd

#endif
