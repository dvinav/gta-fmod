# GTA FMOD

![](https://repository-images.githubusercontent.com/447752242/f4a2f645-a03b-4892-92cc-bfab1d7c334a)

## Information

FMOD is a proprietary sound effects engine and authoring tool for video games and applications developed by Firelight Technologies. It plays and mixes sounds of diverse formats on many operating systems and is used in big AAA games like Assetto Corsa.

This project uses [plugin-sdk](https://github.com/DK22Pac/plugin-sdk).

## Download

See the [releases page](https://github.com/chrystianfarias/gta-fmod/releases).

Looking for compatible bank kits? Consider [buying the game Assetto Corsa](https://store.steampowered.com/app/244210/Assetto_Corsa/); it contains several cars and their SFX. Here are some game banks, entirely authored by **Kunos Simulazioni**: [View banks](https://drive.google.com/drive/folders/1dLTVFNOnWmtb2UHFvGaUFfWf03PHJChm?usp=sharing)

## Build Instructions

To build the project, set the following environment variables in your command prompt (replace the paths as needed):

```sh
setx GTA_SA_DIR "path\to\your\game"
setx PLUGIN_SDK_DIR "path\to\plugin-sdk"
```

Then build the solution using MSBuild:

```sh
msbuild GTAFmod.sln /p:Configuration="GTASA Release" /p:Platform=x86 /p:OutDir=..\ /t:GTAFMod
```

## License

Audio Engine: FMOD Studio by Firelight Technologies Pty Ltd.
