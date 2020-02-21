import string
import zmq

host = '127.0.0.1'
port = 6789
ctx = zmq.Context()
sub = ctx.socket(zmq.SUB)
sub.connect('tcp://%s:%s' % (host, port))
sub.setsockopt(zmq.SUBSCRIBE, b'poem')

while True:
    topic, data = sub.recv_multipart()
    w = data.decode('utf-8')
    if w.startswith(('a','e','i','o','u','A','E','I','O','U')) or len(w) == 5:
        print(w)
