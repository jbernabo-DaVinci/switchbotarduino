# SwitchBot

SwitchBot es un proyecto que automatiza aparatos electrónicos controlados por interruptores mediante el uso de un Arduino Uno, un servo y un sensor infrarrojo. Con este proyecto, puedes controlar dispositivos que normalmente se activan mediante un interruptor físico utilizando un control remoto infrarrojo.

## Contenido

- [Colaboradores](#colaboradores)
- [Características](#características)
- [Requisitos](#requisitos)
- [Instalación](#instalación)
- [Uso](#uso)
- [Ejemplos](#ejemplos)
- [Contribución](#contribución)
- [Documentación](#Documentación)

## Colaboradores
- NicoBosz
- jbernabo-DaVinci

## Características

- Automatiza aparatos electrónicos mediante el control remoto infrarrojo.
- Utiliza un servo para simular el accionamiento del interruptor físico.
- Compatible con el Arduino Uno y el sensor infrarrojo HX1838.

## Requisitos

Para utilizar el proyecto SwitchBot, necesitarás los siguientes componentes:

- Arduino Uno
- Sensor infrarrojo HX1838
- Servo motor
- Control remoto infrarrojo compatible

Además, asegúrate de tener instalado el entorno de desarrollo Arduino IDE en tu computadora.

## Instalación

1. Clona o descarga el repositorio del proyecto SwitchBot en tu computadora.
2. Abre el archivo `switchbot.ino` en el Arduino IDE.
3. Conecta tu Arduino Uno al puerto USB de tu computadora.
4. Selecciona la placa Arduino Uno y el puerto correspondiente en el Arduino IDE.
5. Haz clic en el botón "Cargar" para subir el código al Arduino Uno.

## Uso

1. Conecta el sensor infrarrojo HX1838 al Arduino Uno siguiendo el esquema de conexiones.
2. Conecta el servo motor al Arduino Uno siguiendo el esquema de conexiones.
3. Asegúrate de que el interruptor físico del aparato electrónico esté en la posición "apagado".
4. Apunta el control remoto infrarrojo hacia el sensor HX1838.
5. En el código `switchbot.ino`, configura los códigos infrarrojos correspondientes a los botones de encendido y apagado del control remoto.
6. Carga el código en el Arduino Uno.
7. Alimenta el Arduino Uno.
8. Presiona el botón de encendido en el control remoto para que el SwitchBot accione el interruptor y encienda el aparato electrónico.

## Ejemplos

Aquí hay algunos ejemplos de uso del proyecto SwitchBot:

- Automatizar el encendido y apagado de una lámpara utilizando el control remoto infrarrojo.
- Controlar la activación de un ventilador mediante el SwitchBot y el sensor infrarrojo.

## Contribución

Si deseas contribuir a este proyecto, por favor sigue estos pasos:

1. Haz un fork del repositorio.
2. Crea una rama con la nueva funcionalidad: `git checkout -b nueva-funcionalidad`.
3. Realiza los cambios y haz commit: `git commit -m "Agrega nueva funcionalidad"`.
4. Haz push a la rama: `git push origin nueva-funcionalidad`.
5. Envía una pull request con tus cambios.

## Documentación

Puedes encontrar más detalles y documentación en el archivo [esquematico](docs/esquematico.pdf).
