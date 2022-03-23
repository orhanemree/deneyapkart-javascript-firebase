import { initializeApp } from "firebase/app";
import config from "./config.js";

// veritabanı ayarları
const app = initializeApp(config);

export default app;