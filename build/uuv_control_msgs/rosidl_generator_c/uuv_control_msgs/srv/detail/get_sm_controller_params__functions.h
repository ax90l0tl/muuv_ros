// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from uuv_control_msgs:srv/GetSMControllerParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GET_SM_CONTROLLER_PARAMS__FUNCTIONS_H_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GET_SM_CONTROLLER_PARAMS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "uuv_control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "uuv_control_msgs/srv/detail/get_sm_controller_params__struct.h"

/// Initialize srv/GetSMControllerParams message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uuv_control_msgs__srv__GetSMControllerParams_Request
 * )) before or use
 * uuv_control_msgs__srv__GetSMControllerParams_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__srv__GetSMControllerParams_Request__init(uuv_control_msgs__srv__GetSMControllerParams_Request * msg);

/// Finalize srv/GetSMControllerParams message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
void
uuv_control_msgs__srv__GetSMControllerParams_Request__fini(uuv_control_msgs__srv__GetSMControllerParams_Request * msg);

/// Create srv/GetSMControllerParams message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uuv_control_msgs__srv__GetSMControllerParams_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
uuv_control_msgs__srv__GetSMControllerParams_Request *
uuv_control_msgs__srv__GetSMControllerParams_Request__create();

/// Destroy srv/GetSMControllerParams message.
/**
 * It calls
 * uuv_control_msgs__srv__GetSMControllerParams_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
void
uuv_control_msgs__srv__GetSMControllerParams_Request__destroy(uuv_control_msgs__srv__GetSMControllerParams_Request * msg);

/// Check for srv/GetSMControllerParams message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__srv__GetSMControllerParams_Request__are_equal(const uuv_control_msgs__srv__GetSMControllerParams_Request * lhs, const uuv_control_msgs__srv__GetSMControllerParams_Request * rhs);

/// Copy a srv/GetSMControllerParams message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__srv__GetSMControllerParams_Request__copy(
  const uuv_control_msgs__srv__GetSMControllerParams_Request * input,
  uuv_control_msgs__srv__GetSMControllerParams_Request * output);

/// Initialize array of srv/GetSMControllerParams messages.
/**
 * It allocates the memory for the number of elements and calls
 * uuv_control_msgs__srv__GetSMControllerParams_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence__init(uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetSMControllerParams messages.
/**
 * It calls
 * uuv_control_msgs__srv__GetSMControllerParams_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
void
uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence__fini(uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence * array);

/// Create array of srv/GetSMControllerParams messages.
/**
 * It allocates the memory for the array and calls
 * uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence *
uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetSMControllerParams messages.
/**
 * It calls
 * uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
void
uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence__destroy(uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence * array);

/// Check for srv/GetSMControllerParams message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence__are_equal(const uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence * lhs, const uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence * rhs);

/// Copy an array of srv/GetSMControllerParams messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence__copy(
  const uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence * input,
  uuv_control_msgs__srv__GetSMControllerParams_Request__Sequence * output);

/// Initialize srv/GetSMControllerParams message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uuv_control_msgs__srv__GetSMControllerParams_Response
 * )) before or use
 * uuv_control_msgs__srv__GetSMControllerParams_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__srv__GetSMControllerParams_Response__init(uuv_control_msgs__srv__GetSMControllerParams_Response * msg);

/// Finalize srv/GetSMControllerParams message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
void
uuv_control_msgs__srv__GetSMControllerParams_Response__fini(uuv_control_msgs__srv__GetSMControllerParams_Response * msg);

/// Create srv/GetSMControllerParams message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uuv_control_msgs__srv__GetSMControllerParams_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
uuv_control_msgs__srv__GetSMControllerParams_Response *
uuv_control_msgs__srv__GetSMControllerParams_Response__create();

/// Destroy srv/GetSMControllerParams message.
/**
 * It calls
 * uuv_control_msgs__srv__GetSMControllerParams_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
void
uuv_control_msgs__srv__GetSMControllerParams_Response__destroy(uuv_control_msgs__srv__GetSMControllerParams_Response * msg);

/// Check for srv/GetSMControllerParams message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__srv__GetSMControllerParams_Response__are_equal(const uuv_control_msgs__srv__GetSMControllerParams_Response * lhs, const uuv_control_msgs__srv__GetSMControllerParams_Response * rhs);

/// Copy a srv/GetSMControllerParams message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__srv__GetSMControllerParams_Response__copy(
  const uuv_control_msgs__srv__GetSMControllerParams_Response * input,
  uuv_control_msgs__srv__GetSMControllerParams_Response * output);

/// Initialize array of srv/GetSMControllerParams messages.
/**
 * It allocates the memory for the number of elements and calls
 * uuv_control_msgs__srv__GetSMControllerParams_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence__init(uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetSMControllerParams messages.
/**
 * It calls
 * uuv_control_msgs__srv__GetSMControllerParams_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
void
uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence__fini(uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence * array);

/// Create array of srv/GetSMControllerParams messages.
/**
 * It allocates the memory for the array and calls
 * uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence *
uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetSMControllerParams messages.
/**
 * It calls
 * uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
void
uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence__destroy(uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence * array);

/// Check for srv/GetSMControllerParams message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence__are_equal(const uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence * lhs, const uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence * rhs);

/// Copy an array of srv/GetSMControllerParams messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence__copy(
  const uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence * input,
  uuv_control_msgs__srv__GetSMControllerParams_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GET_SM_CONTROLLER_PARAMS__FUNCTIONS_H_
