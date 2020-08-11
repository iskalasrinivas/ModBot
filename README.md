# ModBot
Modular Robot


## URDF Exporter Steps
Step 1: Download exporter for Solidworks from http://wiki.ros.org/sw_urdf_exporter \
Step 2: After creating assembly, click on File --> Export as URDF
Step 3: Define Links (and child links if any) and Joints, click Preview and Export
Step 4: Confirm values and click Export URDF With Meshes

## Launch URDF on Gazebo
Step 1: Copy Meshes, URDF folders to your package in Catkin Workspace
Step 2: Spawn this model in Gazebo using the spawn_model node from gazebo_ros package

## Downloads
### URDF Exporter
```
http://wiki.ros.org/sw_urdf_exporter
```
### Hector_slam package
```
git clone https://github.com/tu-darmstadt-ros-pkg/hector_slam.git
``` 
### Qt4 installation
```
sudo apt-get install qt4-default
```
