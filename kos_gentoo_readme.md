# crossdev
```
emerge crossdev
follow https://wiki.gentoo.org/wiki/Custom_ebuild_repository to create local repo
crossdev -S -t avr -oO /var/db/repos/localrepo-crossdev
```

# teensy
```
emerge libusb-compat
git clone https://github.com/PaulStoffregen/teensy_loader_cli.git
make
cp teensy_loader_cli /usr/local/bin/
```

# kernel
```
modprobe cdc_acm
```

# build, flash
```
cd tmk_keyboard/keyboard/ergodox
make -f Makefile.lufa clean
make -f Makefile.lufa kos
make -f Makefile.lufa teensy
```
