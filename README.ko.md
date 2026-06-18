# MF40 PCB Project

[English README](README.md)

MF40은 my-fi의 미니 40% 커스텀 키보드 PCB 패밀리입니다. 기본 설계 방향은 공유하되, 가로 폭, 컬럼 구성, 하단열 스타일에 따라 여러 PCB 변형으로 나누어집니다.

이 저장소에는 MF40 PCB의 하드웨어 설계 파일, QMK/VIA 펌웨어 소스, 보강판 샘플 도면 파일이 포함되어 있습니다.

## 타입

타입은 PCB의 폭과 배열 구성을 나타냅니다.

* `12` / `13`: PCB의 가로 길이를 Cherry MX 기준 유닛 단위로 나타냅니다.
* `A`: 가로 폭을 1u 컬럼으로 모두 채운 구성을 의미합니다.
* `B`: 같은 가로 폭에서 `A` 구성보다 컬럼을 하나 줄인 구성을 의미합니다.
* `W`: 풀 WK 스타일 하단열을 지원하는 구성을 의미합니다.
* `H`: 1.125u HHKB 스타일 하단열을 지원하는 구성을 의미합니다.

## 변형

| 변형           | 배열 구성                  | 주요 배열 옵션                                                            |
| ------------ | ---------------------- | ------------------------------------------------------------------- |
| `MF40-R12AW` | 12u, 12컬럼, WK 스타일 구성   | 3 split spacebar, 4.5u, 5u, 7u spacebar                             |
| `MF40-R13AH` | 13u, 13컬럼, HHKB 스타일 구성 | split/2u backspace, 6.25u 또는 split spacebar                         |
| `MF40-R13AW` | 13u, 13컬럼, WK 스타일 구성   | split/2u backspace, 6u 또는 split spacebar                            |
| `MF40-R13BW` | 13u, 12컬럼, WK 스타일 구성   | ANSI/ISO/split/BAE enter, left/right Shift 옵션, 6u 또는 split spacebar |

## 저장소 구조

```text
KicadFiles/       KiCad 회로도와 PCB 파일
FirmwareFiles/    QMK/VIA 펌웨어 소스 폴더
PlateFiles/       DXF 보강판 도면 파일
OtherFiles/       기타 프로젝트 파일
```

## 펌웨어

`FirmwareFiles/` 아래의 각 펌웨어 폴더는 하나의 PCB 변형에 대응합니다. 컴파일할 때는 해당 폴더를 QMK의 `keyboards/` 아래로 복사해서 사용합니다.

펌웨어는 VIA와 커스텀 LED 제어를 지원합니다.

## 하드웨어

각 PCB 변형은 `KicadFiles/` 아래에서 독립된 KiCad 프로젝트로 관리됩니다. 생산용 출력물이 있는 경우 각 변형의 `production/` 디렉터리에 배치합니다.

## 라이선스

[LICENSE](LICENSE)를 참고하세요.
