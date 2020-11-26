INSERT INTO species (species_id, species_name, description)
VALUES
	('Tiger_B', 'Bengal', 'Panthera tigris tigris subspecies that is native to the Indian subcontinent'),
	('Tiger_M', 'Malayan', 'Panthera tigris tigris subspecies that is native to Peninsular Malaysia'),
	('Monkey_M', 'Mandrill', 'one of two species assigned to the genus Mandrillus'),
	('Money_L', 'Lesula', 'a species of Old World monkey in the guenon family');

INSERT INTO animals (animal_id, specific_id, friendly_name, weight, place)
VALUES
	('tiger01', 'Tiger_M', 'Mendy', 100, 'Case01'),
	('tiger02', 'Tiger_M', 'John', 120, 'Case01'),
	('monkey01', 'Monkey_M', 'Havana', 40, 'Case03'),
	('tiger03', 'Tiger_B', 'Ki', 90, 'Case02'),
	('monkey02', 'Monkey_M', 'Lean', 45, 'Case03'),
	('monkey03', 'Monkey_L', 'Duan', 43, 'Case03');
	