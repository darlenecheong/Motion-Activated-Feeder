# 🐭 Motion Activated Feeder
This project is a C++ code for an Arduino Uno board, functioning to control an automated pellet feeder system, using a PIR sensor to trigger pellet release upon motion detection.
<br><br>

## C++ Code
Please view the C++ code 🔗[here](Motion-Activated-Feeder.cpp).
<br><br>

## Context
As a Neurobiology Researcher at Columbia University, I played a key role in an experiment investigating hunger-driven behavior in mice. The study aimed to understand how neural activity influences feeding behavior. Control and experimental mice were trained to obtain food pellets by interacting with a motion sensor in a behavioral chamber. Experimental mice were subjected to neural stimulation using fiber photometry during the task to examine the role of specific neurons in hunger regulation. To facilitate the experiment, I programmed an Arduino Uno to automate the food pellet release system. The setup detected motion when a mouse interacted with the sensor, triggering pellet release upon valid sensor activation. To ensure accurate data collection, I implemented behavioral constraints that prevented unintended activation, ensuring the integrity of the experiment and controlling for confounding variables.

<sup><sub>Word Count: 132 words</sub></sup>
<br><br>

## Results and Analysis
The Arduino-based motion sensor feeder effectively automated food pellet distribution within the behavioral chambers, reliably detecting nose pokes from the mice and ensuring that only deliberate interactions triggered food release. For instance, the time delay mechanism allowed for accurate timing between sensor activation and pellet dispensing, minimizing false triggers and ensuring that only intentional behaviors were recorded. This functionality enabled researchers to quantify feeding behavior by analyzing key metrics such as activation timestamps, event frequency, and response latency. The data collected provided valuable insights into the behavior of experimental mice with stimulated hunger neurons, allowing researchers to assess whether these mice exhibited increased feeding frequency or shorter response times compared to the control group.

Despite its success, the system had several limitations. False activations occasionally occurred due to unintended sensor triggers from general movement, rather than intentional nose pokes. The Arduino's lack of advanced data logging capabilities meant that external software was needed for real-time tracking, complicating data management. Additionally, mechanical delays in pellet release introduced variability in response measurements, and environmental factors like sensor misalignment or chamber lighting affected detection accuracy. These challenges highlighted areas for further optimization to enhance the system's reliability and precision in future experiments.

<sup><sub>Word Count: 199 words</sub></sup>
<br><br>

## Language Used
- **C++**
