
#!/bin/sh
git remote remove origin
git reset "$(git rev-list --max-parents=0 --abbrev-commit HEAD)"
git add --all
git reset setup.sh
git commit --amend  # Will prompt for message.