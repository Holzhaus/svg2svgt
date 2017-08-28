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

#ifndef PATHCONVERTERSTEP_H
#define PATHCONVERTERSTEP_H

#include <QtCore/QObject>
#include "processorstep.h"

namespace svg2svgt {

class PathConverterStep : public QObject, public ProcessorStep
{
    Q_OBJECT
public:
    explicit PathConverterStep(Logger& logger, QObject *parent = 0);
    virtual ~PathConverterStep();
public: // From ProcessorStep
    virtual QDomDocument process(QDomDocument svgDoc);
    virtual QString description();
private:
    void convertEllipticalArcs(QDomDocument svgDoc);
};

} // svg2svgt

#endif // VALIDATIONSTEP_H
