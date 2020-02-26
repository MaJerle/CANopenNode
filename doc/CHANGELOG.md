Change Log
==========

[Unreleased split-driver]
-------------------------
- [Full ChangeLog](https://github.com/CANopenNode/CANopenNode/compare/master...split-driver)
- See {TODO diff} for example of change in user application interface.
### Removed
- All drivers removed from this project, except Neuberger-socketCAN for Linux.
### Changed
- Directory structure rearranged. Before was all CANopen object files in `stack` directory, now they are in separate directories according to standard (`301`, `305`, `extra`, `socketCAN` for Linux driver). Include directives for that files now contain directory path. `CO_SDO` renamed to `CO_SDOserver` and `CO_SDOmaster` renamed to `CO_SDOclient`. Change of the project files will be necessary.
- Driver interface clarified. Before was pair of CO_driver.h/.c files for each microcontroller, now there is common CO_driver.h file. Drivers for other microcontrollers will be separate projects. Each driver must have own CO_driver_target.h file and function definitions from C_driver.h file. See documentation in CO_driver.h, example/CO_driver_target.h and example/CO_driver.c. There was no other mayor changes in driver interface.
- Time base is now microsecond in all functions.
- CANopen.h/.c files simplified and changed. `CO_USE_GLOBALS` and `CO_init()` removed. Interface to those functions changed.
- `CO_NMT_sendCommand()` master function renamed and moved from CANopen.c into CO_NMT_Heartbeat.c.
- Heartbeat consumer `CO_HBconsumer_process()` optimized.
- Rename in CO_driver_target.h: `IS_CANrxNew` -> `CO_FLAG_READ`, `SET_CANrxNew` -> `CO_FLAG_SET`, `CLEAR_CANrxNew` -> `CO_FLAG_CLEAR`
- CO_driver.h file, function `CO_CANrxBufferInit()`, last argument (callback) changed from `(*pFunct)(void *object, const CO_CANrxMsg_t *message)` to `void (*CANrx_callback)(void *object, void *message)`. New functions are defined in `CO_driver_target.h` file: `CO_CANrxMsg_readIdent()`, `CO_CANrxMsg_readDLC()` and `CO_CANrxMsg_readData()`.
- It is necessary to manually update CO_OD.c file - it must include: `301/CO_driver.h`, `CO_OD.h` and `301/CO_SDOserver.h`.
- Added `void *object` argument CO_*_initCallback() functions. Added CO_CANopenInitCallback() into CANopen.h/.c.
### Fixed
- Bugfix in `CO_HBconsumer_process()`: argument `timeDifference_us` was set to 0 inside for loop, fixed now.
- BUG in CO_HBconsumer.c #168
### Added
- Documentation added to `doc` directory: CHANGELOG.md, deviceSupport.md, gettingStarted.md, LSSusage.md and traceUsage.md.
- All CANopen objects calculates next timer info for OS.
- Basic Linux socketCAN example.

[Unreleased master]
-------------------
- [Full ChangeLog](https://github.com/CANopenNode/CANopenNode/compare/v1.2...master)
### Changed
- License changed to Apache 2.0.
- NMT self start functionality (OD object 1F80) implemented to strictly folow standard. Default value for object 1F80 have to be updated in OD editor. See README.md.
### Fixed
- Various fixes.
### Added
- CANopen TIME protocol added.

[v1.2] - 2019-10-08
-------------------
- [Full ChangeLog](https://github.com/CANopenNode/CANopenNode/compare/v1.1...v1.2)
### Fixed
- Memory barrier implemented for setting/clearing flags for CAN received message.
- CO_Emergency and CO_HBconsumer files revised.
### Added
- CANopen LSS master/slave protocol added for configuration of bitrate and node ID.
- Neuberger-socketCAN driver added.
- Emergency consumer added.
- Callbacks added to Emergency and Heartbeat consumer.

[v1.1] - 2019-10-08
-------------------
- [Full ChangeLog](https://github.com/CANopenNode/CANopenNode/compare/v1.0...v1.1)
- Bugfixes. Some non-critical warnings in stack, some formatting warnings in tracing stuff.

[v1.0] - 2017-08-01
-------------------
- [Full ChangeLog](https://github.com/CANopenNode/CANopenNode/compare/v0.5...v1.0)
- Stable.

[v0.5] - 2015-10-20
-------------------
- Git repository started on GitHub.

[v0.4] - 2012-02-26
-------------------
- Git repository started on Sourceforge git.

[v0.1] - 2004-06-29
-------------------
- First edition of CANopenNode on SourceForge, files section. (V0.80 on SourceForge).

------

Changelog written according to recomendations from https://keepachangelog.com/

[Unreleased split-driver]: https://github.com/CANopenNode/CANopenNode/tree/split-driver
[Unreleased master]: https://github.com/CANopenNode/CANopenNode
[v1.2]: https://github.com/CANopenNode/CANopenNode/tree/v1.2
[v1.1]: https://github.com/CANopenNode/CANopenNode/tree/v1.1
[v1.0]: https://github.com/CANopenNode/CANopenNode/tree/v1.0
[v0.5]: https://github.com/CANopenNode/CANopenNode/tree/v0.5
[v0.4]: https://sourceforge.net/p/canopennode/code_complete/ci/master/tree/
[v0.1]: https://sourceforge.net/projects/canopennode/files/canopennode/CANopenNode-0.80/