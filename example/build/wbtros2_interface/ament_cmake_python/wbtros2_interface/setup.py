from setuptools import find_packages
from setuptools import setup

setup(
    name='wbtros2_interface',
    version='0.0.0',
    packages=find_packages(
        include=('wbtros2_interface', 'wbtros2_interface.*')),
)
