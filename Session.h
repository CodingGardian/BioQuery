// a connection of a client, DB, etc.
// What do I define as a connection?
//   * A path for data to be exchanged between two parties
// There is us, the server, and there is the client (which can be anything)

class I_DBRequest;

class I_Server;

class I_Session {
private:
	// way to represent/define client

public:
	virtual ~I_Session();

	virtual void sendRequest(I_DBRequest request);

	virtual void listen();

	virtual void waitForRequest();

	virtual void close();

	virtual bool connect(I_Server& s);
};