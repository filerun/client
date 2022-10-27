/*
 * Copyright (C) by Fabian Müller <fmueller@owncloud.com>
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

#pragma once

#include "platform.h"

#include <QProcess>

#import <AppKit/NSApplication.h>

namespace OCC {

// implemented in platform_mac_deprecated.mm
void migrateLaunchOnStartup();

class MacPlatform : public Platform
{
public:
    MacPlatform();
    ~MacPlatform() override;

    void migrate() override;

private:
    QMacAutoReleasePool _autoReleasePool;
    OwnAppDelegate *_appDelegate;
};

} // namespace OCC