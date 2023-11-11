printf("%d%s", (str = va_arg(args, char *)) ? str : "(nil)", i < (n - 1) ? separator : "\n");
