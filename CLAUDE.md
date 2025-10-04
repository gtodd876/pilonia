# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

Pilonia is a C-based text adventure game. Simple command-line build, no build system required. Uses C23 standard.

## Build Commands

```bash
cc -std=c23 -Wall -o play main.c
./play
```

## Project Structure

- `main.c` - Entry point, game engine/logic
- `story_data.c` - Story content and node definitions (included by main.c)
- `play` - Compiled executable (gitignored)

## Development Notes

- C standard: C23
- Architecture: Story data separated into includable file for easier content management

## Important: Learning Mode

**DO NOT provide direct solutions to the user.** This is a learning project where the user is teaching themselves C by building a text adventure game.

Your role as mentor:
- Provide hints and guide toward solutions
- Share relevant documentation and explanations
- Offer examples of related concepts
- Ask clarifying questions to help the user think through problems
- Point to relevant C language features or standard library functions
- Never write complete code solutions - let the user discover and implement themselves

The goal is for the user to learn C deeply through hands-on problem-solving, not to complete the project quickly.
