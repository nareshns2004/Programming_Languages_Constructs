# chatRoomCpp

## Project Overview

chatRoomCpp is a simple chat room application implemented in C++ using Boost.Asio for asynchronous network communication and threading for handling concurrent client connections. It allows multiple clients to connect to a server and exchange messages in a chat room.

## Key Features

*   **Asynchronous Communication:** Uses Boost.Asio for non-blocking I/O, allowing the server to handle multiple clients concurrently.
*   **Multi-threading:** Employs threading to manage multiple client sessions simultaneously.
*   **Room Management:** Provides a simple room abstraction for managing connected clients.
*   **Message Handling:** Encapsulates message handling logic for encoding, decoding, and delivering messages.

## Architecture

The project consists of the following key components:

*   **`Session`:** Represents a client session, handling communication with a specific client. It is responsible for reading incoming messages, delivering outgoing messages, and managing the client socket.
*   **`Room`:** Represents a chat room, managing a set of connected clients. It is responsible for adding and removing clients, and delivering messages to all participants in the room.
*   **`Message`:** Represents a message exchanged between clients. It is responsible for encoding and decoding the message header and body.

## Critical Functionalities

### Async I/O

The application uses Boost.Asio for asynchronous I/O, which allows the server to handle multiple client connections without blocking. The `async_read` and `async_write` methods in the `Session` class are used to asynchronously read data from and write data to the client socket.

### Threading

The application uses threading to handle concurrent client connections. Each client session is run in a separate thread, allowing the server to handle multiple clients simultaneously.

### Session Management

The `Session` class manages a client's connection to the chat room. It handles the asynchronous reading and writing of messages, and ensures that messages are delivered to the correct recipients.

### Room Management

The `Room` class manages the chat room itself. It keeps track of all connected clients, and provides methods for adding and removing clients, and for delivering messages to all participants in the room.

## LLD

```mermaid
classDiagram
    class Participant {
        <<interface>>
        +deliver(Message& message)*
        +write(Message& message)*
    }
    
    class Session {
        -tcp::socket clientSocket
        -boost::asio::streambuf buffer
        -Room& room
        -std::deque~Message~ messageQueue
        +Session(tcp::socket s, Room& room)
        +start()
        +deliver(Message& message)
        +write(Message& message)
        +async_read()
        +async_write(std::string messageBody, size_t messageLength)
    }
    
    class Room {
        -std::deque~Message~ messageQueue
        -std::set~ParticipantPointer~ participants
        +join(ParticipantPointer participant)
        +leave(ParticipantPointer participant)
        +deliver(ParticipantPointer participant, Message& message)
    }
    
    class Message {
        -char data[header+maxBytes]
        -size_t bodyLength_
        +Message()
        +Message(std::string message)
        +getData() std::string
        +getBody() std::string
        +getNewBodyLength(size_t newLength) size_t
        +encodeHeader()
        +decodeHeader() bool
        +getBodyLength() size_t
        +printMessage()
    }
    
    class Server {
        -boost::asio::io_context io_context
        -tcp::acceptor acceptor
        -Room room
        +main(int argc, char* argv[])
        +accept_connection(io_context, port, acceptor, room, endpoint)
    }
    
    class Client {
        -boost::asio::io_context io_context
        -tcp::socket socket
        -std::thread input_thread
        +main(int argc, char* argv[])
        +async_read(tcp::socket& socket)
    }
    
    class boost_asio_io_context {
        +run()
        +post(function)
    }
    
    class Thread_Model {
        <<concept>>
        +IO Thread: Runs io_context.run()
        +Input Thread: Handles user input
        +Async Callbacks: Run on IO Thread
    }
    
    class MessageFlow {
        <<concept>>
        +Client Input → Socket Write
        +Socket Read → Message Parse → Room Broadcast
        +Room Broadcast → Session Queue → Socket Write
    }
    
    class AsyncPattern {
        <<concept>>
        +async_read_until(delimiter)
        +async_write(buffer)
        +post(function)
        +Completion Handlers
    }
    
    Participant <|-- Session
    Session *-- "1" Room : has-reference
    Session o-- "*" Message : manages-in-queue
    Room o-- "*" Message : manages-in-queue
    Room o-- "*" Participant : contains
    Server ..> Session : creates
    Server ..> Room : creates
    Client ..> Message : sends/receives
    Server ..> boost_asio_io_context : uses
    Client ..> boost_asio_io_context : uses
    Client -- Thread_Model : implements
    Session -- AsyncPattern : implements
    Message -- MessageFlow : participates-in
    
    note for MessageFlow "Message path: 
    1. Client input → Client socket
    2. Server reads from socket
    3. Server creates Message
    4. Room broadcasts to participants
    5. Each Session queues message
    6. Session writes to client socket"
    
    note for Thread_Model "Thread architecture:
    1. Main thread runs io_context
    2. Client has dedicated input thread
    3. All async operations handled by io_context
    4. Socket operations are non-blocking"
    
    note for AsyncPattern "Asynchronous operations:
    1. async_read_until() with completion handler
    2. async_write() with completion handler
    3. Handlers capture shared_from_this()
    4. post() for thread-safe socket writes"
```

## Build and Run

To build and run the project, follow these steps:

1.  Clone the repository.
2.  Run `make` to build the project.
3.  Run `./chatApp <port>` to start the server, replacing `<port>` with the port number you want to use.
4.  Run `./clientApp <port>` to start a client, replacing `<port>` with the port number the server is running on.
