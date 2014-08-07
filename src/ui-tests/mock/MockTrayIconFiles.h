/*
 * Copyright (c) 2010-2014 Célio Cidral Junior.
 *
 *     Licensed under the Apache License, Version 2.0 (the "License");
 *     you may not use this file except in compliance with the License.
 *     You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

#ifndef MOCKTRAYICONFILES_H
#define MOCKTRAYICONFILES_H

#include <QMap>

#include "TrayIconFiles.h"

namespace tmty
{
  namespace ui
  {
    class MockTrayIconFiles : public TrayIconFiles
    {
      public:
        explicit MockTrayIconFiles();

        QString idle() const;
        QString forIntervalType(IntervalType intervalType) const;

        void setIdleIcon(QString fictitiousIconFile);
        void setIconForIntervalType(IntervalType intervalType, QString fictitiousIconFile);

      private:
        QString _idle;
        QMap<IntervalType, QString> _intervalTypeIcons;
    };
  }
}

#endif // MOCKTRAYICONFILES_H
