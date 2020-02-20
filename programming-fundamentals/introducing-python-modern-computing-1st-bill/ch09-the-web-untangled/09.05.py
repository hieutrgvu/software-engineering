# 9.5 Modify your server’s home() function to use the home.html template.
# Provide it with three GET parameters: thing, height, and color.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

from flask import Flask, request, render_template

app = Flask(__name__)

@app.route('/')
def home():
    thing = request.values.get('thing')
    height = request.values.get('height')
    color = request.values.get('color')
    return render_template('home.html', thing=thing, height=height, color=color)

app.run(port=5000, debug=True)

# http://127.0.0.1:5000/?thing=Dog&height=1&color=white
