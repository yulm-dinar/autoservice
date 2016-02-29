#ifndef DIALOG_EDIT_HXX
#define DIALOG_EDIT_HXX

#include <QDialog>
#include "types.hxx"

namespace Ui {
  class Dialog_Edit;
}

class Dialog_Edit : public QDialog
{
  Q_OBJECT

public:
  explicit Dialog_Edit(QWidget *parent = 0);
  ~Dialog_Edit();

  std::string get_surname() const;
  std::string get_name() const;
  std::string get_mid_name() const;

  std::string get_brand() const;
  std::string get_model() const;

  QDate get_date_in() const;
  QDate get_date_out() const;
  double get_coast() const;
  std::string get_descr() const;

  void setOwnerID(const QString& id);
  void setSurname(const QString& surname);
  void setName(const QString& name);
  void setMidName(const QString& mid_name);

  void setCarID(const QString& id);
  void setBrand(const QString& brand);
  void setModel(const QString& model);

  void setServiceID(const QString& id);
  void setDateIn(const QString& date_in);
  void setDateOut(const QString& date_out);
  void setCoast(const QString& coast);
  void setDescription(const QString& description);

  uint get_owner_id() const;
  uint get_car_id() const;
  uint get_serv_id() const;

protected:
  void changeEvent(QEvent *e);

private slots:
  void enableButtonOk();

private:
  Ui::Dialog_Edit *ui;

  uint owner_id;
  uint car_id;
  uint serv_id;
};

#endif // DIALOG_EDIT_HXX
