#!/bin/bash

# Check if at least one submodule name is provided
if [ $# -eq 0 ]; then
    echo "Usage: $0 <submodule-path> [submodule-path ...]"
    exit 1
fi

for SUBMODULE_PATH in "$@"; do
    # Check if the submodule exists
    if [ ! -d "$SUBMODULE_PATH/.git" ] && [ ! -d ".git/modules/$SUBMODULE_PATH" ]; then
        echo "Error: '$SUBMODULE_PATH' is not a recognized submodule. Skipping."
        continue
    fi

    echo "Processing submodule: $SUBMODULE_PATH"

    # Deinitialize the submodule
    echo "Deinitializing submodule: $SUBMODULE_PATH"
    git submodule deinit -f -- "$SUBMODULE_PATH"

    # Remove the submodule from git
    echo "Removing submodule from Git tracking"
    git rm -f "$SUBMODULE_PATH"

    # Delete the submodule directory
    echo "Deleting submodule directory: $SUBMODULE_PATH"
    rm -rf "$SUBMODULE_PATH"

done

# If .gitmodules exists, update it
if [ -f .gitmodules ]; then
    echo "Cleaning up .gitmodules"
    git add .gitmodules
fi

echo "Committing the changes"
git commit -m "Removed submodules and converted them into regular folders" || echo "No changes to commit."

echo "Re-adding directories as regular folders"
git add "$@"
git commit -m "Converted submodules to regular folders" || echo "No changes to commit."

echo "Submodules have been successfully converted to regular directories."

