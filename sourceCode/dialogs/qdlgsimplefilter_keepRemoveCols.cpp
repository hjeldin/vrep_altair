// This file is part of V-REP, the Virtual Robot Experimentation Platform.
// 
// Copyright 2006-2014 Dr. Marc Andreas Freese. All rights reserved. 
// marc@coppeliarobotics.com
// www.coppeliarobotics.com
// 
// V-REP is dual-licensed, under the terms of EITHER (at your option):
//   1. V-REP commercial license (contact us for details)
//   2. GNU GPL (see below)
// 
// GNU GPL license:
// -------------------------------------------------------------------
// V-REP is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// V-REP is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with V-REP.  If not, see <http://www.gnu.org/licenses/>.
// -------------------------------------------------------------------
//
// This file was automatically created for V-REP release V3.1.0 on January 20th 2014

#include "vrepPrecompiledHeader.h"
#include "qdlgsimplefilter_keepRemoveCols.h"
#include "ui_qdlgsimplefilter_keepRemoveCols.h"
#include "GV.h"
#include "Tt.h"

CQDlgSimpleFilter_keepRemoveCols::CQDlgSimpleFilter_keepRemoveCols(QWidget *parent) :
	CQDlgSimpleFilter(parent),
	ui(new Ui::CQDlgSimpleFilter_keepRemoveCols)
{
    ui->setupUi(this);
}

CQDlgSimpleFilter_keepRemoveCols::~CQDlgSimpleFilter_keepRemoveCols()
{
    delete ui;
}

void CQDlgSimpleFilter_keepRemoveCols::refresh()
{
	ui->qqKeep->setChecked((_byteParameters[0]&1)!=0);
	ui->qqRemove->setChecked((_byteParameters[0]&1)==0);
	ui->qqRgb->setChecked((_byteParameters[0]&2)!=0);
	ui->qqHsl->setChecked((_byteParameters[0]&2)==0);
	ui->qqBuffer1->setChecked((_byteParameters[0]&4)!=0);
	ui->qqRed->setText(tt::FNb(0,_floatParameters[0],3,false).c_str());
	ui->qqGreen->setText(tt::FNb(0,_floatParameters[1],3,false).c_str());
	ui->qqBlue->setText(tt::FNb(0,_floatParameters[2],3,false).c_str());
	ui->qqRedTol->setText(tt::FNb(0,_floatParameters[3],3,false).c_str());
	ui->qqGreenTol->setText(tt::FNb(0,_floatParameters[4],3,false).c_str());
	ui->qqBlueTol->setText(tt::FNb(0,_floatParameters[5],3,false).c_str());
}

void CQDlgSimpleFilter_keepRemoveCols::on_qqOkCancel_accepted()
{
	defaultModalDialogEndRoutine(true);
}

void CQDlgSimpleFilter_keepRemoveCols::on_qqOkCancel_rejected()
{
	defaultModalDialogEndRoutine(false);
}

void CQDlgSimpleFilter_keepRemoveCols::on_qqRemove_clicked()
{
	_byteParameters[0]&=255-1;
	refresh();
}

void CQDlgSimpleFilter_keepRemoveCols::on_qqKeep_clicked()
{
	_byteParameters[0]|=1;
	refresh();
}

void CQDlgSimpleFilter_keepRemoveCols::on_qqBuffer1_clicked()
{
	_byteParameters[0]^=4;
	refresh();
}

void CQDlgSimpleFilter_keepRemoveCols::on_qqRgb_clicked()
{
	_byteParameters[0]|=2;
	refresh();
}

void CQDlgSimpleFilter_keepRemoveCols::on_qqHsl_clicked()
{
	_byteParameters[0]&=255-2;
	refresh();
}

void CQDlgSimpleFilter_keepRemoveCols::on_qqRed_editingFinished()
{
	bool ok;
	float newVal=ui->qqRed->text().toFloat(&ok);
	if (ok)
	{
		tt::limitValue(0.0f,1.0f,newVal);
		_floatParameters[0]=newVal;
	}
	refresh();
}

void CQDlgSimpleFilter_keepRemoveCols::on_qqGreen_editingFinished()
{
	bool ok;
	float newVal=ui->qqGreen->text().toFloat(&ok);
	if (ok)
	{
		tt::limitValue(0.0f,1.0f,newVal);
		_floatParameters[1]=newVal;
	}
	refresh();
}

void CQDlgSimpleFilter_keepRemoveCols::on_qqBlue_editingFinished()
{
	bool ok;
	float newVal=ui->qqBlue->text().toFloat(&ok);
	if (ok)
	{
		tt::limitValue(0.0f,1.0f,newVal);
		_floatParameters[2]=newVal;
	}
	refresh();
}

void CQDlgSimpleFilter_keepRemoveCols::on_qqRedTol_editingFinished()
{
	bool ok;
	float newVal=ui->qqRedTol->text().toFloat(&ok);
	if (ok)
	{
		tt::limitValue(0.0f,1.0f,newVal);
		_floatParameters[3]=newVal;
	}
	refresh();
}

void CQDlgSimpleFilter_keepRemoveCols::on_qqGreenTol_editingFinished()
{
	bool ok;
	float newVal=ui->qqGreenTol->text().toFloat(&ok);
	if (ok)
	{
		tt::limitValue(0.0f,1.0f,newVal);
		_floatParameters[4]=newVal;
	}
	refresh();
}

void CQDlgSimpleFilter_keepRemoveCols::on_qqBlueTol_editingFinished()
{
	bool ok;
	float newVal=ui->qqBlueTol->text().toFloat(&ok);
	if (ok)
	{
		tt::limitValue(0.0f,1.0f,newVal);
		_floatParameters[5]=newVal;
	}
	refresh();
}
