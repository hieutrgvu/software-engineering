/*
** 5.8. What SQL syntax do you use to import data?
**
** Resolved by: Hieu Vu
*/

LOAD DATA INFILE '~/pathtofile/yourfile.csv'
INTO TABLE yourschema.yourtable
FIELDS TERMINATED BY ',';
