/*
 * Copyright (C) by Hannah von Reth <hannah.vonreth@owncloud.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include "settingsdialog_mac.h"
#include "common/utility.h"

#import <AppKit/AppKit.h>
#include <QDebug>

void setActivationPolicy(ActivationPolicy policy)
{
    NSApplicationActivationPolicy mode = NSApplicationActivationPolicyRegular;
    switch (policy) {
    case ActivationPolicy::Regular:
        mode = NSApplicationActivationPolicyRegular;
        break;
    case ActivationPolicy::Accessory:
        mode = NSApplicationActivationPolicyAccessory;
        break;
    case ActivationPolicy::Prohibited:
        mode = NSApplicationActivationPolicyProhibited;
        break;
    }

    if (mode != NSApp.activationPolicy) {
        if (![NSApp setActivationPolicy:mode]) {
            qWarning() << "setActivationPolicy" << static_cast<int>(policy) << "failed";
        }
    }
}
