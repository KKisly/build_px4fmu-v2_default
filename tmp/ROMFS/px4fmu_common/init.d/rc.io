px4io recovery
set PX4IO_LIMIT 400
if ver hwcmp PX4FMU_V1
then
set PX4IO_LIMIT 200
fi
if px4io limit ${PX4IO_LIMIT}
then
fi
