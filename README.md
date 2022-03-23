# 🎯 Deneyapkart JavaScript Firebase
Deneyapkart'tan alınan verilerin JavaScript ile Firebase gerçek zamanlı veritabanına kaydedilmesi - seri haberleşme örneği.

## 🧐 Kullanım
* Node, Arduino IDE ve Deneyap Kart Kütüphanesi'nin bilgisayarınızda kurulu olduğuna emin olun.
* Repo'yu klonlayın.
```bash
$ git clone https://github.com/orhanemree/deneyapkart-javascript-firebase.git
$ cd deneyapkart-javascript-firebase
```
* Deneyapkart ile şemadaki devreyi kurun ve kodu (``deneyapkart-javascript-firebase.ino``) karta gönderin.
* Firebase hesabınızdan yeni bir web projesi oluşturup gerçek zamanlı veritabanı kullanmaya başlayın. Bu işlemden sonra proje ana dizininde bir ``config.js`` dosyası oluşturmanız gerekecek. Bu dosyaya aşağıdaki örnekte gösterilen firebaseConfig verisini kopyalayın. Ve en altına ``export default firebaseConfig`` yazın.
 
<img src="./firebase-config.png" alt="deneyapkart-javascript-firebase">

* JavaScript kısmını başlatın.
```bash
# gereklilikleri kurun
$ npm install
# kodu çalıştırın
$ npm start
# veya geliştirici modunda çalıştırın
$ npm run dev
```

## 🧮 Şema
<img src="./scheme.jpg" alt="deneyapkart-javascript-firebase">

## 📚 Kaynaklar
* [Deneyap Kart](https://deneyapkart.org/)

## 📃 Lisans
* [MIT Lisansı](https://github.com/orhanemree/deneyapkart-javascript-firebase/blob/master/LICENSE) ile lisanslanmıştır.