/******************************************************
** See the accompanying README and LICENSE files
** Author(s): Jeremy Magland
*******************************************************/

#ifndef BANDPASS_FILTER0_H
#define BANDPASS_FILTER0_H

#include <QString>

bool bandpass_filter0(const QString& input, const QString& output, double samplerate, double freq_min, double freq_max, double freq_wid, const long processingChunkSize = -1, const long chunkOverlapSize = -1);

#endif // BANDPASS_FILTER0_H
