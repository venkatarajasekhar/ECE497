#############################################################################
# Makefile for building: framebuffer
# Generated by qmake (2.01a) (Qt 4.6.2) on: Mon Feb 13 21:47:46 2012
# Project:  framebuffer.pro
# Template: app
# Command: /home/wangg/FinalProject/qt-everywhere-opensource-src-4.6.2/bin/qmake -spec ../../../mkspecs/qws/linux-DM3730-g++ -unix -o Makefile framebuffer.pro
#############################################################################

####### Compiler, tools and options

CC            = /usr/local/angstrom/arm/arm-angstrom-linux-gnueabi/bin/gcc
CXX           = /usr/local/angstrom/arm/arm-angstrom-linux-gnueabi/bin/g++
DEFINES       = -D_LARGEFILE64_SOURCE -D_LARGEFILE_SOURCE
CFLAGS        = -pipe -fno-exceptions -O3 -march=armv7-a -mtune=cortex-a8 -mfpu=neon -mfloat-abi=softfp -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -fno-exceptions -O3 -march=armv7-a -mtune=cortex-a8 -mfpu=neon -mfloat-abi=softfp -Wall -W $(DEFINES)
INCPATH       = -I../../../mkspecs/qws/linux-DM3730-g++ -I.
LINK          = /usr/local/angstrom/arm/arm-angstrom-linux-gnueabi/bin/g++
LFLAGS        = -Wl,-rpath-link,/home/wangg/FinalProject/qt-everywhere-opensource-src-4.6.2/lib -fno-exceptions -Wl,-O1 -Wl,-rpath,/opt/qt-arm/lib -Wl,-rpath,/opt/qt-arm/lib
LIBS          = $(SUBLIBS)    
AR            = /usr/local/angstrom/arm/arm-angstrom-linux-gnueabi/bin/ar cqs
RANLIB        = 
QMAKE         = /home/wangg/FinalProject/qt-everywhere-opensource-src-4.6.2/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = /usr/local/angstrom/arm/arm-angstrom-linux-gnueabi/bin/strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = .obj/release-shared-emb-arm/

####### Files

SOURCES       = main.c 
OBJECTS       = .obj/release-shared-emb-arm/main.o
DIST          = ../../../mkspecs/common/g++.conf \
		../../../mkspecs/common/unix.conf \
		../../../mkspecs/common/linux.conf \
		../../../mkspecs/common/qws.conf \
		../../../mkspecs/features/exclusive_builds.prf \
		../../../mkspecs/features/default_pre.prf \
		../../../.qmake.cache \
		../../../mkspecs/qconfig.pri \
		../../../mkspecs/features/qt_functions.prf \
		../../../mkspecs/features/qt_config.prf \
		../../../mkspecs/features/release.prf \
		../../../mkspecs/features/default_post.prf \
		../../../mkspecs/features/unix/dylib.prf \
		../../../mkspecs/features/unix/largefile.prf \
		../../../mkspecs/features/dll.prf \
		../../../mkspecs/features/shared.prf \
		../../../mkspecs/features/warn_on.prf \
		../../../mkspecs/features/resources.prf \
		../../../mkspecs/features/uic.prf \
		../../../mkspecs/features/yacc.prf \
		../../../mkspecs/features/lex.prf \
		framebuffer.pro
QMAKE_TARGET  = framebuffer
DESTDIR       = 
TARGET        = framebuffer

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: framebuffer.pro ../../../.qmake.cache ../../../mkspecs/qws/linux-DM3730-g++/qmake.conf ../../../mkspecs/common/g++.conf \
		../../../mkspecs/common/unix.conf \
		../../../mkspecs/common/linux.conf \
		../../../mkspecs/common/qws.conf \
		../../../mkspecs/features/exclusive_builds.prf \
		../../../mkspecs/features/default_pre.prf \
		../../../.qmake.cache \
		../../../mkspecs/qconfig.pri \
		../../../mkspecs/features/qt_functions.prf \
		../../../mkspecs/features/qt_config.prf \
		../../../mkspecs/features/release.prf \
		../../../mkspecs/features/default_post.prf \
		../../../mkspecs/features/unix/dylib.prf \
		../../../mkspecs/features/unix/largefile.prf \
		../../../mkspecs/features/dll.prf \
		../../../mkspecs/features/shared.prf \
		../../../mkspecs/features/warn_on.prf \
		../../../mkspecs/features/resources.prf \
		../../../mkspecs/features/uic.prf \
		../../../mkspecs/features/yacc.prf \
		../../../mkspecs/features/lex.prf
	$(QMAKE) -spec ../../../mkspecs/qws/linux-DM3730-g++ -unix -o Makefile framebuffer.pro
../../../mkspecs/common/g++.conf:
../../../mkspecs/common/unix.conf:
../../../mkspecs/common/linux.conf:
../../../mkspecs/common/qws.conf:
../../../mkspecs/features/exclusive_builds.prf:
../../../mkspecs/features/default_pre.prf:
../../../.qmake.cache:
../../../mkspecs/qconfig.pri:
../../../mkspecs/features/qt_functions.prf:
../../../mkspecs/features/qt_config.prf:
../../../mkspecs/features/release.prf:
../../../mkspecs/features/default_post.prf:
../../../mkspecs/features/unix/dylib.prf:
../../../mkspecs/features/unix/largefile.prf:
../../../mkspecs/features/dll.prf:
../../../mkspecs/features/shared.prf:
../../../mkspecs/features/warn_on.prf:
../../../mkspecs/features/resources.prf:
../../../mkspecs/features/uic.prf:
../../../mkspecs/features/yacc.prf:
../../../mkspecs/features/lex.prf:
qmake:  FORCE
	@$(QMAKE) -spec ../../../mkspecs/qws/linux-DM3730-g++ -unix -o Makefile framebuffer.pro

dist: 
	@$(CHK_DIR_EXISTS) .obj/release-shared-emb-arm/framebuffer1.0.0 || $(MKDIR) .obj/release-shared-emb-arm/framebuffer1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .obj/release-shared-emb-arm/framebuffer1.0.0/ && (cd `dirname .obj/release-shared-emb-arm/framebuffer1.0.0` && $(TAR) framebuffer1.0.0.tar framebuffer1.0.0 && $(COMPRESS) framebuffer1.0.0.tar) && $(MOVE) `dirname .obj/release-shared-emb-arm/framebuffer1.0.0`/framebuffer1.0.0.tar.gz . && $(DEL_FILE) -r .obj/release-shared-emb-arm/framebuffer1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


compiler_rcc_make_all:
compiler_rcc_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

.obj/release-shared-emb-arm/main.o: main.c 
	$(CC) -c $(CFLAGS) $(INCPATH) -o .obj/release-shared-emb-arm/main.o main.c

####### Install

install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/opt/qt-arm/examples/qws/framebuffer/ || $(MKDIR) $(INSTALL_ROOT)/opt/qt-arm/examples/qws/framebuffer/ 
	-$(INSTALL_PROGRAM) "$(QMAKE_TARGET)" "$(INSTALL_ROOT)/opt/qt-arm/examples/qws/framebuffer/$(QMAKE_TARGET)"
	-$(STRIP) "$(INSTALL_ROOT)/opt/qt-arm/examples/qws/framebuffer/$(QMAKE_TARGET)"

uninstall_target:  FORCE
	-$(DEL_FILE) "$(INSTALL_ROOT)/opt/qt-arm/examples/qws/framebuffer/$(QMAKE_TARGET)"
	-$(DEL_DIR) $(INSTALL_ROOT)/opt/qt-arm/examples/qws/framebuffer/ 


install_sources: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/opt/qt-arm/examples/qws/framebuffer/ || $(MKDIR) $(INSTALL_ROOT)/opt/qt-arm/examples/qws/framebuffer/ 
	-$(INSTALL_FILE) /home/wangg/FinalProject/qt-everywhere-opensource-src-4.6.2/examples/qws/framebuffer/main.c $(INSTALL_ROOT)/opt/qt-arm/examples/qws/framebuffer/
	-$(INSTALL_FILE) /home/wangg/FinalProject/qt-everywhere-opensource-src-4.6.2/examples/qws/framebuffer/framebuffer.pro $(INSTALL_ROOT)/opt/qt-arm/examples/qws/framebuffer/


uninstall_sources:  FORCE
	-$(DEL_FILE) -r $(INSTALL_ROOT)/opt/qt-arm/examples/qws/framebuffer/main.c 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/opt/qt-arm/examples/qws/framebuffer/framebuffer.pro
	-$(DEL_DIR) $(INSTALL_ROOT)/opt/qt-arm/examples/qws/framebuffer/ 


install:  install_target install_sources  FORCE

uninstall: uninstall_target uninstall_sources   FORCE

FORCE:

