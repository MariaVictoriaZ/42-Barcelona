#!/bin/bash
git log -n 5 | grep commit | awk '{print $2}'
