
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/video.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <stdio.h>
using namespace cv;
using namespace std;

class VideoCapturecl {
public:
    void foo() {
        imshow("Live", frame);
    }
    int check() {
        cap.open(deviceID, apiID);
        if (!cap.isOpened()) {
            cerr << "ERROR! Unable to open camera\n";
            return -1;
        }
        //--- GRAB AND WRITE LOOP
        else{
            cout << "Start grabbing" << endl
                << "Press any key to terminate" << endl;
        }
    }
    void cycle() {
        for (;;)
        {
            // wait for a new frame from camera and store it into 'frame'
            cap.read(frame);
            // check if we succeeded
            if (frame.empty()) {
                cerr << "ERROR! blank frame grabbed\n";
                break;
            }
            // show live and wait for a key with timeout long enough to show images

            foo();
            if (waitKey(5) >= 0)
                break;
        }
    }
    
private:
    int deviceID = 0;
    int apiID = cv::CAP_ANY;
    VideoCapture cap;
    Mat frame;
};



int main(int, char**, int argc, char* argv[]){
    setlocale(0, "RU");
    //--- INITIALIZE VIDEOCAPTURE
 
    // open the default camera using default API
    // cap.open(0);
    // OR advance usage: select any API backend
                 // 0 = open default camera
        // 0 = autodetect default API
    // open selected camera using selected API
   

    VideoCapturecl capt;
    capt.check();
    VideoCapture cap(0);
   

       
        // Check if camera opened successfully
    

        
        // Default resolutions of the frame are obtained.The default resolutions are system dependent.
        
        int frame_width = cap.get(cv::CAP_PROP_FRAME_WIDTH);
    
        int frame_height = cap.get(cv::CAP_PROP_FRAME_HEIGHT);
    

        
        // Define the codec and create VideoWriter object.The output is stored in 'outcpp.avi' file.
        
        VideoWriter video("C:\Users\ГараевТ\Desktop\opencv\build", cv::VideoWriter::fourcc('M', 'J', 'P', 'G'), 10, Size(frame_width, frame_height));
    

        
        if (video.isOpened())
        {



            cout << "the writer isnt opened" << endl;
            getchar();
            return -1;
        }
        while (1) {
            Mat frame;



            bool bSuccess = cap.read(frame); // read a new frame from camera feed



            if (!bSuccess) //test if frame successfully read
            {
                cout << "ERROR READING FRAME FROM CAMERA FEED" << endl;
                break;
            }



            video.write(frame);
            switch (waitKey(10)) {
            case 27:
                //'esc' has been pressed (ASCII value for 'esc' is 27)
                //exit program.
                return 0;



            }


        }
        // When everything done, release the video capture and write object
        
        cap.release();
    
        video.release();
    

        
        // Closes all the frames
        
        destroyAllWindows();

    capt.cycle();
    // check if we succeeded
    
    
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;
}
