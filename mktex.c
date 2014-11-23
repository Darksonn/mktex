#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned char none_tex[] = {
  0x5c, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x63, 0x6c, 0x61,
  0x73, 0x73, 0x7b, 0x61, 0x72, 0x74, 0x69, 0x63, 0x6c, 0x65, 0x7d, 0x0a,
  0x5c, 0x75, 0x73, 0x65, 0x70, 0x61, 0x63, 0x6b, 0x61, 0x67, 0x65, 0x5b,
  0x75, 0x74, 0x66, 0x38, 0x5d, 0x7b, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x65,
  0x6e, 0x63, 0x7d, 0x0a, 0x5c, 0x75, 0x73, 0x65, 0x70, 0x61, 0x63, 0x6b,
  0x61, 0x67, 0x65, 0x5b, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x3d, 0x32,
  0x63, 0x6d, 0x5d, 0x7b, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79,
  0x7d, 0x0a, 0x5c, 0x75, 0x73, 0x65, 0x70, 0x61, 0x63, 0x6b, 0x61, 0x67,
  0x65, 0x5b, 0x64, 0x61, 0x6e, 0x69, 0x73, 0x68, 0x5d, 0x7b, 0x62, 0x61,
  0x62, 0x65, 0x6c, 0x7d, 0x0a, 0x0a, 0x5c, 0x62, 0x65, 0x67, 0x69, 0x6e,
  0x7b, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x7d, 0x0a, 0x0a,
  0x5c, 0x65, 0x6e, 0x64, 0x7b, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e,
  0x74, 0x7d, 0x0a, 0x0a
};
#define none_tex_len 148

unsigned char ams_tex[] = {
  0x5c, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x63, 0x6c, 0x61,
  0x73, 0x73, 0x7b, 0x61, 0x72, 0x74, 0x69, 0x63, 0x6c, 0x65, 0x7d, 0x0a,
  0x5c, 0x75, 0x73, 0x65, 0x70, 0x61, 0x63, 0x6b, 0x61, 0x67, 0x65, 0x5b,
  0x75, 0x74, 0x66, 0x38, 0x5d, 0x7b, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x65,
  0x6e, 0x63, 0x7d, 0x0a, 0x5c, 0x75, 0x73, 0x65, 0x70, 0x61, 0x63, 0x6b,
  0x61, 0x67, 0x65, 0x7b, 0x61, 0x6d, 0x73, 0x6d, 0x61, 0x74, 0x68, 0x7d,
  0x0a, 0x5c, 0x75, 0x73, 0x65, 0x70, 0x61, 0x63, 0x6b, 0x61, 0x67, 0x65,
  0x7b, 0x61, 0x6d, 0x73, 0x73, 0x79, 0x6d, 0x62, 0x7d, 0x0a, 0x5c, 0x75,
  0x73, 0x65, 0x70, 0x61, 0x63, 0x6b, 0x61, 0x67, 0x65, 0x5b, 0x6d, 0x61,
  0x72, 0x67, 0x69, 0x6e, 0x3d, 0x32, 0x63, 0x6d, 0x5d, 0x7b, 0x67, 0x65,
  0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x7d, 0x0a, 0x5c, 0x75, 0x73, 0x65,
  0x70, 0x61, 0x63, 0x6b, 0x61, 0x67, 0x65, 0x5b, 0x64, 0x61, 0x6e, 0x69,
  0x73, 0x68, 0x5d, 0x7b, 0x62, 0x61, 0x62, 0x65, 0x6c, 0x7d, 0x0a, 0x0a,
  0x5c, 0x62, 0x65, 0x67, 0x69, 0x6e, 0x7b, 0x64, 0x6f, 0x63, 0x75, 0x6d,
  0x65, 0x6e, 0x74, 0x7d, 0x0a, 0x0a, 0x5c, 0x65, 0x6e, 0x64, 0x7b, 0x64,
  0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x7d, 0x0a, 0x0a
};
#define ams_tex_len 190

unsigned char head_tex[] = {
  0x5c, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x63, 0x6c, 0x61,
  0x73, 0x73, 0x7b, 0x61, 0x72, 0x74, 0x69, 0x63, 0x6c, 0x65, 0x7d, 0x0a,
  0x5c, 0x75, 0x73, 0x65, 0x70, 0x61, 0x63, 0x6b, 0x61, 0x67, 0x65, 0x7b,
  0x66, 0x61, 0x6e, 0x63, 0x79, 0x68, 0x64, 0x72, 0x7d, 0x0a, 0x5c, 0x75,
  0x73, 0x65, 0x70, 0x61, 0x63, 0x6b, 0x61, 0x67, 0x65, 0x5b, 0x75, 0x74,
  0x66, 0x38, 0x5d, 0x7b, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x65, 0x6e, 0x63,
  0x7d, 0x0a, 0x5c, 0x75, 0x73, 0x65, 0x70, 0x61, 0x63, 0x6b, 0x61, 0x67,
  0x65, 0x5b, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x3d, 0x32, 0x63, 0x6d,
  0x5d, 0x7b, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x7d, 0x0a,
  0x5c, 0x75, 0x73, 0x65, 0x70, 0x61, 0x63, 0x6b, 0x61, 0x67, 0x65, 0x5b,
  0x64, 0x61, 0x6e, 0x69, 0x73, 0x68, 0x5d, 0x7b, 0x62, 0x61, 0x62, 0x65,
  0x6c, 0x7d, 0x0a, 0x0a, 0x5c, 0x70, 0x61, 0x67, 0x65, 0x73, 0x74, 0x79,
  0x6c, 0x65, 0x7b, 0x66, 0x61, 0x6e, 0x63, 0x79, 0x7d, 0x0a, 0x5c, 0x6c,
  0x68, 0x65, 0x61, 0x64, 0x7b, 0x7d, 0x0a, 0x5c, 0x63, 0x68, 0x65, 0x61,
  0x64, 0x7b, 0x7d, 0x0a, 0x5c, 0x72, 0x68, 0x65, 0x61, 0x64, 0x7b, 0x7d,
  0x0a, 0x5c, 0x72, 0x65, 0x6e, 0x65, 0x77, 0x63, 0x6f, 0x6d, 0x6d, 0x61,
  0x6e, 0x64, 0x7b, 0x5c, 0x68, 0x65, 0x61, 0x64, 0x72, 0x75, 0x6c, 0x65,
  0x77, 0x69, 0x64, 0x74, 0x68, 0x7d, 0x7b, 0x30, 0x2e, 0x34, 0x70, 0x74,
  0x7d, 0x0a, 0x0a, 0x5c, 0x62, 0x65, 0x67, 0x69, 0x6e, 0x7b, 0x64, 0x6f,
  0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x7d, 0x0a, 0x0a, 0x5c, 0x65, 0x6e,
  0x64, 0x7b, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x7d, 0x0a,
  0x0a
};
#define head_tex_len 253

unsigned char headams_tex[] = {
  0x5c, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x63, 0x6c, 0x61,
  0x73, 0x73, 0x7b, 0x61, 0x72, 0x74, 0x69, 0x63, 0x6c, 0x65, 0x7d, 0x0a,
  0x5c, 0x75, 0x73, 0x65, 0x70, 0x61, 0x63, 0x6b, 0x61, 0x67, 0x65, 0x7b,
  0x66, 0x61, 0x6e, 0x63, 0x79, 0x68, 0x64, 0x72, 0x7d, 0x0a, 0x5c, 0x75,
  0x73, 0x65, 0x70, 0x61, 0x63, 0x6b, 0x61, 0x67, 0x65, 0x5b, 0x75, 0x74,
  0x66, 0x38, 0x5d, 0x7b, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x65, 0x6e, 0x63,
  0x7d, 0x0a, 0x5c, 0x75, 0x73, 0x65, 0x70, 0x61, 0x63, 0x6b, 0x61, 0x67,
  0x65, 0x7b, 0x61, 0x6d, 0x73, 0x6d, 0x61, 0x74, 0x68, 0x7d, 0x0a, 0x5c,
  0x75, 0x73, 0x65, 0x70, 0x61, 0x63, 0x6b, 0x61, 0x67, 0x65, 0x7b, 0x61,
  0x6d, 0x73, 0x73, 0x79, 0x6d, 0x62, 0x7d, 0x0a, 0x5c, 0x75, 0x73, 0x65,
  0x70, 0x61, 0x63, 0x6b, 0x61, 0x67, 0x65, 0x5b, 0x6d, 0x61, 0x72, 0x67,
  0x69, 0x6e, 0x3d, 0x32, 0x63, 0x6d, 0x5d, 0x7b, 0x67, 0x65, 0x6f, 0x6d,
  0x65, 0x74, 0x72, 0x79, 0x7d, 0x0a, 0x5c, 0x75, 0x73, 0x65, 0x70, 0x61,
  0x63, 0x6b, 0x61, 0x67, 0x65, 0x5b, 0x64, 0x61, 0x6e, 0x69, 0x73, 0x68,
  0x5d, 0x7b, 0x62, 0x61, 0x62, 0x65, 0x6c, 0x7d, 0x0a, 0x0a, 0x5c, 0x70,
  0x61, 0x67, 0x65, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x7b, 0x66, 0x61, 0x6e,
  0x63, 0x79, 0x7d, 0x0a, 0x5c, 0x6c, 0x68, 0x65, 0x61, 0x64, 0x7b, 0x7d,
  0x0a, 0x5c, 0x63, 0x68, 0x65, 0x61, 0x64, 0x7b, 0x7d, 0x0a, 0x5c, 0x72,
  0x68, 0x65, 0x61, 0x64, 0x7b, 0x7d, 0x0a, 0x5c, 0x72, 0x65, 0x6e, 0x65,
  0x77, 0x63, 0x6f, 0x6d, 0x6d, 0x61, 0x6e, 0x64, 0x7b, 0x5c, 0x68, 0x65,
  0x61, 0x64, 0x72, 0x75, 0x6c, 0x65, 0x77, 0x69, 0x64, 0x74, 0x68, 0x7d,
  0x7b, 0x30, 0x2e, 0x34, 0x70, 0x74, 0x7d, 0x0a, 0x0a, 0x5c, 0x62, 0x65,
  0x67, 0x69, 0x6e, 0x7b, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74,
  0x7d, 0x0a, 0x0a, 0x5c, 0x65, 0x6e, 0x64, 0x7b, 0x64, 0x6f, 0x63, 0x75,
  0x6d, 0x65, 0x6e, 0x74, 0x7d, 0x0a, 0x0a
};
#define headams_tex_len 295

unsigned char *texes[] = {none_tex, ams_tex, head_tex, headams_tex};
unsigned int texes_lens[] = {none_tex_len, ams_tex_len, head_tex_len, headams_tex_len};
#define texes_len = 4;

int main(int argc, char **argv) {
  if (argc == 0) {
    return -1;
  }
  if (argc == 1) {
    printf("useage: %s [flags] outputfile\n"
           "Prefix any flag with no to disable it\n"
           "If an option is changed by several flags, the last flag is in effect\n\n"
           "List of flags:\n"
           "  [no]head     Include code for a header in the tex document   on by default\n"
           "  [no]math     Include mathematical packages                   off by default\n", argv[0]);
    return 0;
  }
  char *out_file = argv[argc - 1];
  size_t i;
  unsigned char head = 1, math = 0;
  for (i = 1; i < argc - 1; i++) {
    char *arg = argv[i];
    size_t arglen = strlen(arg);
    if (arglen == 0) {
      continue;
    }
    if (arglen < 4) {
      printf("%s is not a known flag\n", arg);
      return 1;
    }
    unsigned char negated = arg[0] == 'n' && arg[1] == 'o';
    if (negated) {
      arg += 2;
    }
    if (strcmp(arg, "head") == 0) {
      head = !negated;
    } else if (strcmp(arg, "math") == 0) {
      math = !negated;
    }
  }
  FILE *stream = fopen(out_file, "w");
  unsigned int selected_tex = math + 2 * head;
  fwrite(texes[selected_tex], sizeof(unsigned char), texes_lens[selected_tex], stream);
  fclose(stream);
  return 0;
}

