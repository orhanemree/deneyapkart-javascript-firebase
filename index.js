import { SerialPort } from "serialport";
import { ReadlineParser } from "serialport";
import { getDatabase, ref, set } from "firebase/database";
import app from "./DB.js";

// seri bağlantı ayarları
const serial = new SerialPort({
    path: "COM7",
    baudRate: 9600
});

const parser = serial.pipe(new ReadlineParser({delimiter: "\r\n"}));

// veritabanı bağlantısı
const db = getDatabase(app);

// seri porttan alınan veri zaman damgası ile veratabanına kaydedilmesi
parser.on("data", data => {
    const now = new Date().toString();
    set(ref(db, `${now}`), {
        "data": data,
        "time": now,
        "source": `${serial.path}-${serial.baudRate}`
    });
});

