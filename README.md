# Motion Activated Feeder
This project is a C++ code for an Arduino Uno board, functioning to control an automated pellet feeder system, using a PIR sensor to trigger pellet release upon motion detection.
<br><br>

## Context
As a Neurobiology Researcher at Columbia University, I contributed to an experiment analyzing hunger-driven behavior in mice. The study involved training control and experimental mice to obtain food pellets by poking a motion sensor in a behavioral chamber. Experimental mice received neural stimulation (via fiber photometry) during the task to assess its effect on feeding behavior.

I programmed an Arduino Uno to automate food pellet release based on sensor input. The system:

- Detected motion when a mouse interacted with the sensor.
- Triggered pellet release upon valid sensor activation.
- Prevented unintended activations by enforcing behavioral constraints.

<sup><sub>Word Count: 95 words</sub></sup>
<br><br>

## Results and Analysis
The Arduino-based motion sensor feeder successfully automated food pellet distribution in the behavioral chambers. The system reliably detected nose pokes from the mice, ensuring that only deliberate interactions triggered food release. This allowed researchers to quantify feeding behavior by analyzing activation timestamps, event frequency, and response latency. The collected data provided insights into whether experimental mice, with stimulated hunger neurons, exhibited increased feeding frequency or shorter response times compared to controls.

However, the system had limitations. False activations occasionally occurred due to unintended sensor triggers from general movement rather than intentional nose pokes. Additionally, the Arduino lacked advanced data logging capabilities, requiring external software for real-time tracking. Latency in pellet release was another factor, as the mechanical delay between detection and dispensing could introduce variability in response measurements. Environmental factors, such as sensor misalignment or chamber lighting, also affected detection accuracy.

<sup><sub>Word Count: 141 words</sub></sup>
<br><br>

## Languages Used
- **C++**
