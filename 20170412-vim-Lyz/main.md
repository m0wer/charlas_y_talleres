---

Title: Vim
Author: Lyz
Date: 20170411
Keywords: Vim
          editor
---

# What is this talk about

---
* What is Vim and what is it's status
* From basic to advanced use of Vim
* Vim best practices review
* Presentation of interesting plugins
* My current workflow
* Tweak & plugin sharing between the assistants

# What is this talk **not** about

---
* Full Vim configuration tutorial aka vimrc tweaking
* Comparison with other editors (please no flamewar trolling)
* I'm not going to show you all the power of Vim

# What is Vim?

---
* Lightweight text editor
* Keyboard driven

# Why should you care?

---
* Don't ever use the mouse again :)
* Increase productivity x9999
* Increase usability x99999
* Hiper fast, hiper light
* Very easy to fully customize

# Small history of Vim

---
* Vi
  * Follows the Single Unix Specification and POSIX
  * Original code written by Bill Joy in 1976
  * BSD license
  * Doesn't even have a git repository -.-

* Vim
  * Written by Bram Moolenaar in 1991.
  * Vim is free and open source software, license is compatible with the GNU General Public License.
  * C: 47.6 %, Vim Script: 44.8%, Roff 1.9%, Makefile 1.7%, C++ 1.2%
  * Commits: 7120, Branch: **1**, Releases: 5639, Contributor: **1**
  * Lines: 1.295.837
  * Commit graph: (view 01 image)

* Neovim
  * Written by the community from 2014
  * Published under the Apache 2.0 license
  * Commits: 7994, Branch **1**, Releases: 9, Contributors: 303
  * Vim script: 46.9%, C:38.9%, Lua 11.3%, Python 0.9%, C++ 0.6%
  * Lines: 937.508 (27.65% less code than Vim)
  * Refactor: Simplify maintenance and encourage contributions
  * CI: (view 02 image)
  * Commit graph: (view 03 image)
  * Easy update, just symlinks
  * Ahead of Vim, new features inserted in Vim 8.0 (async)

# Learning strategy

---
* It's a marathon not a sprint
* Do not blow it with plugins
* Read Vi Improved _-_ Steve Oualine
* https://vim-adventures.com/ (very funny and challenging, buuuuut at lvl 3 you have to pay :( )

# Modes

---
* Command : `<esc>`
* Insert  : `i`
* Visual  : `v`, `V`

# Basic movement

---
* One at a time      : `h`, `j`, `k`, `l`
* Word movements     : `w`, `e`, `b`, `W`, `E`, `B`
* Line movements     : `$`, `0`
* Document movements : `gg`, `G`, `C-d`, `C-u`

# Basic editing

---
* Delete    : `dd`, `D`, `dw`
* Change    : `c`, `C`
* Overwrite : `r`, `R`
* Copy      : `y`
* Paste     : `p`
* Append    : `a`, `A`
* Undo      : `u`
* Redo      : `<C-r>`
* Save      : `:w`, `:w!`
* Quit      : `:q`, `:q!`, `ZZ`

# Tabs vs buffers

---
* Buffer
* Window
* Tab

# Buffer management

---
* Ctrlp         : `;v`, `;b`,
* bufferline
* Buffer switch : `gb`, `gB`, `gp`
* Next window   : `gn`
* `set hidden`
* Sayonara      : `;q`
* i3 approach

# Advanced movement

---
* Search            : `/`, `n`, `N`
* Marks             : `mm`, `\`m`, `\`\``
* Quick find        : `f`, `F`
* Composed movement : `10k`, `d2w`
* Go to file        : `gf`
  [interesting file](demo/macro.md)

# Advanced editing

---
* The marvelous dot       : `.`
* Macro                   : `qq`, `@q`
* Clipboard copy          :
    * Primary selection   : `"+y`
    * Clipboard selection : `"*y`
* Clipboard paste         :
    * Primary selection   : `"+p`
    * Clipboard selection : `"*p`
* Multiple cursors        : Visual and `<c-n>`
* Running sed             : `: %s/nano/vim/g`

# My cool bindings

---
* Small hands :)         : `jk`
* Auto completion        : `df`, `fd`
* Search selected word   : `//`
* Execute macro          : `qq`, `<Space>`
* Paste                  : `<c-j>`
* Copy                   : `<c-c>`
* Delete trailing spaces : `autocmd BufWritePre * %s/\s\+$//e`
* Presentation           : `\\`

# Spell

---
* Multiple dictionaries
* Show suggestions                : `z=`
* Add word to personal dictionary : `zg`
* Next, previous error            : `[s`, `]s`
  relog vrecha fuk

# Vimdiff

---
* Obtain : `do`
* Put    : `dp`

# Plugin manager

---
* Awesome Vundle
* Install : `:PluginInstall`
* Clean   : `:PluginClean`

# Integration with git

---
* gitgutter: `;gg`
* fugitive
  * Status: `<leader>gs`
  * Commit: `<leader>gc`
  * Diff: `<leader>gd`
  * Write: `<leader>gw`
  * Push: `<leader>gp`
  * Pull: `<leader>gP`
  * Change branch: `<leader>go`
  * resolve conflicts

# Programming tips

---
* Parenthesis movement : `%`
* Folding : `zc`, `zC`, `zo`, `zO`, `zf`, `zM`
* Personal folding : `fc`, `fo`
* Go definition : `gd`
* Indent code blocks : `<`, `>`
* Select text between brackets : `i}`, `i)`
* tabularize : `;t;`
* delimitMate : `;;`
* python-mode : `K`, pep8, line-wrapping

# Customization

---
* Syntax highlight (default + plugins)
* Solarized colors
* Vim airline (View image 04)

# Miscelaneous

---
* Templates
* Launch browser: `gx`
  [my blog](fok.systems)
* Collaborative vim: Covim and Floobits

# Vimize everything

---
* `set -o vi`
* i3
* uzbl
* vimfx
* mutt

# Public contribution

---
* Show the world your vim tricks!

# Questions?

---
* mail: lyz@riseup.net
* xmpp: lyz@fok.systems
* blog: fok.systems
