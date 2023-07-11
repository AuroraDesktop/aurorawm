#!/usr/bin/env bash

cd $(dirname $0)

feh --bg-scale ./wallpapers/watery.jpg
pgrep -x dunst || dunst &
pgrep -x picom || picom &
