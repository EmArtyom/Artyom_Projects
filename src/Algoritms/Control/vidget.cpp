#include <QtWidgets>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Создание главного окна
    QWidget mainWindow;
    mainWindow.setWindowTitle("Открыть проект");

    // Создание вертикального компоновщика для расположения кнопок
    QVBoxLayout *layout = new QVBoxLayout(&mainWindow);

    // Создание кнопки для открытия проекта 1
    QPushButton *openProject1Button = new QPushButton("Открыть проект 1");
    layout->addWidget(openProject1Button);

    // Создание кнопки для открытия проекта 2
    QPushButton *openProject2Button = new QPushButton("Открыть проект 2");
    layout->addWidget(openProject2Button);

    // Обработчики событий для кнопок
    QObject::connect(openProject1Button, &QPushButton::clicked, [&]() {
        // Здесь может быть ваш код для открытия проекта 1
        qDebug() << "Открыть проект 1";
    });

    QObject::connect(openProject2Button, &QPushButton::clicked, [&]() {
        // Здесь может быть ваш код для открытия проекта 2
        qDebug() << "Открыть проект 2";
    });

    // Отображение главного окна
    mainWindow.show();

    // Запуск главного цикла обработки событий
    return app.exec();
}