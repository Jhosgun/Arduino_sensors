#include <DHT.h>

// Configuración del DHT
#define DHTPIN 2       // Pin digital donde está conectado el DHT
#define DHTTYPE DHT11  // Cambia a DHT22 si usas ese modelo
DHT dht(DHTPIN, DHTTYPE);

// Configuración del fotosensor
#define PHOTO_PIN A0   // Pin analógico para el fotosensor

void setup() {
  Serial.begin(9600);  // Inicia la comunicación serial
  dht.begin();         // Inicia el sensor DHT
}

void loop() {
  // Leer los valores del DHT
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature(); 

  // Leer el valor del fotosensor
  int lightLevel = analogRead(PHOTO_PIN);

  // Comprobar errores de lectura del DHT
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Error al leer del sensor DHT");
    return;
  }

  // Formatear datos en CSV y enviarlos
  Serial.print(humidity);
  Serial.print(",");
  Serial.print(temperature);
  Serial.print(",");
  Serial.println(lightLevel);

  delay(1000);  // Esperar 1 segundo antes de la próxima lectura
}
