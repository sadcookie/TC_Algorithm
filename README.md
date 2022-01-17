# TC_Algorithm

## **폴더 구조**

- 폴더 구조는 다음과 같다.
    - 사이트 폴더 - 문제 폴더 - 소스코드 및 풀이방법 파일
        - 예) `baekjoon` 폴더 -> `1000` 폴더 -> `epicarts.py` , `epicarts_풀이방법.md`
    - 사이트 폴더: 누구나 사이트를 알아볼 수 있게 영어로 작성한다.
        - 예) `baekjoon`, `programmers`, `codeground`
    - 문제 폴더: 숫자를 우선적으로 작성, 숫자가 없다면 영어로 작성한다.
        - `1000`, `1234`
    - 소스코드: 자신의 `이름` 혹은 `아이디` 뒤에 `.확장자명`으로 작성한다.
        - `epicarts.py`, `epicarts.java`, `epicarts.cpp`
    - 풀이방법: 자신의 `이름` 혹은 `아이디` 뒤에 `.풀이방법.md` 로 작성한다.
        - `epicarts_풀이방법.md`

## **Commit Rule**

- Commit Rule은 다음을 참고한다
    - 브런치 생성: `자기이름(혹은 아이디)_사이트_문제번호`
        - 예) `epicarts_baekjoon_1000`를 브런치 이름으로 한다.
    - `commit message`는 자유롭게 한다.

## **`파일이름.md` Rule**

- 각 문제별 `파일이름.md` Rule은 다음을 참고한다
    - **문제 주소**, **문제 접근 방법** 를 작성한다.
    - **문제 접근 방법** 은 되도록이면 구체적으로 작성한다.

## **PullRequest(PR) Rule**

- PR rule은 다음을 참고한다
    - 최소 2명이상 리뷰가 달릴 경우에 `PR Merge`가 가능하다.
    - `Pull request` 제목 및 내용은 자유롭게 한다.
    - `Merge` 버튼은 2명이상이 리뷰 comment를 남겼을 때, 마지막 리뷰어가 누르는 것으로 한다. 단, 질문을 남겼을 경우 질문에 대한 답을 받고 `Merge` 해야한다.
