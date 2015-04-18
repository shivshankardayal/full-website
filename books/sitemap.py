#!/usr/bin/env python

from bs4 import BeautifulSoup
import urllib2

page = urllib2.urlopen("https://10hash.com").read()

soup = BeautifulSoup(page)
urls = []
for a in soup.findAll('a', href=True):
    if a['href'] != '#' and a['href'] not in urls and a['href'] != 'http://10hash.com'\
       and a['href'][0:7] != 'http://' and a['href'][0:8] != 'https://':
        urls.append(a['href'])
        print a['href']

for i in urls:
    try:
        page = urllib2.urlopen("https://10hash.com/" + i).read()
        soup = BeautifulSoup(page)
	print i
    except:
        pass

    for a in soup.findAll('a', href=True):
        if a['href'] != '#' and a['href'] not in urls and a['href'] != 'http://10hash.com' \
           and a['href'][0:7] != 'http://' and a['href'][0:8] != 'https://':
            l = a['href'].split('/')
            if len(l[len(l) - 1]) is not 0: 
                if l[len(l) - 1][0] != '#':
                    urls.append(a['href'])
                    print a['href']
            else:
                urls.append(a['href'])
                print a['href']

print len(urls)

file = open('sitemap.xml', 'w')

file.write('<?xml version="1.0" encoding="UTF-8"?>\n \
            <urlset xmlns="http://www.sitemaps.org/schemas/sitemap/0.9"\n \
            xmlns:image="http://www.google.com/schemas/sitemap-image/1.1"\n \
            xmlns:video="http://www.google.com/schemas/sitemap-video/1.1">\n')

for i in urls:
    file.write('<url>\n')
    file.write('\t<loc>' + 'https://10hash.com/' + i + '</loc>\n')
    file.write('</url>\n')

file.write('</urlset>')
file.close()

