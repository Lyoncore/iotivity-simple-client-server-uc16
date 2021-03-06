## *An Iotivity demo on Ubuntu Core 16*

#### This demo builds two snap packages
* iotivity-simpleserver
  * Run iotivity/resource/examples/simpleserver as a service on Ubuntu Core 16
* iotivity-simpleclient
  * Build iotivity/resource/examples/simpleclient as a command on Ubuntu Core 16

#### Build and test environment
* Build on Ubuntu desktop 16.04 on amd64
* Test on Ubuntu Core 16 on amd64

#### Build steps on Ubuntu desktop 16.04
1. Clone the source
```
git clone https://github.com/Lyoncore/iotivity-simple-client-server-uc16
```
2. Build snap packages
```
Enter simpleserver-snap or simpleclient-snap folder and run:
snapcraft
```
#### Install and test on Ubuntu Core 16
1. Find an Ubuntu Core 16 system, connect to a local network and install simpleserver snap package with devmode
```
sudo snap install --devmode iotivity-simpleserver_xxxx.snap
```

2. Find another Ubuntu Core 16 system, connect to the same local network as simpleserver, install simpleclient snap package with devmode and run the simpleclient, you can see the simpleclient communicates with simpleserver
```
sudo snap install --devmode iotivity-simpleclient_xxxx.snap
iotivity-simpleclient.simpleclient
```
