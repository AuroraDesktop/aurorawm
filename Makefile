# aurorawm: dwm based window manager for the
# aurorade project.

include config.mk

SRC = drw.c aurorawm.c util.c
OBJ = ${SRC:.c=.o}

all: options aurorawm

options:
	@echo -----------------
	@echo aurorawm build options:
	@echo "CFLAGS   = ${CFLAGS}"
	@echo "LDFLAGS  = ${LDFLAGS}"
	@echo "CC       = ${CC}"
	@echo -----------------

%.o: %.c
	@echo CC $<
	@${CC} -c ${CFLAGS} -o $@ $<

${OBJ}: config.h config.mk

config.h:
	@cp config.def.h config.h

aurorawm: ${OBJ}
	@echo LINK $@
	@${CC} -o $@ ${OBJ} ${LDFLAGS}

clean:
	@echo cleaning
	@rm -f aurorawm ${OBJ} aurorawm-${VERSION}.tar.gz config.h

format:
	@echo "Formatting files using clang-format"
	@clang-format --style="{BasedOnStyle: llvm, IndentWidth: 4}" -i `find . -name "*.h"`
	@clang-format --style="{BasedOnStyle: llvm, IndentWidth: 4}" -i `find . -name "*.c"`
	@echo "Done!"

dist: clean
	@echo creating dist tarball
	@mkdir -p aurorawm-${VERSION}
	@cp -R LICENSE Makefile README config.def.h config.mk\
		drw.h util.h ${SRC} transient.c aurorawm-${VERSION}
	@tar -cf aurorawm-${VERSION}.tar aurorawm-${VERSION}
	@gzip -f aurorawm-${VERSION}.tar
	@rm -rf aurorawm-${VERSION}

install: all
	@echo installing executable file to ${DESTDIR}${PREFIX}/bin
	@mkdir -p ${DESTDIR}${PREFIX}/bin
	@cp -f aurorawm ${DESTDIR}${PREFIX}/bin
	@chmod 755 ${DESTDIR}${PREFIX}/bin/aurorawm

uninstall:
	@echo removing executable file from ${DESTDIR}${PREFIX}/bin
	@rm -f ${DESTDIR}${PREFIX}/bin/aurorawm

.PHONY: all options clean dist install uninstall
