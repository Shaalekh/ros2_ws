from setuptools import find_packages
from setuptools import setup

setup(
    name='customs',
    version='0.0.0',
    packages=find_packages(
        include=('customs', 'customs.*')),
)
