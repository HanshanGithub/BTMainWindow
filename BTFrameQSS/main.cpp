#include "BTFrameWindow.h"
#include <QtWidgets/QApplication>
#include <QDebug>

#include <QFile>
#include <QTextStream>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BTFrameWindow w;
// 	a.setStyleSheet("");
// 	QString qssFile = QString(":/qss/BTFrameStyle-qrc.css");
	QString qssFile = QString("E:/OneDrive/H/BTFrameStyle.css");
	QFile styleFile(qssFile);
	if (styleFile.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QTextStream styleStream(&styleFile);
		QString style = styleStream.readAll();
		w.setStyleSheet(style);
		styleFile.close();
	}

	w.show();
	return a.exec();
}
