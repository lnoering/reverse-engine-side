<h3 align="center">Reverter o lado do motor / Reverse Engine Side</h1>
<p align="center">
    <img alt="logo-chocadeira" class="avatar rounded-2" height="60" src="/car-reversing.webp" width="60">
</p>
<p align="center">
    <a href="https://travis-ci.org/lnoering/reverse-engine-side">
        <img src="https://travis-ci.org/lnoering/reverse-engine-side.svg?branch=master" alt="Build Status">
    </a>
</p>
https://travis-ci.com/lnoering/reverse-engine-side.svg?branch=

### Plataforma/Platform
    - Arduino Uno


### Objetivo/Objective
    Controlar a embreagem do motor quando for trocar a direção.
    /
    Check the engine clutch when changing direction.


### Funcionalidades/Functionalities
    > Ler o pino set point que informará o quanto e qual saída devo acionar.
        + Irá variar de 0v a 5v.
    > Monitorar o pino de feedback para saber que o motor que já chegou no objetivo.
        + Irá variar de 1.6v a 4.25v
        + Colocar uma histerese de +0.3v e - 0.3v.
            Ex.: set point 3v feedback para quando chegar a 2.7v ou 3.3v
### IO
    Obs.: PINOS conforme a placa do arduino.
    - ANALOG INPUT
        - PINO A0 ( ) -  [Set Point]
        - PINO A1 ( ) -  [Feedback of position]
    - ANALOG OUTPUT
        - PINO D7 ( ) -  [Forward]
        - PINO D8 ( ) -  [Back]


### Lista de melhorias/List of improvements
