# docker composeでjdbを使うサンプルコード

起動

```bash
docker compose build
docker compose up -d
```

コンパイルと実行

```bash
docker compose exec myjava javac -g Main.java
docker compose exec myjava java Main
```

jdbでデバッグ

```bash
docker compose exec myjav jdb Main
```

停止

```bash
docker compose stop
docker compose down
```
