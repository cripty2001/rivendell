// list_hostvars.h
//
// List Rivendell Host Variables
//
//   (C) Copyright 2002-2018 Fred Gleason <fredg@paravelsystems.com>
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License version 2 as
//   published by the Free Software Foundation.
//
//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public
//   License along with this program; if not, write to the Free Software
//   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//

#ifndef LIST_HOSTVARS_H
#define LIST_HOSTVARS_H

#include <qdialog.h>
#include <q3listview.h>
#include <q3textedit.h>
#include <qpixmap.h>
#include <qradiobutton.h>

#include <rd.h>
#include <rdmatrix.h>

class ListHostvars : public QDialog
{
 Q_OBJECT
 public:
  ListHostvars(QString station,QWidget *parent=0);
  ~ListHostvars();
  QSize sizeHint() const;
  QSizePolicy sizePolicy() const;
  
  private slots:
   void addData();
   void editData();
   void deleteData();
   void doubleClickedData(Q3ListViewItem *,const QPoint &,int);
   void okData();
   void cancelData();

  private:
   void RefreshList();
   Q3ListView *list_view;
   QString list_station;
};


#endif

