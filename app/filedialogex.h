#ifndef FILEDIALOGEX_H
#define FILEDIALOGEX_H

#include <QObject>

enum class EFile
{
    SOUND
};

class FileDialogEx : public QObject
{
    Q_OBJECT
public:
    FileDialogEx( QObject* parent );
    ~FileDialogEx();

    QString openFile( EFile fileType );

private:
    QString dialogTitle( EFile fileType );
    QString fileFilters( EFile fileType );
    QString toSettingKey( EFile fileType );

    QWidget* mRoot = nullptr;
};

#endif // FILEDIALOGEX_H
