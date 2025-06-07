# Multi-Threaded Web Server

## Overview

This project is a robust multi-threaded web server implemented in Java, featuring concurrent request handling through threads, socket communication, and an efficient thread pool. The server is designed to handle a high volume of requests, showcasing superior performance compared to a single-threaded counterpart.

## Features

### 1. Multi-Threading

The server employs a multi-threaded architecture to concurrently handle incoming HTTP requests. This approach significantly enhances responsiveness and overall system performance.

### 2. Socket Communication

The communication between clients and the server is facilitated through Java sockets. Clients can connect to the server, establish a socket connection, and send HTTP requests for processing.

### 3. Thread Pool Optimization

To manage concurrent connections efficiently and prevent potential crashes under heavy loads, the server incorporates a thread pool. The thread pool has a configurable size, allowing for optimal resource utilization.

## Performance Comparison

### Single-Threaded vs. Multi-Threaded

In a load test scenario with 10,000 requests per second, the limitations of a single-threaded implementation became evident as significant delays occurred. The multi-threaded web server, in contrast, demonstrated superior performance by efficiently handling multiple concurrent requests concurrently.

### Thread Pool Optimization

Recognizing the importance of scalability and stability, a thread pool was introduced with a default size of 100. This optimization allowed the server to gracefully manage and distribute incoming requests, preventing crashes even under a stress test involving 600,000 requests in 60 seconds.

### Load Testing with JMeter

[JMeter](https://jmeter.apache.org/) is a widely used open-source tool for performance testing and load testing of web applications. It helps simulate various user scenarios to measure the server's performance under different loads.

#### Why JMeter?

- **Scalability Testing:** JMeter allows you to test how well your application scales by simulating a large number of users.

- **Performance Monitoring:** It provides real-time performance metrics to identify bottlenecks and optimize your application.

- **Stress Testing:** JMeter helps you understand the breaking point of your application by subjecting it to extreme conditions.

#### Using JMeter in this Project

1. **Install JMeter:**

   Download and install JMeter from the [official website](https://jmeter.apache.org/download_jmeter.cgi).

2. **Run JMeter:**

   Open JMeter and load the test plan provided in the `jmeter-tests` directory.

3. **Configure Test Plan:**

   Modify the test plan parameters, such as the target server, number of threads, and duration of the test.

4. **Run the Test:**

   Start the test and monitor the results. JMeter will simulate user interactions and provide insights into the server's performance under load.

5. **Analyzing Results:**

   Review the generated reports and analyze metrics such as response time, throughput, and error rates to identify performance bottlenecks.

## Usage

### Prerequisites

Ensure you have the Java Development Kit (JDK) installed on your machine. Clone the repository:

```bash
git clone https://github.com/rohitreddy192/Multithreaded-Web-Server.git
```

### Running the Source Code
  1. **Compile the Source Code**
  2. **Run the Server**
  3. **Run the Client**

### Test Plan Configuration

The JMeter test plan (`MultithreadedWebServerTestPlan.jmx`) is designed to simulate realistic user scenarios. Ensure you configure the following parameters:

- **Server URL:** Set the target server's URL in the "HTTP Request Defaults" element.
- **Number of Threads:** Adjust the number of threads in the "Thread Group" based on your load testing requirements.
- **Ramp-Up Period:** Set the time it takes for all threads to start in the "Thread Group."
- **Duration:** Specify the duration of the test in the "Thread Group."
- **Additional Configurations:** Modify other elements as needed, such as assertions or additional listeners.

### Running the Test

1. Open JMeter.
2. Load the test plan (`MultithreadedWebServerTestPlan.jmx`) using `File -> Open`.
3. Start the test by clicking the "Run" button.
4. Monitor the test progress and results in real-time.

### Analyzing JMeter Reports

After the test completes, JMeter generates various reports in the `jmeter-tests/results` directory. Key metrics to analyze include:

- **Response Time:** Evaluate the time taken for the server to respond to requests.
- **Throughput:** Measure the number of requests processed per unit of time.
- **Error Rate:** Identify any failed requests or errors encountered during the test.

## Conclusion

This multi-threaded web server, coupled with JMeter for load testing, provides a robust solution for handling concurrent requests efficiently. Use the insights gained from JMeter reports to optimize and scale our application as needed, Thread Pool been an interesting concept which made use overcome the limitation of classical Multi threading solution and throgh Thread Pools we can create pools of our desired size and can serve the requests at Scale.

