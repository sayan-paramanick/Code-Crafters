Overview of IoT-Based Electric Vehicle Diagnostic Tool

 Key Features:

Real-time Monitoring of battery health, charging status, and usage patterns. Low-cost & Accessible using Arduino and basic sensors. Preventive Maintenance through early fault detection and alerts. Improved Safety by identifying overheating, abnormal currents, and charging issues. Scalable & Customizable for personal EVs, fleets, or charging stations.

 Components Used:

1.Hardware: 
	i. Arduino Uno R3,
	ii. Voltage sensor (ZMPT101B), 
	iii. Current sensor (INA219), 
	iv. Temperature sensor (NTC thermistor),
	v. LCD (16x2), 
	vi. LED, 
	vii. Potentiometer,
	viii. Breadboard, 
	ix. Wires.
2. Software: 
	i. Arduino IDE R3,
	ii. Sensor libraries,
	iii. Communication libraries (for Wi-Fi/Bluetooth),
	iv. Cloud dashboard.


 How It Works:

1. Sensors (voltage, current, temperature) collect real-time battery and power data.

2. Arduino preprocesses readings (filtering, conversion, timestamping).

3. Data is displayed locally on LCD and sent via Wi-Fi/MQTT or Bluetooth to the cloud.

4. Cloud analytics estimate State of Charge (SoC), State of Health (SoH), and detect anomalies.

5. Dashboard visualizes performance; users get alerts (SMS/push notifications) for critical events.