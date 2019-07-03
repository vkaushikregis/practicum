#include "globalproductdata.h"
#include <iostream>
#include <QApplication>
#include <QtCore>

std::vector<ResumeNames> gResumeNamesList = std::vector<ResumeNames>();
bool isDatabaseConnected;
std::vector<std::string> gProficiencyLevelList = std::vector<std::string>();
QString cssTable()
{
    /*QString a;
    a = "<style type=\"text/css\">";
    a += "table.sample {border-width: 10px;border-spacing: ;border-style: outset;            border-color: gray; border-collapse: collapse;       background-color: white;    }";
    a +=" table.sample th {            border-width: 1px;            padding: 1px;            border-style: inset;            border-color: gray;            background-color: white;            -moz-border-radius: ;    }";
    a += "table.sample td {            border-width: 1px;            padding: 1px;            border-style: inset;            border-color: gray;            background-color: white;            -moz-border-radius: ;    }";
    a+="</style>";
    return a;*/
    QString a;
    QStringList stringList;
    QFile textFile("default.css");
    textFile.open(QFile::ReadOnly | QFile::Text);
    QTextStream textStream(&textFile);
    while (true)
    {
        QString line = textStream.readLine();
        if (line.isNull())
            break;
        else
            stringList.append(line);
    }

    return a;
}
