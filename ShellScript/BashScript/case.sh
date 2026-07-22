#!/bin/bash

case ${1,,} in
    balaji | admin)
        echo "Hello, BOSS!"
        ;;
    help)
        echo "Enter your username"
        ;;
    *)
        echo "I don't know who you are"
        ;;
esac


# The | operator (separator here (not piping)) allows for multiple patterns, meaning either "balaji" or "admin" will match this case.
# The double semicolon (;;) marks the end of this pattern block.
# * (Wildcard): Similar to default. The * is a wildcard pattern that matches anything that hasn’t already been matched by the earlier patterns.