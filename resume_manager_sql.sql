CREATE TABLE `resumename` (
  `Resume_name_pk` int(11) NOT NULL AUTO_INCREMENT,
  `resume_name` varchar(100) NOT NULL,
  PRIMARY KEY (`Resume_name_pk`),
  UNIQUE KEY `ResumeName_pk_UNIQUE` (`Resume_name_pk`),
  UNIQUE KEY `resume_name_UNIQUE` (`resume_name`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=latin1;

CREATE TABLE `work_experience` (
  `work_ex_pk` int(11) NOT NULL AUTO_INCREMENT,
  `company_name` varchar(105) NOT NULL,
  `from_date` datetime NOT NULL,
  `to_date` datetime DEFAULT NULL,
  `job_description` varchar(500) DEFAULT NULL,
  `resume_name_fk` int(11) NOT NULL,
  `currently_pursuing` int(11) NOT NULL,
  PRIMARY KEY (`work_ex_pk`),
  KEY `resume_fk_idx` (`resume_name_fk`),
  CONSTRAINT `resume_name_fk` FOREIGN KEY (`resume_name_fk`) REFERENCES `resumename` (`Resume_name_pk`) ON DELETE CASCADE ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

CREATE TABLE `address` (
  `address_pk` int(11) NOT NULL AUTO_INCREMENT,
  `street address` varchar(200) NOT NULL,
  `city` varchar(45) NOT NULL,
  `state` varchar(45) NOT NULL,
  `zip` int(11) NOT NULL,
  `resume_name_fk` int(11) NOT NULL,
  PRIMARY KEY (`address_pk`),
  KEY `resume_name_fork_idx` (`resume_name_fk`),
  CONSTRAINT `resume_name_fork` FOREIGN KEY (`resume_name_fk`) REFERENCES `resumename` (`Resume_name_pk`) ON DELETE CASCADE ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

CREATE TABLE `personal_details` (
  `personal_details_pk` int(11) NOT NULL AUTO_INCREMENT,
  `first_name` varchar(45) NOT NULL,
  `last_name` varchar(45) NOT NULL,
  `mobile` int(11) NOT NULL,
  `email` varchar(100) NOT NULL,
  `resume_name_fk` int(11) NOT NULL,
  PRIMARY KEY (`personal_details_pk`),
  UNIQUE KEY `personal_details_pk_UNIQUE` (`personal_details_pk`),
  KEY `resume_name_fk_idx` (`resume_name_fk`),
  CONSTRAINT `resum_name_fk` FOREIGN KEY (`resume_name_fk`) REFERENCES `resumename` (`Resume_name_pk`) ON DELETE CASCADE ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

CREATE TABLE `technical_skilss` (
  `technical_skills` int(11) NOT NULL AUTO_INCREMENT,
  `skill_name` varchar(100) NOT NULL,
  `proficiency` varchar(45) NOT NULL,
  `years_used` int(11) NOT NULL,
  `resume_name_fk` int(11) NOT NULL,
  PRIMARY KEY (`technical_skills`),
  UNIQUE KEY `technical_skills_UNIQUE` (`technical_skills`),
  UNIQUE KEY `skill_name_UNIQUE` (`skill_name`),
  KEY `tech_resume_fk_idx` (`resume_name_fk`),
  CONSTRAINT `tech_resume_fk` FOREIGN KEY (`resume_name_fk`) REFERENCES `resumename` (`Resume_name_pk`) ON DELETE CASCADE ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

CREATE TABLE `education_details` (
  `education_details_pk` int(11) NOT NULL AUTO_INCREMENT,
  `college_name` varchar(150) NOT NULL,
  `from_date` datetime NOT NULL,
  `to_date` datetime DEFAULT NULL,
  `still_pursuing` int(11) NOT NULL,
  `field` varchar(105) NOT NULL,
  `GPA` double NOT NULL,
  `resume_name_fk` int(11) NOT NULL,
  PRIMARY KEY (`education_details_pk`),
  UNIQUE KEY `education_details_pk_UNIQUE` (`education_details_pk`),
  KEY `resum_edu_fk_idx` (`resume_name_fk`),
  CONSTRAINT `resum_edu_fk` FOREIGN KEY (`resume_name_fk`) REFERENCES `resumename` (`Resume_name_pk`) ON DELETE CASCADE ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
