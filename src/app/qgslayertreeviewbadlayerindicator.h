/***************************************************************************
  qgslayertreeviewbadlayerindicatorprovider.h - QgsLayerTreeViewBadLayerIndicatorProvider

 ---------------------
 begin                : 17.10.2018
 copyright            : (C) 2018 by Alessandro Pasotti
 email                : elpaso@itopen.it
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGSLAYERTREEVIEWBADLAYERINDICATORPROVIDER_H
#define QGSLAYERTREEVIEWBADLAYERINDICATORPROVIDER_H

#include "qgslayertreeviewindicatorprovider.h"

#include <QObject>


//! Indicators for bad layers
class QgsLayerTreeViewBadLayerIndicatorProvider : public QgsLayerTreeViewIndicatorProvider
{
    Q_OBJECT

  public:
    explicit QgsLayerTreeViewBadLayerIndicatorProvider( QgsLayerTreeView *view );

  protected slots:
    void onIndicatorClicked( const QModelIndex &index ) override;

  private:
    QString iconName( QgsMapLayer *layer ) override;
    QString tooltipText( QgsMapLayer *layer ) override;
    bool acceptLayer( QgsMapLayer *layer ) override;
};

#endif // QGSLAYERTREEVIEWBADLAYERINDICATORPROVIDER_H
