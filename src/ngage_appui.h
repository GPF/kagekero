/** @file ngage_appui.h
 *
 *  A minimalist, cross-platform puzzle-platformer, designed
 *  especially for the Nokia N-Gage.
 *
 *  Copyright (c) 2025, Michael Fitzmayer. All rights reserved.
 *  SPDX-License-Identifier: MIT
 *
 **/

#ifndef NGAGE_APPUI_H
#define NGAGE_APPUI_H

#define SET_APP_NAME(name) _L(name)

#include <aknappui.h>

class CNGageAppView;

class CNGageAppUi : public CAknAppUi
{
  public:
    void ConstructL();

    CNGageAppUi();
    ~CNGageAppUi();

  public:
    void HandleCommandL(TInt aCommand);

  private:
    CNGageAppView *iAppView;
};

#endif /* NGAGE_APPUI_H */
