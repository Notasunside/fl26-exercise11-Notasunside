// main.cpp

#include <QApplication>
#include "traffic_light.h"

#include <QTimer>

int main(int argc, char *argv[])
{
      QApplication app(argc, argv);
      TrafficLight light;

      QTimer timer;
    QObject::connect(&timer, &QTimer::timeout, &light, &TrafficLight::light_update);
    timer.start(500);
    light.show();
    return app.exec();
}