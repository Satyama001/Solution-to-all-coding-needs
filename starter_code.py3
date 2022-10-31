def number_of_record_breaking_days(number_of_days, vistors):
  record_breaking_days = 0
  # TODO: implement this method to return the number of record breaking days
  return record_breaking_days

def main():
  test_cases = int(input())
  for test_case in range(1, test_cases + 1, 1):
    number_of_days = int(input())
    vistors = list(map(int, input().split()))

    ans = number_of_record_breaking_days(number_of_days, vistors)

    print("Case #{}: {}".format(test_case, ans))

if __name__ == "__main__":
  main()
