/******************************************************
**
** Copyright (C) 2016 by Jeremy Magland
**
** This file is part of the MountainSort C++ project
**
** Some rights reserved. See accompanying LICENSE file.
**
*******************************************************/

#ifndef GET_COMMAND_LINE_PARAMS_H
#define GET_COMMAND_LINE_PARAMS_H

#include <QMap>
#include <QString>
#include <QList>

struct CLParams {
	QMap<QString,QString> named_parameters;
	QList<QString> unnamed_parameters;
	bool success;
	QString error_message;
};

CLParams get_command_line_params(int argc,char *argv[]);

#endif // GET_COMMAND_LINE_PARAMS_H

