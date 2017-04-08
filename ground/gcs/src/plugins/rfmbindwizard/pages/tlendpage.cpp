/**
 ******************************************************************************
 *
 * @file       tlendtpage.cpp
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2014
 * @see        The GNU Public License (GPL) Version 3
 *
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup RfmBindWizard Setup Wizard
 * @{
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>
 */
#include "tlendpage.h"
#include "ui_endpage.h"
#include <coreplugin/modemanager.h>
#include <extensionsystem/pluginmanager.h>
#include <configgadgetfactory.h>
#include <QMessageBox>

TLEndPage::TLEndPage(RfmBindWizard *wizard, QWidget *parent)
    : AbstractWizardPage(wizard, parent)
    , ui(new Ui::EndPage)
{
    ui->setupUi(this);
    setFinalPage(true);
}

TLEndPage::~TLEndPage()
{
    delete ui;
}
