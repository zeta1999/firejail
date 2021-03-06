# This file is overwritten during software install.
# Persistent customizations should go in a .local file.
include allow-common-devel.local

# Git
noblacklist ${HOME}/.config/git
noblacklist ${HOME}/.gitconfig
noblacklist ${HOME}/.git-credentials

# Java
noblacklist ${HOME}/.gradle
noblacklist ${HOME}/.java

# Python
noblacklist ${HOME}/.pylint.d
noblacklist ${HOME}/.python-history
noblacklist ${HOME}/.python_history
noblacklist ${HOME}/.pythonhist

# Rust
noblacklist ${HOME}/.cargo/advisory-db
noblacklist ${HOME}/.cargo/config
noblacklist ${HOME}/.cargo/git
noblacklist ${HOME}/.cargo/registry
noblacklist ${HOME}/.cargo/.crates.toml
noblacklist ${HOME}/.cargo/.crates2.json
noblacklist ${HOME}/.cargo/.package-cache
