### Usage

```
../zig-linux-x86_64-0.14.0/zig build serve
zig build serve
zine

zine release
git diff --word-diff=color --no-index zig-out public
```

### Markdown languages

- https://github.com/neurocyte/flow-syntax
- src/file_types.zig

### SHENNANIGANS when working with zine

```
[scripty] sections must be top level elements or be embedded in headings
content/articles/shennanigans_in_c.smd:28:3:
    - []($section.id("pointer_semantics"))
      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
```
So one has to workaround this via
```
<pre>
  <code class="c"
        :html="$page.asset('./articles/shennanigans_in_c/ex1.c').syntaxHighLight('c')"
  ></code>
</pre>
```
or including sections into the item.

Work around unchecked references
```
content/articles/shennanigans_in_c.smd:16:5: error: unknown ref
|    - 1.[Pointer semantics](#pointer_semantics)
|        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
```
via
```
- 1.[Pointer semantics]($link.unsafeRef('pointer_semantics'))
```

### Comments

- shtml
```
<!--<div :html="$page.content()"></div>-->
```
- smd
```
(empty line)
[This is a comment]::
```
