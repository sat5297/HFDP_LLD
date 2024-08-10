## This is a PizzaStore example from the book Head First Design Pattern.
This example uses Abstract Factory Design Patter to figure out which PizzaStore to be created on the fly.
Currently we have 2 options NYStylePizzaStore and ChicagoStylePizzaStore which can be easily extended further.

Based on this it creates pizza in those specific stores. 
We use Pizza abstract class. All the concrete Pizza classes inherits it and then build there pizza. 
