from xmlrpc.server import SimpleXMLRPCServer
from datetime import datetime

def get_time():
    return str(datetime.now())

print('Starting the XMLRPC server ...')
print('Waiting for a client to call.')

server = SimpleXMLRPCServer(("localhost", 6789))
server.register_function(get_time, "get_time")
server.serve_forever()
