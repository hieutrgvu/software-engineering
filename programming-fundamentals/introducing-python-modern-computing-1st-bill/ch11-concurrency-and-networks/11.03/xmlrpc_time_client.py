import xmlrpc.client

print('Starting the XMLRPC client ...')
proxy = xmlrpc.client.ServerProxy("http://localhost:6789/")
print(proxy.get_time())
