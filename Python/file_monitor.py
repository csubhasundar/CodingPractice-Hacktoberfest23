import os
import time
from datetime import datetime

class FileWatcherBinding(object):

    def __init__(self,freq) -> None:
        self.freq = freq
        return None



    def file_event_handler(file_name:str) -> None:

        time = datetime.now()

        with open(f'{file_name}.log.txt'.format(file_name = file_name),'a') as file :

            file.write(f'{file_name} changed at {time}\n'.format(file_name = file_name, time = datetime.now()))

        return None



    def dir_event_handler(dir_name) -> None:

        time = datetime.now()

        with open(f'{dir_name}.log.txt'.format(dir_name = dir_name),'a') as file :

            file.write(f'{dir_name} changed at {time}\n'.format(file_name = dir_name, time = datetime.now()))

        return None
    


    def watch_file(self,file_name : str ,file_event_handler = file_event_handler) -> None:

        file_name = os.path.basename(file_name)

        prev = os.path.getmtime(file_name)

        while True:

           
            observer = os.path.getmtime(file_name)
           
            if prev != observer :
                print(f'{file_name} Changed'.format(file_name = file_name))
                file_event_handler(file_name)
                prev = observer
    
            time.sleep(self.freq)

        return None
    


    def watch_dir(self,dir_name:str, dir_event_handler = dir_event_handler) -> None:

        path = dir_name

        dir_files = os.listdir(path)
        dir_info = dict()

        for i in dir_files :
            dir_info[i] = os.path.getmtime(os.path.join(path,i))

        while True :

            dir_observer = os.listdir(path)

            if bool(len(set(dir_observer).difference(set(dir_files))) != 0) :

                print(f'{path} has been changed'.format(path = path))
                dir_event_handler(path)

                dir_files = dir_observer
                dir_info = dict()
                for i in dir_files :
                    dir_info[i] = os.path.getmtime(os.path.join(path,i))
            
            else :
                
                try :
                    for i in dir_info :

                        if (dir_info[i] != os.path.getmtime(os.path.join(path,i))) :

                            print(f'{path} has been changed'.format(path = path))
                            dir_event_handler(path)

                            dir_info[i] = os.path.getmtime(os.path.join(path,i))

                except :
                    print(f'{path} has been changed'.format(path = path))
                    dir_event_handler(path)

                    dir_files = os.listdir(path)
                    dir_info = dict()
                    for i in dir_files :
                        dir_info[i] = os.path.getmtime(os.path.join(path,i))
            
            time.sleep(self.freq)

        return None
    