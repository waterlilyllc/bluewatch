# Bluewatch

M5Stack-based project using PlatformIO.

## Setup

1. Install PlatformIO
2. Connect M5Stack device
3. Build and upload:
   ```bash
   pio run --target upload
   ```



# BlueWatch

Bluetooth電波の出入りを監視し、在室状況をロギング・可視化する M5Stack Core 用のシステムです。

## 🛰️ 概要

BlueWatch は、Bluetoothデバイスの電波強度（RSSI）を定期的にスキャンし、一定距離内に入ってきた／出ていったデバイスを記録します。また、M5Stackに組み込まれたローカルWebサーバーを通じて、ブラウザから現在の滞在状況や過去ログを確認できます。

## 📦 機能一覧

- Bluetooth スキャン（10秒ごとなど、RSSIしきい値 -80dBm などで判定）
- デバイスの「入室」「退室」イベントの自動記録
- 一時的な電波遮断にも対応（最後の検出から2分以内は滞在継続とみなす）
- 入退室のログをCSVまたはJSONで保存（SPIFFS または SD）
- ローカルWebサーバーでブラウザからリアルタイムに可視化
- MACアドレスごとに「名前」「メモ」「お気に入り（⭐️）」などを設定可能

## 🧰 必要なもの

- M5Stack Core（初代）
- Arduino IDE（推奨：v1.8.x または Arduino 2.x）
- Wi-Fi環境
- 必要なライブラリ：
  - `BluetoothSerial`（ESP32内蔵）
  - `ESPAsyncWebServer` または `WebServer`（Web表示用）
  - `ArduinoJson`（デバイスメモ保存）

## 🚀 セットアップ手順

1. M5Stack にスケッチを書き込む（`bluewatch.ino`）
2. Wi-Fi設定を記述（`wifi_config.h`）
3. 起動すると自動的にBluetoothスキャンとWebサーバーが始動
4. Webブラウザで `http://<M5のIPアドレス>/` にアクセス

## 📖 画面イメージ（予定）

- 在室中デバイスの一覧（名前・MAC・RSSI・⭐️）
- 過去の入退室ログ
- デバイスごとの詳細編集ページ（名前・メモ設定）

## 🛠 今後のTODO

- [ ] Web UI デザインのブラッシュアップ
- [ ] ログのCSV出力機能
- [ ] フィルタ（よくいるデバイスの強調）追加
- [ ] デバイス画像・アイコン設定機能

## 🧪 コードネーム

**BlueWatch** — 電波を見守る、あなただけのウォッチャー。

---

MIT License  
(C) 2025 Kosuke



## Features

- Basic M5Stack button handling
- Blue-themed display interface
