# tree-sitter-tyranoscript

[日本語](README.ja.md)

[Tree-sitter](https://tree-sitter.github.io/) grammar for [TyranoScript](https://tyrano.jp/) (`.ks` files).

## Supported Syntax

| Element | Example |
|---------|---------|
| Tag | `[bg storage="room.png" time=500]` |
| Comment | `; this is a comment` |
| Label | `*scene_start` |
| Text line | `春子「こんにちは」` |
| Attribute (quoted/unquoted) | `storage="room.png"` / `time=500` |
| Inline text | `[l]text` |

## Setup

```bash
npm install
npx tree-sitter generate
```

## Testing

```bash
npx tree-sitter test
```

## Parse a Sample File

```bash
npx tree-sitter parse sample.ks
```

## Related Repositories

- [tyranoscript-zed](https://github.com/void2610/tyranoscript-zed) — Zed editor extension

## License

[MIT](LICENSE)
