import sys

def main() -> None:
    user_input: list[str] = sys.stdin.read().splitlines()
    competiton_information: str = user_input[0]
    total_students: int = int(competiton_information.split()[0])
    total_judges: int = int(competiton_information.split()[1])
    judgements: list[str] = user_input[1:]
    score: list[float] = []

    for i in judgements:
        scores: list[int] = []
        for j in i.split():
            scores.append(int(j))
        scores.remove(max(scores))
        scores.remove(min(scores))
        averange: float = sum(scores) / len(scores)
        score.append(averange)

    print("{:.2f}".format(max(score)))

main()