CREATE TABLE `student`
(
  `id` int PRIMARY KEY,
  `name` varchar(255),
  `identification_number` varchar(255),
  `course` varchar(255),
  `batch_id` int
);

CREATE TABLE `project`
(
  `id` int PRIMARY KEY,
  `name` varchar(255),
  `proposal` varchar(255),
  `student_id` int
);

CREATE TABLE `supervisor`
(
  `id` int PRIMARY KEY,
  `name` varchar(255),
  `identification_number` varchar(255)
);

CREATE TABLE `supervisor_student`
(
  `supervisor_id` int,
  `student_id` int
);

CREATE TABLE `program`
(
  `id` int PRIMARY KEY,
  `name` varchar(255)
);

CREATE TABLE `project_phase`
(
  `id` int PRIMARY KEY,
  `description` varchar(255)
);

CREATE TABLE `batch`
(
  `id` int PRIMARY KEY,
  `program_id` int,
  `start_date` date,
  `project_start_date` date
);

CREATE TABLE `project_phase_dead_line`
(
  `id` int PRIMARY KEY,
  `bacth_id` int,
  `project_phase_id` int,
  `dead_line_date` date
);

CREATE TABLE `project_tracking`
(
  `id` int PRIMARY KEY,
  `project_id` int,
  `project_phase_id` int,
  `project_notes` varchar(255),
  `submission_date` varchar(255)
);

ALTER TABLE `student` ADD FOREIGN KEY (`batch_id`) REFERENCES `batch` (`id`);

ALTER TABLE `project` ADD FOREIGN KEY (`student_id`) REFERENCES `student` (`id`);

ALTER TABLE `supervisor_student` ADD FOREIGN KEY (`supervisor_id`) REFERENCES `supervisor` (`id`);

ALTER TABLE `supervisor_student` ADD FOREIGN KEY (`student_id`) REFERENCES `student` (`id`);

ALTER TABLE `batch` ADD FOREIGN KEY (`program_id`) REFERENCES `program` (`id`);

ALTER TABLE `project_phase_dead_line` ADD FOREIGN KEY (`bacth_id`) REFERENCES `batch` (`id`);

ALTER TABLE `project_phase_dead_line` ADD FOREIGN KEY (`project_phase_id`) REFERENCES `project_phase` (`id`);

ALTER TABLE `project_tracking` ADD FOREIGN KEY (`project_id`) REFERENCES `project` (`id`);

ALTER TABLE `project_tracking` ADD FOREIGN KEY (`project_phase_id`) REFERENCES `project_phase` (`id`);
