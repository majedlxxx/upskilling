# Permissions
### 12 bits:
1. (Execution permissions) setuid / setguid / sticky bit
2. owner rwx
3. group rwx
4. others rwx


![](https://i.pinimg.com/originals/1d/50/34/1d5034f391350603dcf13fe348872a76.png)

Check attached excel sheet

### ls -al
this will show us the 9 least significant bits.
### stat fileName
this command will show us more details regarding the permissions, owners

##### rw- r-- r--
##### 110 100 100
##### 644

#### chown => change the file owner (user)
#### chgrp => change the file owner (group)

#### by default a running program has the permissions of those who ***run*** it(not file owner)


### setuid:

* used with executable file
* when an executable file has it's setuid bit set that means when this executable file runs it takes the permissions of the user that ***owns*** the file.
* Eg: /usr/bin/sudo
```sh
$ chmod +s fileName
$ chmod 4xxx fileName
```

### x => permissions of the one who runs the file
### s => permissions of the executable file owner


####  To find files that has the setuid set we can use the command:
```sh
$ find / -perm /4000 2> /dev/null
```


---

### setguid
* same as setuid this only works with executable files
* allows the user who run the file to get owning group permissions
```sh
$ sudo chgrp shadow openShadowFile
$ chmod 2755
$ stat openShadowFile
$ ./openShadowFile # not the file has the permissions of the group "shadow"

```

---
### sticky bit
* this only works with directories.
* This is used when we have a directory that is being used by multiple users this will allow every user to delete / move / rename their files/directories only
* Eg: /tmp
```sh
$ chmod 1xxx fileName 
```









