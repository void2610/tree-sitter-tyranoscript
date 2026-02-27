; ティラノスクリプト サンプルファイル
; シンタックスハイライトの確認用

*start

[title name="サンプルゲーム"]
[bg storage="bg_room.png" time=1000]

[chara_show name="hero" pos=center]

春子「こんにちは、ようこそ！」[l]

これはテストのテキストです。[p]

[if exp="f.flag == 1"]
フラグが立っています。
[else]
フラグは立っていません。
[endif]

[jump storage="next.ks" target="*scene2"]

[iscript]
f.counter = f.counter + 1;
[endscript]

[s]
