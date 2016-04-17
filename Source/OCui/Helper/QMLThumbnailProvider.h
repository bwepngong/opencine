#ifndef QMLTHUMBNAILPROVIDER_H
#define QMLTHUMBNAILPROVIDER_H

#include <QQuickImageProvider>

#include <Image/ImageProvider.h>
#include <Image/OCImage.h>
#include <Image/ThumbnailProvider.h>

#include "OCui_export.h"

class OCUI_EXPORT QMLThumbnailProvider : public QQuickImageProvider
{
	OC::DataProvider::ThumbnailProvider* _thumbnailProvider;
	const std::unique_ptr<OC::DataProvider::ImageProvider> provider;

	std::unique_ptr<OC::DataProvider::OCImage> _image;

public:
	QMLThumbnailProvider();
	~QMLThumbnailProvider();

	//    QPixmap requestPixmap(const QString &id, QSize *size, const QSize &requestedSize);

		// QQuickImageProvider interface
public:
	QImage requestImage(const QString &id, QSize *size, const QSize &requestedSize);
};

#endif //QMLTHUMBNAILPROVIDER_H