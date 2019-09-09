## *********************************************************
##
## File autogenerated for the intera_interface package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 245, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 290, 'description': 'Amount of time (s) controller is permitted to be late achieving goal', 'max': 120.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'goal_time', 'edit_method': '', 'default': 0.1, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'Maximum velocity (m/s) at end of trajectory to be considered stopped', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'stopped_velocity_tolerance', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 290, 'description': 'right_j0 - maximum final error', 'max': 0.5, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_j0_goal', 'edit_method': '', 'default': -0.2, 'level': 0, 'min': -0.5, 'type': 'double'}, {'srcline': 290, 'description': 'right_j1 - maximum final error', 'max': 0.5, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_j1_goal', 'edit_method': '', 'default': -0.2, 'level': 0, 'min': -0.5, 'type': 'double'}, {'srcline': 290, 'description': 'right_j2 - maximum final error', 'max': 0.5, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_j2_goal', 'edit_method': '', 'default': -0.2, 'level': 0, 'min': -0.5, 'type': 'double'}, {'srcline': 290, 'description': 'right_j3 - maximum final error', 'max': 0.5, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_j3_goal', 'edit_method': '', 'default': -0.2, 'level': 0, 'min': -0.5, 'type': 'double'}, {'srcline': 290, 'description': 'right_j4 - maximum final error', 'max': 0.5, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_j4_goal', 'edit_method': '', 'default': -0.2, 'level': 0, 'min': -0.5, 'type': 'double'}, {'srcline': 290, 'description': 'right_j5 - maximum final error', 'max': 0.5, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_j5_goal', 'edit_method': '', 'default': -0.2, 'level': 0, 'min': -0.5, 'type': 'double'}, {'srcline': 290, 'description': 'right_j6 - maximum final error', 'max': 0.5, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_j6_goal', 'edit_method': '', 'default': -0.2, 'level': 0, 'min': -0.5, 'type': 'double'}, {'srcline': 290, 'description': 'right_j0 - maximum error during trajectory execution', 'max': 0.5, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_j0_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -0.5, 'type': 'double'}, {'srcline': 290, 'description': 'right_j1 - maximum error during trajectory execution', 'max': 0.5, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_j1_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -0.5, 'type': 'double'}, {'srcline': 290, 'description': 'right_j2 - maximum error during trajectory execution', 'max': 0.5, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_j2_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -0.5, 'type': 'double'}, {'srcline': 290, 'description': 'right_j3 - maximum error during trajectory execution', 'max': 0.5, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_j3_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -0.5, 'type': 'double'}, {'srcline': 290, 'description': 'right_j4 - maximum error during trajectory execution', 'max': 0.5, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_j4_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -0.5, 'type': 'double'}, {'srcline': 290, 'description': 'right_j5 - maximum error during trajectory execution', 'max': 0.5, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_j5_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -0.5, 'type': 'double'}, {'srcline': 290, 'description': 'right_j6 - maximum error during trajectory execution', 'max': 0.5, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_j6_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -0.5, 'type': 'double'}], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

