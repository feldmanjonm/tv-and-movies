
void suicide(int N)
{
  suicide(N+1);
}

void main(int argc, char *argv[])
{
  suicide(0);
}
