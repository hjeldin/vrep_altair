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

#ifndef QDLGSCRIPTPARAMETERS_H
#define QDLGSCRIPTPARAMETERS_H

#include "VDialog.h"
#include "LuaScriptObject.h"
#include <QListWidgetItem>

namespace Ui {
    class CQDlgScriptParameters;
}

class CQDlgScriptParameters : public VDialog
{
    Q_OBJECT

public:
    explicit CQDlgScriptParameters(QWidget *parent = 0);
    ~CQDlgScriptParameters();

	void refresh();
	void refreshPart2();

	void cancelEvent();
	void okEvent();

	void updateObjectsInList();
	int getSelectedObjectID();
	void selectObjectInList(int objectID);
	bool inSelectionRoutine;

	CLuaScriptObject* script;

private slots:
	void onDeletePressed();

	void on_qqAddNew_clicked();

	void on_qqParameterList_itemChanged(QListWidgetItem *item);

	void on_qqValue_editingFinished();

	void on_qqUnit_editingFinished();

	void on_qqPrivate_clicked();

	void on_qqPersistent_clicked();

	void on_qqClose_clicked(QAbstractButton *button);

	void on_qqParameterList_itemSelectionChanged();

private:
    Ui::CQDlgScriptParameters *ui;
};

#endif // QDLGSCRIPTPARAMETERS_H
