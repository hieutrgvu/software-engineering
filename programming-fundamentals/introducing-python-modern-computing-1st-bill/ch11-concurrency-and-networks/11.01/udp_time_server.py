import socket
from datetime import datetime

server_address = ('localhost', 6789)
max_size = 4096

print('Starting the UDP server ...')
print('Waiting for a client to call.')
server = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
server.bind(server_address)

data, client = server.recvfrom(max_size)
if data == b'time':
    now = str(datetime.now())
    resp = now.encode('utf-8')
    server.sendto(resp, client)
else:
    server.sendto(b'Unknown command', client)

server.close()
