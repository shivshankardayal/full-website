#!/usr/bin/env python3


import sys
import http.client
from bs4 import BeautifulSoup


con = http.client.HTTPConnection(sys.argv[1], 80)
con.request("GET", sys.argv[2])
res = con.getresponse()
home = res.read()
soup = BeautifulSoup(home, 'html.parser')
lis = soup.find_all('li')
links = set()
for l in lis:
    try:
        if 'toctree-l1' in l['class']:
            #print(l.a['href'])
            links.add(l.a['href']) 
    except:
        pass


for l in links:
    print('http://' + sys.argv[1] + sys.argv[2] + l)
