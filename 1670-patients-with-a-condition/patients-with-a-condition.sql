# Write your MySQL query statement below
-- select patient_id,patient_name,conditions from Patients where conditions regex '^[a-zA-Z]*DIAB1[0-9][a-zA-Z]*$';
--   SELECT patient_id, patient_name, conditions
-- FROM Patients
-- WHERE conditions REGEXP '^[a-zA-Z]*DIAB1[0-9]$' OR REGEX '^DIAB1[0-9][A-Za-z]*$';

select patient_id, patient_name, conditions from Patients where conditions like 'DIAB1%' or conditions like '% DIAB1%';