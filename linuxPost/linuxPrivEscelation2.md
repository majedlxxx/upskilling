# Bypassing Linux passwords


### Entering a Linux system without knowing the password

* Hard drives in general are not encrypted by default.
* Encrypting hard drives might slow your computer.
* Encrypting a hard drive in a server environment will prevent services from starting.

* That's why we can boot into a live Linux system and access all the files.

### Method 1: Removing the x in the passwd file.
* When logging in into linux:
    - The system check if the user has x in the passwd file.   Eg: majed:x:1000:1000:majed,,,:/home/majed:/bin/bash
    - if the x doen't exist the system will login us automatically without checking the password.
    - if the x exists the system will check shadow file for the hashed password.
* we cerate a bootable live linux USB.
* We boot into the live linux usb
* we navigate to etc/passwd file found on the victim's disk.
* we remove the x found in the user's line.
* reboot into the system (remove the USB)
* now we can login to the system with any password


### Method 2: Generate a hashed password and replace it with the original one:

#### shadow file structure:
* user1:$6$Gb4CRWFlKWZZCkLe$8TwH9Js6td2x62DZZVup.........
* username:hashing algorithm id:salt:hashed password
* hashing algorithms:
    1. $1$ is MD5
    2. $2a$ is Blowfish
    3. $2y$ is Blowfish
    4. $5$ is SHA-256
    5. $6$ is SHA-512

* we cerate a bootable live linux USB.
* We boot into the live linux usb
* Generate a new hashed password:
    * '''sh
    $ openssl passwd -6 -salt xyz  yourpass
    '''
    * ''' python
    import crypt;
    print(crypt.crypt("passowrd","$6$salt"))
    '''
* we navigate to etc/shadow file found on the victim's disk.
* Replace the old hashed password with a newly generated one.


### Method 3: Create a new user:
* Add a line to /etc/passwd
* We can have the id 0 for the user(same as root)
* Generate a new password using openssl / python
* Add a line to /etc/shadow

### Cracking password using John the Ripper:

* john shadowFilePath
* john the ripper has a default wordlist the it tries against the hashes found within the shadow file.

