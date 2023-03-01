project (client)

# Tools for using NK parser.
include (platform/nk)

# Set compile flags.
project_header_default ("STANDARD_GNU_11:YES" "STRICT_WARNINGS:NO")

# Here we define executable file name and link it to source and libs
add_executable (ClientExec "src/client.c")
add_dependencies (ClientExec echo_idl_files echo_client_edl_files)

#set_target_properties (Client PROPERTIES LINK_FLAGS "-Ttext 0x00800000")
