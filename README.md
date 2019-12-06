# cec17_python_inferface
Python wrapper for benchmark functions Congress on Evolutionary Computation Competition on real-parameter optimization

Usage:

To import the functions in python use import cec17

First initialize the function as follows: cec17.Init(D,func_num)

For successfull operation the input_data folder is needed, which contains shift and rotation data for each function.

Here D is the problem dimension (10, 30, 50, 100), func_num is the function number, i.e. from 1 to 30.

After this you can call cec17.cec17func(X), where X is a D-dimensional numpy array.

