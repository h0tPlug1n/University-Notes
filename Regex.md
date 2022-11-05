## Pattern:

|Pattern|Meaning|
|---|---|
|\[abc\]|Only a,b,c|
|\[^abc\]|Anything except a,b,c|
|\[a-z\]|Anything between a to z|
|\[A-Z\]| Anything between A to Z|
|\[a-z A-Z\]|a to z, A to Z|
|\[0-9\]|0 to 9|

## Quantifiers:

|Quantifiers|Meaning|
|---|---|
|\[ \]?| Occurs 0 or 1 time|
|\[ \]+|Occurs 1 or more times|
|\[ \]\*|Occurs 0 or more times|
|\[ \]{n}|Occurs n times|
|\[ \]{n, }|Occurs n or more times|
|\[ \]{y,z}|Occurs atleast y times but less than z times|

## Metacharacters

|Metacharacters|Meaning|
|---|---|
|\\d|\[0-9\]|
|\\D|\[^0-9\]|
|\\w|\[a-z A-Z_0-9\]|
|\\W|\[^\w\]|

## Examples:
- Mobile number staring with 8 or 9 and total digits are 10
	- \[89\]\[0-9\]{9}
- First character is uppercase, contains lowercase alphabets, only one digit is allowed in between
	- \[A-Z\]\[a-z\]\*\[0-9\]\[a-z\]\*
- Email Id
	- \[a-zA-Z0-9_\-\.\]+\[@\]+\[a-z\]+\[\.\]+\[a-z\]

