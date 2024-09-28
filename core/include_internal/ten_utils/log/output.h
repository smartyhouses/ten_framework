//
// Copyright © 2024 Agora
// This file is part of TEN Framework, an open source project.
// Licensed under the Apache License, Version 2.0, with certain conditions.
// Refer to the "LICENSE" file in the root directory for more information.
//
#pragma once

#include "ten_utils/ten_config.h"

/**
 * @brief String to put in the end of each log line (can be empty).
 */
#ifndef TEN_LOG_EOL
#define TEN_LOG_EOL "\n"
#endif

typedef struct ten_log_t ten_log_t;
typedef struct ten_string_t ten_string_t;

TEN_UTILS_API void ten_log_set_output_to_stderr(ten_log_t *self);

TEN_UTILS_PRIVATE_API void ten_log_out_stderr_cb(ten_string_t *msg,
                                                 void *user_data);

TEN_UTILS_PRIVATE_API void ten_log_set_output_to_file(ten_log_t *self,
                                                      const char *log_path);