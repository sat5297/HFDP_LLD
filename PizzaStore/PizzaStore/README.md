## This is a PizzaStore example from the book Head First Design Pattern.
This example uses Factory Design Pattern to figure out which PizzaStore to be created on the fly.
Currently we have 2 options NYStylePizzaStore and ChicagoStylePizzaStore which can easily be extended further.

Based on this it creates pizza in those specific stores.
We use Pizza abstract class. All the concrete Pizza classes inherits it and then builds there pizza. 

We are also using NULL Design Pattern in this. The NULL Pizza is example of the same.
Using NULL DP we can avoid multiple checks and run the commands for all the pizza without worrying if that type of pizza exists or not.

All this is possbile since we're Programming to Interface and not the implementation.
