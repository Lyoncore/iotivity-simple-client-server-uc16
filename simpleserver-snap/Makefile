all:
	cd iotivity-source && scons RELEASE=false

install:
	mkdir -p ${DESTDIR}/bin
	cp iotivity-source/out/linux/x86_64/debug/resource/examples/simpleserver ${DESTDIR}/bin/
	chmod +x ${DESTDIR}/bin/simpleserver
