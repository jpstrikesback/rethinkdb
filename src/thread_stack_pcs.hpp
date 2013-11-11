#ifndef THREAD_STACK_PCS_HPP_
#define THREAD_STACK_PCS_HPP_

// `NUM_FRAMES_INSIDE_RETHINKDB_BACKTRACE` is the number of frames that must be removed
// to hide the call to `rethinkdb_backtrace()` itself from the resulting backtrace.
// If you change the implementation of `rethinkdb_backtrace()`, please verify
// that this value is up to date.
#define NUM_FRAMES_INSIDE_RETHINKDB_BACKTRACE   1

int rethinkdb_backtrace(void **buffer, int size);

#endif  // THREAD_STACK_PCS_HPP_
