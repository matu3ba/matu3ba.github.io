def signalMainThread(self) -> None:
  pass
  # before Python 3.10: _thread.interrupt_main()
  # since Python 3.10: _thread.interrupt_main(signum=signal.SIGKILL)