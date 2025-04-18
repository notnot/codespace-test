# jax-test.py, jpad 2025

import jax

print("JAX version:", jax.__version__)
print("JAX devices:", jax.devices())
print("JAX default device:", jax.default_backend())

