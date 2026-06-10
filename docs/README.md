![[architecture.excalidraw]]
# Goals of project
1) make a complete compiler from scratch, covering lexing to assembly generation, making sure I have a deep understanding of every part of the system
2) become more familiar with assembly and system's programming language for game hacking
# Choices
## using cpp
I was always decided on using a system's language for this project despite being the most familiar with python. However it was a question of which one. I thought to use C as I like the simplicity and would help me have a deep understanding but on the other hand it was awkward giving up the shorthand niceties of modern languages like cpp. I like having a clean api for my components for readability and I don't mind trading that for eye-burning errors of cpp or the relative drop in understanding due to the complexity of cpp language spec. You'll notice I didn't consider rust because I think it would jeopardise goal number one, I don't want to make this a rust-learning project
# compiling c
I chose to do C because it's a simple language as stated above but also non-trivial to ensure I cover all concepts. I don't want to design my own language as it's out of scope tbh, unless where it will help me understand compilers better. Perhaps I'll alter parts of the language spec to help me remember concepts
# api
components of compiler take objects from main when initialising to initialise them if need be or to hold references to input data. output is given to objects passed in function parameters,  function parameters can still be used for input though.
# no ai!
i generated a bunch of template code and shit just killed me inside. it reduces my understanding of the system tenfold and on top of that it robs me of the opportunity to experience finishing that myself