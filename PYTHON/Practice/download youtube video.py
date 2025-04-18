from pytube import YouTube

link = input(" Enter YouTube Link : ")
yt = YouTube(link)
videos = yt.streams.all()

video = list(enumerate(videos))

for i in videos:
    print(i)

print(" Enter the desired option to download the format : ")
dn_option = int(input(" Enter the Option : "))
dn_video = videos[dn_option]
dn_video.download()

print(" Download Successfully :)")