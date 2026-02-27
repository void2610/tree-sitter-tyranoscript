# tree-sitter-tyranoscript

[TyranoScript](https://tyrano.jp/)（`.ks`ファイル）用の[Tree-sitter](https://tree-sitter.github.io/)文法定義です。

## 対応する構文要素

| 要素 | 例 |
|------|-----|
| タグ | `[bg storage="room.png" time=500]` |
| コメント | `; これはコメント` |
| ラベル | `*scene_start` |
| テキスト行 | `春子「こんにちは」` |
| 属性（クォート有/無） | `storage="room.png"` / `time=500` |
| インラインテキスト | `[l]テキスト` |

## セットアップ

```bash
npm install
npx tree-sitter generate
```

## テスト

```bash
npx tree-sitter test
```

## サンプルファイルのパース

```bash
npx tree-sitter parse sample.ks
```

## 関連リポジトリ

- [tyranoscript-zed](https://github.com/void2610/tyranoscript-zed) — Zedエディタ拡張本体

## ライセンス

[MIT](LICENSE)
