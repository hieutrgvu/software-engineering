import socket

server_address = ('localhost', 6789)
max_size = 4096

print('Starting the UDP client ...')
client = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
client.sendto(b'time', server_address)
data, server = client.recvfrom(max_size)
print('UDP client received:', data)
client.close()
