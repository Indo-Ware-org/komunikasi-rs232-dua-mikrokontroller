<p align="center">
  <img src="https://indo-ware.com/logo/LOGONEW2.png" alt="Indoware logo"/>
</p>

# Komunikasi RS232 Dua Mikrokontroller

<p>Penerapan komunikasi serial dengan level tegangan RS232 antara dua modul mikrokontroller ATmega328</p>

## Intro

<p>Komunikasi serial antara mikrokontroller atau dengan perangkat serial lainnya biasa dilakukan langsung dengan menyambungak pin TX dan RX. Tetapi untuk komunikasi serial yang lebih jauh membutuhkan level tegangan yang lebih tinggi dibandingkan TTL agar sinyal bisa mencapai tujuan dan lebih tahan terhadap derau. Maka dari itu koneksi antara dua perangkat harus diganti level tegangannya menjadi RS232. Dibawah ini adalah diagram waktu dan tegangan antara level tegangan TTL dan RS232.</p>
<img src="https://www.sparkfun.com/tutorial/RS232vsTTL-BiteSize/ttl-timing.PNG">

## Rangkaian Komunikasi RS232 antara dua Mikrokontroller

<p>Untuk melakukan komunikasi RS232 kita perlu memiliki IC MAX232 sebagai pengganti level tegangan. Pada Modul Mikrokontroller ATMega328P sudah terdapat IC ini. Untuk menggunakannya terlebih dahulu menyambungkan jumper TX RX yang berwarna hijau. Setelah itu sambungan kabelnya seperti gambar dibawah ini.</p>

<img src="https://github.com/Indo-Ware-org/komunikasi-rs232-dua-mikrokontroller/blob/master/image/tes%20rs232.jpg">

## Deskripsi Jalan Program

<p>Mikrokontroller dibagi menjadi dua bagian yaitu bagian master dan slave, untuk pengisian kode dapat dilihat pada repository di sini. Pada gambar dibawah ini terlihat dua buah mikrokontroller yang tersambung oleh kabel telepon yang panjangnya lebih dari 50 Meter dan tiap ujung kabel tersambung pada Pinhead RS232 pada masing-masing modul.</p>
<img src="https://github.com/Indo-Ware-org/komunikasi-rs232-dua-mikrokontroller/blob/master/image/IMAG0565.jpg">
<p>Ketika tombol D.2 ditekan maka mikrokontroller master akan mengirimkan data karakter 'a' melalui sambungan RS232. Slave yang menunggu data akan membaca data karakter 'a' sehingga akan membuat LED nyala dan mati</p>

##
<hr>
<p align="right" size"6"><b>by IRP</b></p>
<p align="right" size"6"><b>Copyright Indo-Ware</b></p>
