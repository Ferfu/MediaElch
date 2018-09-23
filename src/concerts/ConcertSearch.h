#ifndef CONCERTSEARCH_H
#define CONCERTSEARCH_H

#include "globals/Globals.h"

#include <QDialog>

namespace Ui {
class ConcertSearch;
}

/**
 * @brief The ConcertSearch class
 */
class ConcertSearch : public QDialog
{
    Q_OBJECT
public:
    explicit ConcertSearch(QWidget *parent = nullptr);
    ~ConcertSearch() override;

public slots:
    int exec() override;
    int exec(QString searchString);
    static ConcertSearch *instance(QWidget *parent = nullptr);
    int scraperNo();
    QString scraperId();
    QList<ConcertScraperInfos> infosToLoad();

private:
    Ui::ConcertSearch *ui;
};

#endif // CONCERTSEARCH_H
