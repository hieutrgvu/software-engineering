# 9.4 Create a Jinja2 template file called home.html with the following
# contents:
#
# <html>
# <head>
# <title>It's alive!</title>
# <body>
# I'm of course referring to {{thing}}, which is {{height}} feet tall and
# {{color}}.
# </body>
# </html>

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

import os

home_html = '''<html>
<head>
<title>It's alive!</title>
<body>
I'm of course referring to {{thing}}, which is {{height}} feet tall and
{{color}}.
</body>
</html>
'''

if not os.path.exists('./templates'):
    os.makedirs('./templates')

with open('./templates/home.html', 'wt') as fout:
    fout.write(home_html)
