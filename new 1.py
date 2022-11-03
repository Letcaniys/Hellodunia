""" Program python sederhana - Menebak angka
----------------------------------------
"""
import random
attempts_list = []
def show_score():
    if len(attempts_list) <= 0:
        print("Saat ini belum ada skor tertinggi, kesempatan Anda untuk mengambilnya!")
    else:
        print("Skor tertinggi saat ini adalah {} percobaan".format(min(attempts_list)))
def start_game():
    random_number = int(random.randint(1, 10))
    print("Halo petualang! Selamat datang pada permainan tebak-tebakan angka!")
    player_name = input("Siapa nama Anda? ")
    wanna_play = input("Hi, {}, apakah Anda ingin bermain tebak angka? (Tulis Ya/Tidak) ".format(player_name))
     
    attempts = 0
    show_score()
    while wanna_play.lower() == "ya":
        try:
            guess = input("Pilih angka antara 1 dan 10: ")
            if int(guess) < 1 or int(guess) > 10:
                raise ValueError("Silahkan tebak angka di antara nya")
            if int(guess) == random_number:
                print("Selamat! Anda benar!")
                attempts += 1
                attempts_list.append(attempts)
                print("Anda melakukannya dengan {} percobaan".format(attempts))
                play_again = input("Apakah Anda ingin bermain lagi? (Tulis Ya/Tidak) ")
                attempts = 0
                show_score()
                random_number = int(random.randint(1, 10))
                if play_again.lower() == "tidak":
                    print("Terima kasih, sampai jumpa kembali!")
                    break
            elif int(guess) > random_number:
                print("Angkanya lebih kecil")
                attempts += 1
            elif int(guess) < random_number:
                print("Angkanya lebih besar")
                attempts += 1
        except ValueError as err:
            print("Oh tidak!, ini nilai yang salah. Silahkan mencoba lagi...")
            print("({})".format(err))
    else:
        print("Selamat, telah bermain game ini!")
if __name__ == '__main__':
    start_game()