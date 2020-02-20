# 9.3 Add a home() function to handle requests for the home page. Set it up to
# return the string It's alive!.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

from flask import Flask

app = Flask(__name__)

@app.route('/')
def home():
    return "It's alive!"

app.run(port=5000, debug=True)
