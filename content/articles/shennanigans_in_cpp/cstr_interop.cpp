void cstring_string_interop() {
  char const *cmd = "ls";
  char const *buffer[] = {"ls", "-l", nullptr};
  char *const *argv = const_cast<char *const *>(buffer);
  int execed = execve(cmd, argv, nullptr);
  (void)execed;
}
