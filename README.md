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

<img src="https://lh3.googleusercontent.com/8ySTO4I_MA1fq2uVu4ai-9uh4MR9ncXNmeV4HfQALfkz4HkKuXYuYQero5fqqRxrRmuVHFH3xaZPZaJCHdsEkB7nhhQMVcYw6PsKpob7N6rUr6QA4DXgbyyyYCR7tObAu_q7YDebJmU6ZDpF99vhiWIybxez6hjeCB29CHMaEPz4WqpZnN8XJ_MjrYxwfD3zzMNpPSMTn1iD_9_Rd3dY_8nL5WI4uFTct3iOxtKXQPrVtq6IRvBaE9idR5-OEKqQBljY8H_GKXYk4d2b3tDH7qfKbbByiZR1MEGFEvI4XITq_ruAJO8ZznlDVGgaveOYURoyv209FI7ayRJUWVjpMjL_0HjqrmgIpsZHQJkhv0BqWwnI7kOnyAh-Zao16ldeoO99zGxyeTfBt1r3sEuML14q3iMLnROWPkgC2wEgWqduZhNDZzuWJzsM0Lw_9d5-BaLQD8tN-UpTAbp5PXRJ_ea_8vRazoZ230LeR3YYkFEUy3Ov14mW89PnpQg66PCY-ktou6pnjp-uY4LrL7mAFDDk4tysF6gVn1aKY7OWbuThj6QZFjSpy8S2cygOsCUOwkTU2zyPF2vSCztee7yfXYo26xyEzZAEvuZDhhc2G6RoUWpASDWg=w1033-h247-no">

## Deskripsi Jalan Program

<p>Mikrokontroller dibagi menjadi dua bagian yaitu bagian master dan slave, untuk pengisian kode dapat dilihat pada repository di sini. Pada gambar dibawah ini terlihat dua buah mikrokontroller yang tersambung oleh kabel telepon yang panjangnya lebih dari 50 Meter dan tiap ujung kabel tersambung pada Pinhead RS232 pada masing-masing modul.</p>
<img src="https://lh3.googleusercontent.com/mse3Y0S21J3Dk9pd_s1ne6bc0vHgl2oJ09bGPKKyvy2kK09MUumxR2cqkG3uubMsavnyh0nwDK-_Wuq9AQgRu1XtSH0n2cmdKQ-hpXbelI_qmXOw6hk8RboOd0v0aKvxmz7ZWVCLH27fMLU63PsULS2_ik9oy0yR3fJ3A6OAakbwOszMz0sJ24jW1hS-dL6fmpeRgETfxQ4DMceVlh8JVtUeKyzM2c7JXijG0WMRjBvSWJkDkaRHzxzfAP_E1Jz4FU5rQPMNKtToMVjNpZ1il3BKzLg0buSiLyphqG_2tlszaokBJfQR9W_YRdcr_w8dD6fSa_f6KDnZGFL69TbpGo9jeIjUaSdWbT8AJsPS5a2WoqirEEuhK5hcEl695rRblxGoXuAjeGoyasVNGUsgodkXrOclxX_um1Cnzoa4vBZdI8f3VkEnvPw2du8fh9r-6GDpggcaQUMtaDRwaCb6v_uHJqGfMBHhJbVMWOyiBlghB7ae5RYTh6Et_-R-1nfl2svcI_yytCx00Y3JERpoTmkZ0x6bd7Nl6JAh_ucfHNV7weZh9OuE0GPmmuUKh7-PZCIBH7au98af29Y2q2UITFzn2lQnUeE1Zyfyk4TUKsmTCO5TjUXt=w1177-h662-no">
<p>Ketika tombol D.2 ditekan maka mikrokontroller master akan mengirimkan data karakter 'a' melalui sambungan RS232. Slave yang menunggu data akan membaca data karakter 'a' sehingga akan membuat LED nyala dan mati</p>

##
<hr>
<p align="right" size"6"><b>by IRP</b></p>
<p align="right" size"6"><b>Copyright Indo-Ware</b></p>
