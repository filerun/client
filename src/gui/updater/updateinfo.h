// This file is generated by kxml_compiler from occinfo.xml.

#pragma once

#include "gui/owncloudguilib.h"

#include <QString>
#include <QDomElement>
#include <QXmlStreamWriter>

namespace OCC {

class OWNCLOUDGUI_EXPORT UpdateInfo
{
public:
    void setVersion(const QString &v);
    QString version() const;
    void setVersionString(const QString &v);
    QString versionString() const;
    void setWeb(const QString &v);
    QString web() const;
    void setDownloadUrl(const QString &v);
    QString downloadUrl() const;
    /**
      Parse XML object from DOM element.
     */
    static UpdateInfo parseElement(const QDomElement &element, bool *ok);
    static UpdateInfo parseString(const QString &xml, bool *ok);

private:
    QString mVersion;
    QString mVersionString;
    QString mWeb;
    QString mDownloadUrl;
};

} // namespace OCC
