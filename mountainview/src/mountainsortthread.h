/******************************************************
** See the accompanying README and LICENSE files
** Author(s): Jeremy Magland
** Created: 4/4/2016
*******************************************************/

#ifndef MOUNTAINSORTTHREAD_H
#define MOUNTAINSORTTHREAD_H

#include "computationthread.h"
#include "computationhalter.h"

class MountainProcessRunnerPrivate;
class MountainProcessRunner {
public:
    friend class MountainProcessRunnerPrivate;
    MountainProcessRunner();
    virtual ~MountainProcessRunner();

    void setProcessorName(const QString& pname);
    void setInputParameters(const QMap<QString, QVariant>& parameters);
    void setMLProxyUrl(const QString& url);
    QString makeOutputFilePath(const QString& pname);
    void runProcess(ComputationHalter* halter);

private:
    MountainProcessRunnerPrivate* d;
};

#endif // MOUNTAINSORTTHREAD_H
