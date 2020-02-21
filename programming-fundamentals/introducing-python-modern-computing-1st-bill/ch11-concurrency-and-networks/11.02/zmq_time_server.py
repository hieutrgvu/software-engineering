import zmq
from datetime import datetime

print('Starting the ZeroMQ server ...')
print('Waiting for a client to call.')

host = '127.0.0.1'
port = 6789
context = zmq.Context()
server = context.socket(zmq.REP)
server.bind("tcp://%s:%s" % (host, port))

request_bytes = server.recv()
request_str = request_bytes.decode('utf-8')

if request_str == 'time':
    reply_str = str(datetime.now())
else:
    reply_str = 'Unknown command'

reply_bytes = bytes(reply_str, 'utf-8')
server.send(reply_bytes)
