### Ideas towards standardization and speed up of shell completion

#### Prior assumptions
1. Shells are overly complex and should be bypassed by specialized programs, if possible.
 * Shell keep track of a huge chunk of state in a hacky manner
   + TODO explanation
   + TODO link1
   + TODO link2
 * Less state means less memory and less complexity
2. Shells are just repls, but hyper flexible tailored to state manipulation
   for process+job control and manipulating output (piping)

So completion should be just another extension for the shell to use.

#### Command line interfaces (CLI)

Shell completion can have many use cases, which can be abbreviated into the
following cases:
1. Completion (+validation) of arguments
2. Completion (+validation) of attached input (files/configurations etc)
3. Providing an output of how the internal state would change (a `--dry` run)

TODO: improve this
An encoding of all potential CLI configuration options would be an arbitrary,
potentially cyclic directed graph.
Often, programs may overwrite the existence of a certain flag, which leads to
a graph, where each command line option can follow each other.

Validating arguments as ensuring absence of flag incompatibilities can
therefore only be done via logic checks, which means to replicate the internal
program logic.
Therefore, in general, validation is only feasible by running a program that
provides a "validate arguments"  or "validate inputs" mode.

With the same argument, a `--dry` option must be provided by a program for the
completion to use.

#### Where should the completion be?

As of now, all logic is written as external (and slower) shell scripts,
since there is no standard for shell agnostic completion justifying the
complexity of an optimized solution.

The most user-efficient solution is to move the completion and validation
logic into the shell as native (dynamically on-demand loaded) libraries/binaries,
which means to duplicate the validation logic of the program.

On the other hand, making the case for only the completion sounds very limiting.

Therefore, at least from the authors' point of view, CLI applications should
provide completion functions, either behind a CLI flag or with help of bundled
completion binaries or libraries.
This way, the application can do its own trade-off, like doing the validation
during completion or as separate step.
The trade-off between performance optimized completion or keeping the code
simpler sounds like it belongs into the hands of the user interface designer.

#### How does the user control what is allowed to take some time and what not?

Analyzing complex or big data will take longer. For example, `git status` on huge
git repos takes a while.
The user should be always able to know visually on the command prompt:

1. completed argument,  
2. validated argument,  
3. completed input,  
4. validated input,  
5. how long the last completion/validation action took  

User-specified Keybindings to restrict a completion/validation to the 
user-specified amount of time sounds like the most feasible option.
Further, there should be a keybindings to quit any currently running completion
spawned by the shell instance.
Obviously, there should be only 1 completion instance per shell instance.

#### Show me, that it works!

TODO
