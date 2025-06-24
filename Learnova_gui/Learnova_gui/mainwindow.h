#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_forgpas_btn_clicked();

    void on_login_btn_clicked();

    void on_stud_btn_clicked();

    void on_admin_btn_clicked();

    void on_loginswitch_btn_2_clicked();

    void on_back_btn_clicked();

    void on_check_btn_clicked();

    void on_verifi_fild_cursorPositionChanged(int arg1, int arg2);

    void on_new_pass_fild_cursorPositionChanged(int arg1, int arg2);

    void on_registerswitch_btn_clicked();

    void on_all_courses_table_doubleClicked(const QModelIndex &index);

    void on_Logoutuser_btn_clicked();

    void on_Logoutadmin_btn_clicked();

    void on_all_courses_table_2_doubleClicked(const QModelIndex &index);

    void on_confirm_btn_clicked();

    void on_hidden_pass_btn_2_clicked();

    void on_hidden_pass_btn_3_clicked();

    void on_hidden_pass_btn_clicked();

    void on_Register_btn_clicked();

    void on_Print_report_btn_clicked();

    void on_Manage_grad_btn_clicked();

    void on_Add_course_btn_clicked();

    void on_back_btn_crs_clicked();

    void on_Add_crs_btn_clicked();

    void on_Add_admin_btn_clicked();

    void on_back_btn_adm_clicked();

    void on_hidden_pass_btn_4_clicked();

    void on_Add_adm_btn_clicked();

    void on_remove_crs_btn_clicked();

    void on_back_btn_upcrs_clicked();

    void on_add_btn_clicked();

    void on_remove_btn_clicked();

    void on_Prerequisite_rem_fild_cursorPositionChanged(int arg1, int arg2);

    void on_Prerequisite_add_fild_cursorPositionChanged(int arg1, int arg2);

    void on_back_btn_mycrs_clicked();

    void on_Mycourses_btn_clicked();

    void on_back_btn_avlcrs_clicked();

    void on_Register_course_btn_clicked();

    void on_available_courses_table_doubleClicked(const QModelIndex &index);

    void on_back_btn_regiscrs_clicked();

    void on_regiscrs_btn_clicked();

    void on_back_btn_viewgrd_clicked();

    void on_View_grad_btn_clicked();

    void on_display_grades_btn_clicked();

    void on_back_btn_viewpre_clicked();

private:
    Ui::MainWindow *ui;
protected:
    void closeEvent(QCloseEvent *event) override;
};
#endif // MAINWINDOW_H
