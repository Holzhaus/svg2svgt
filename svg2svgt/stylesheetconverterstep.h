/**
 * SVG Converter
 * Copyright (C) 2011 Nokia
 *   
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation; either version 2.1 of
 *  the License, or (at your option) any later version. 
 *   
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 *  Lesser General Public License for more details. 
 *   
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#ifndef STYLESHEETCONVERTER_H
#define STYLESHEETCONVERTER

#include "processorstep.h"

#include <QtCore/QStringList>
#include <QMap>

class StyleSheetConverterStep : public QObject, 
        public ProcessorStep

{
    Q_OBJECT
public:
    explicit StyleSheetConverterStep(Logger& logger, QObject *parent = 0);
    virtual ~StyleSheetConverterStep();

public: // From ProcessorStep
    virtual QDomDocument process(QDomDocument svgDoc);
    virtual QString description();
private:
    void buildStyleMap(QDomDocument svgDoc);
    void convertClassAttributes(QDomDocument svgDoc);
    QMap<QString, QString> m_styleMap;
};

#endif 
