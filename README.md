# tdl
Tiny Deep Learning

Library Functions:

read_conf()
matrix_mult()
sigmoid()
red_lin()
norm()
back_prop()
forward_prop()
delta()

Configuration:

N_INP       Number of nodes in input layer
N_OUT       Number of nodes in output layer
N_LAYERS    Number of internal layers
N_NODES_<n> Number of nodes in internal layers <n>
NON_LIN_<n> Non-linear function to be used

Files:
DATA_CONF   file containing configuration data 
Example:
  N_INP       Number of nodes in input layer  
  N_OUT       Number of nodes in output layer  
  N_LAYERS    Number of internal layers  
  N_NODES_<n> Number of nodes in internal layers <n>  
  NON_LIN_<n> Non-linear function to be used

DATA_TRAIN  file containing training data (Header: N_INP, N_OUT)
Example:
  N_INP 3
  N_OUT 4
  2.0 4.2 1.1
  3.1 1.0 1.0 2.2
  
DATA_TEST   file containing test data (Header: N_INP)
Example:
  N_INP 4
  4.2 5.6 1.5 7.2
  
AI_BRAIN    file containing the trained neural network (Header: Complete configuration)
Example:
  N_INP       Number of nodes in input layer
  N_OUT       Number of nodes in output layer
  N_LAYERS    Number of internal layers
  N_NODES_<n> Number of nodes in internal layers <n>
  NON_LIN_<n> Non-linear function to be used

