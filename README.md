#Finite Gambler's Ruin
As an extension to my Markov Chain project, I've created a short algorithm to work out a variation of the Gambler's ruin problem.

Standard versions of the problem taught in lectures do not set any upper bound, nor set probabilities for these.

This is made specifically such that the probability of winning is equal to the probability of losing.

If you reach 'peakNum', this is an absorbing state. Zero is also an absorbing state. You can find the probability of reaching zero from any other state with this program.

#A few technicalities
I made this with the purpose of solving a variation of a university assignment problem computationally. Since time complexity of this algorithm is big-theta(n), it is very scalable and precise.

In lectures it was proved in the specific equal probability case where there was no upper bound, that the probability of reaching 0 from any 2 consecutive states was equal. This did not apply where there was an upper bound - and I have not yet proved this. The algorithm, however, indicates that it holds regardless - an interesting observation!
