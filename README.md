### Usage

../zig-linux-x86_64-0.13.0/zig build serve

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
