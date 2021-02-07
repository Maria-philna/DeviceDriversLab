	
echo Enter url
read url

# curl is used to get the main html file
time curl $url > webpage.html

# wget is used to obtain all the necessary resources
wget -r -np -k $url 