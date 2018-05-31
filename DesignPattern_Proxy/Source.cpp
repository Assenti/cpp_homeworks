#include "Client.h"
#include "Proxy.h"

int main()
{
	Client client("Some data");
	Proxy proxy;
	proxy.createServer();
	proxy.receiveData(client.getData());


	system("pause");
	return 0;
}