# Windows password bypassing:
Windows password and usernames are stored in:

* c:\Windows\System32\config\SAM

to modify this database:
* we use a tool called chntpw => (Remember as: change the password)
to list all users:
1. navigate to the above path
2. sudo chntpw -l SAM
then we can chose a certain user:
sudo chntpw -u username SAM:
    1. clear password
    2. promote to admin
    3. unlock
    