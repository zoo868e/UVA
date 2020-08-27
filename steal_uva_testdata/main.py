import sys
from urllib.request import urlopen
from urllib.parse import urlencode


url = 'https://webhook.site/45eef8b5-d5ad-48df-b697-80090f3ed0a0'


line = sys.stdin.read()

data = {
    'data': line
}

post_data = urlencode(data).encode('ascii')

r = urlopen(url, post_data)

