# 💻 Born2beRoot - Secure Virtual Machine Setup

## 🌟 Introduction

**Born2beRoot** is a foundational project within the 42 Cursus focused on **System Administration** and **Basic Security**. The main goal is to install and configure a virtual machine (VM) using **VirtualBox** with a Linux operating system (typically Debian or CentOS), implementing a series of essential security measures and configurations.

This project demonstrates my ability to:

* Set up and manage a Linux server environment.
* Implement critical security practices (Firewall, SSH, Sudo).
* Automate system monitoring tasks using Cron.
* Work within a virtualization environment (VirtualBox).

## 🛠️ Technologies Used

* **Virtualization:** VirtualBox
* **Operating System:** Debian (or CentOS, depending on the Cursus specifications)
* **Networking:** SSH (Secure Shell)
* **Security:** UFW (Uncomplicated Firewall)
* **Administration:** Sudo
* **Automation:** Cron

## 🚀 Requirements and Configuration

The project requires the following configurations within the virtual machine:

### 1. Installation and Partitioning

* Clean installation of the operating system inside a VirtualBox VM.
* **LVM Partitioning (Logical Volume Manager):** Configuration of the hard disk using LVM for flexible disk space management.
* **LVM Encryption:** The disk must be encrypted to ensure data security.

### 2. Users and Access

* **Main User:** Creation of a standard (non-root) user with a specific name (e.g., your 42 login).
* **Sudo:** The main user must be able to execute administrative commands via `sudo`, and their activity must be tracked (logging enabled).
* **Password Policy:** Implementation of a strict password policy (e.g., minimum length, complexity, automatic expiration).

### 3. Networking and Security

* **SSH (Secure Shell):** Configuration of the SSH service for remote access. Access must only be allowed for the standard user (root login disabled).
* **UFW (Uncomplicated Firewall):** Configuration and activation of the firewall to:
    * Deny all incoming traffic by default.
    * Only allow incoming traffic on the SSH port (standard or modified port).
* **SSH Port:** Using an SSH port **different from the standard one (22)** is highly recommended/required for enhanced security.

### 4. Monitoring and Logging

* **Cron Job:** Implementation of a `cron` job that runs every **10 minutes**.
* **Monitoring Script:** The script must:
    1.  Display critical system information (e.g., architecture, LVM status, network status, RAM usage, CPU usage).
    2.  Print the output to a log file at `/var/log/monitoring.log`.
* **SSH Banner:** Configuration of a custom message that is displayed before the SSH login (a warning message).

## ✅ Validation Criteria

Project validation is performed by accessing the VM and manually verifying all the following points:

* Sudo status and configuration (command traceability).
* Encrypted LVM partitioning.
* Password policy and expiration management.
* Correct UFW configuration and activation.
* Functionality and output of the monitoring Cron Job.
* SSH access security (root login blocked, correct port).

---

## 👨‍💻 Contact Information

This project was developed as part of my curriculum at 42.

**Author:** [Your Name]
**42 Login:** [Your 42 Login]
