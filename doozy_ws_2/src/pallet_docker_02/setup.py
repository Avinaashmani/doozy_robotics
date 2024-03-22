from setuptools import setup

package_name = 'pallet_docker_02'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='avinaash',
    maintainer_email='avinaash@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [

            'pallet_navi_01 = pallet_docker_02.pallet_navi_01:main',
            'pallet_navi_02 = pallet_docker_02.pallet_navi_02:main',
            'pallet_navi_03 = pallet_docker_02.pallet_navi_03:main',
            'pallet_navi_04 = pallet_docker_02.pallet_navi_04:main',
            'tb3_cam_node = pallet_docker_02.pallet_detect_01:main',
            'tf_broadcaster = pallet_docker_02.pallet_navi_dock_01:main',
            'get_pallet_tf = pallet_docker_02.pid_controller_01:main',
        ],
    },
)
