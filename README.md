build the project with
```bash
cmake -S . -B build
cmake -DCMAKE_EXPORT_COMPILE_COMMNDS=ON ..
```

you can link your library with the IDE of your choice
ex in  `.vscode`
```json`
{
    "C_Cpp.default.compileCommands": "${workspaceFolder}/build/compile_commands.json"
}
```