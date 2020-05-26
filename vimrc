set tabstop=4
syntax on

set nocompatible
set nobackup
set nowritebackup
set noswapfile
set hlsearch
set incsearch
set backspace=2

set mouse=a
set ttymouse=sgr
set updatetime=500
set balloondelay=250
set signcolumn=yes

set autoindent
set smartindent

"""""""""""""""""""""""Plugins"""""""""""""""""""""""""

call plug#begin('~/.vim/plugged')

"common
Plug 'scrooloose/nerdtree', { 'on':  'NERDTreeToggle' }
Plug 'jiangmiao/auto-pairs'

"git
Plug 'airblade/vim-gitgutter'

call plug#end()

"""""""""""""""""""""""""""""""""""""""""""""""""""""""

" mappings
map <C-n> :NERDTreeToggle<CR>

" NerdTreeComands
au VimEnter *  NERDTree
