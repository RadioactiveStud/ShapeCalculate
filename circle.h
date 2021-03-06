#ifndef CIRCLE_H
#define CIRCLE_H

#include <QDialog>

namespace Ui {
class Circle;
}

class Circle : public QDialog
{
    Q_OBJECT

public:
    explicit Circle(QWidget *parent = 0);
    ~Circle();

private slots:
    void on_radius_textEdited(const QString &arg1);

    void on_circum_textEdited(const QString &arg1);

    void on_area_textEdited(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::Circle *ui;
};

#endif // CIRCLE_H
