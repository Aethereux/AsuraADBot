# Asura Ad Bot & Crash Bot for iOS

This project is a custom ImGui-based menu for ARK: Survival Evolved 2.0. It provides automated tools for server advertisements (Ad Bot) and targeted server disruptions (Crash Bot). Built as a lightweight floating menu, it integrates directly with game internals to provide seamless automation and control.

---

## Core Features

### Ad Bot
- **Automatic Rotation**: Joyfully joins servers from a fetched list and sends configured advertisement messages periodically.
- **Smart Filtering**: The bot automatically skips password-protected or empty servers to ensure it only targets active, public servers.
- **Persistent Settings**: All messages and bot configurations are saved to the device, so they persist across game restarts.

### Crash Bot
- **Server Discovery**: Includes a dedicated search panel to find specific servers by name or IP address.
- **Quick Selection**: Clicking a search result instantly sets it as the target, populating the IP and Port fields automatically.
- **Rollback Mechanism**: Utilizes a specific ServerDownloadDungeon trigger to cause a server-side rollback, resulting in a crash.
- **Manual Control**: Allows for quick joining and targeted crashing of any server found via search.
