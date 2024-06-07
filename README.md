# RMS: 
    - GUILHERME FERNANDES DE FREITAS - RM554323
    - JOÃO PEDRO CHIZZOLINI DE FREITAS - RM553172

# Link Wokwi

    - https://wokwi.com/projects/400065800552093697

    - O wokwi não ultiliza os mesmos sensores por não estarem disponiveis

# De acordo com o código e o simulador fornecidos, o objetivo do projeto é desenvolver um dispositivo que monitora a qualidade da água. Para isso, utilizamos cinco sensores no Arduino, responsáveis por medir a temperatura, o nível, o pH, a turbidez e os sólidos dissolvidos na água.

# Os dados coletados são enviados para uma fila de processamento. Em seguida, um programa em Python consome essa fila, sendo responsável por tratar e armazenar os dados coletados.

# Finalmente, esses dados são disponibilizados por meio de uma API, que permite a um front-end exibi-los em formato de dashboard. Dessa forma, é possível acompanhar de maneira contínua e eficiente a qualidade da água.

# Por ser apenas um conceito, os dados são printados, e nao enviados para uma fila real

# Bibliotecas usadas 

    - OneWire
    - DallasTemperature

# Sensores ultilizados

    - Sensor de Ph
    - Sensor de Turbidez
    - Sensor de nivel de agua
    - Sensor de temperatura
    - Sensor de Total de solidos dissolvidos