/*
 * Copyright (c) 2011-2014 BlackBerry Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ApplicationUI_HPP_
#define ApplicationUI_HPP_

#include <QObject>
#include <QtLocationSubset/QGeoPositionInfo>
#include <QtLocationSubset/QGeoPositionInfoSource>

using namespace QtMobilitySubset;

namespace bb
{
    namespace cascades
    {
        class LocaleHandler;
    }
}

class QTranslator;

/*!
 * @brief Application UI object
 *
 * Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class ApplicationUI : public QObject
{
    Q_OBJECT

    Q_PROPERTY(double latitude READ getLatitude WRITE setLatitude NOTIFY signalLatitudeChanged);
    Q_PROPERTY(double longitude READ getLongitude WRITE setLongitude NOTIFY signalLongitudeChanged);
    Q_PROPERTY(double altitude READ getAltitude WRITE setAltitude NOTIFY signalAltitudeChanged);
    Q_PROPERTY(double precision READ getPrecision WRITE setPrecision NOTIFY signalPrecisionChanged);

public:
    ApplicationUI();
    virtual ~ApplicationUI() {}

    Q_INVOKABLE void getGps();

private slots:
    void onSystemLanguageChanged();
    void positionUpdated(const QGeoPositionInfo & pos);

private:
    QTranslator* m_pTranslator;
    bb::cascades::LocaleHandler* m_pLocaleHandler;

    QGeoPositionInfoSource *source;

    double m_latitude;
    double m_longitude;
    double m_altitude;
    double m_precision;

    double getLatitude() { return m_latitude; }
    void setLatitude(double lat) { m_latitude = lat; emit signalLatitudeChanged(); }
    double getLongitude() { return m_longitude; }
    void setLongitude(double lon) { m_longitude = lon; emit signalLongitudeChanged(); }
    double getAltitude() { return m_altitude; }
    void setAltitude(double alt) { m_altitude = alt; emit signalAltitudeChanged(); }
    double getPrecision() { return m_precision; }
    void setPrecision(double pre) { m_precision = pre; emit signalPrecisionChanged(); }

signals:
    void signalLatitudeChanged();
    void signalLongitudeChanged();
    void signalAltitudeChanged();
    void signalPrecisionChanged();
};

#endif /* ApplicationUI_HPP_ */
