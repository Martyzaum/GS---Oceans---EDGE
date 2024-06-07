#include <OneWire.h>
#include <DallasTemperature.h>

// Defina os pinos dos sensores
#define TDS_PIN A0
#define DS18B20_PIN 7
#define PH_SENSOR_PIN A1
#define TURBIDITY_SENSOR_PIN A2
#define WATER_LEVEL_SENSOR_PIN A3

OneWire oneWire(DS18B20_PIN);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  sensors.begin();
}

void loop() {
  // Leia o valor do sensor de TDS
  int rawTDS = analogRead(TDS_PIN);
  float tds = convertToTDS(rawTDS);
  Serial.print("TDS: ");
  Serial.print(tds);
  Serial.println(" ppm");

  // Leia o valor do sensor de temperatura
  sensors.requestTemperatures();
  float temperatureC = sensors.getTempCByIndex(0);
  Serial.print("Temperatura: ");
  Serial.print(temperatureC);
  Serial.println(" *C");

  // Leia o valor do sensor de pH
  int phValue = analogRead(PH_SENSOR_PIN);
  Serial.print("Valor do Sensor de pH: ");
  Serial.println(phValue);

  // Leia o valor do sensor de turbidez
  int turbidityValue = analogRead(TURBIDITY_SENSOR_PIN);
  Serial.print("Valor do Sensor de Turbidez: ");
  Serial.println(turbidityValue);

  // Leia o valor do sensor de nível de água
  int waterLevelValue = analogRead(WATER_LEVEL_SENSOR_PIN);
  Serial.print("Valor do Sensor de Nível de Água: ");
  Serial.println(waterLevelValue);

  // Aguarde 1 segundo antes da próxima leitura
  delay(1000);
}

float convertToTDS(int rawTDS) {
  // Converte o valor bruto para TDS em ppm
  // Esta fórmula pode precisar ser ajustada dependendo do seu sensor e das condições
  return rawTDS / 1024.0 * 5000 / 2.3;
}
