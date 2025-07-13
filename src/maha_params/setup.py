from setuptools import find_packages, setup

package_name = 'maha_params'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='shaalekh',
    maintainer_email='shaalekh@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'param_node=maha_params.param_node:main',
            'my_parameter=maha_params.py_parameter:main',
            'param_timer_node=maha_params.param_timer_node:main'
        ],
    },
)
