<<<<<<< HEAD
###MT6582 Kernel-3.10 Source

		sudo apt-get install ccache
		sudo gedit ~/.bashrc
Add:

		export USE_CCACHE=1
		export CCACHE_DIR=/home/ferhung/android/.ccache

Build:

		sudo chmod -R 777 * /home/ferhung/MT6582-LP-KERNEL/arm-eabi-linaro-4.6.2
		cd /home/ferhung/MT6582-LP-KERNEL/kernel
		export ARCH=arm
		export ARCH_MTK_PLATFORM=mt6582
		export CROSS_COMPILE=/home/ferhung/MT6582-LP-KERNEL/arm-eabi-linaro-4.6.2/bin/arm-eabi-
		make clean
		make 2014011_defconfig
		./build.sh


* Not Working
  * 
  * 

