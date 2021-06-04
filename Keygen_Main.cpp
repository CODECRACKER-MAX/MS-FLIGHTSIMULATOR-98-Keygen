#include <tchar.h>
#include <windows.h>
#include <string>
#include <Commctrl.h>

/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

TCHAR szClassName[] = _T("This is the change in the code!");


int WINAPI WinMain (HINSTANCE hThisInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpszArgument,
                     int nCmdShow)
{

    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the window class */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */


    //13,17,23
   wincl.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(0, 115, 164)); // Color!

    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/

    hwnd = CreateWindowEx (
           0,                   /* Extended possibilities for variation */
           szClassName,         /* Class name */
           _T("Keygen: M$ Flight Simulator 98"),       /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           520,                 /* The programs width */
           302,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

    /* Make the window visible on the screen */
    ShowWindow (hwnd, nCmdShow);

    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }
    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}


/*  This function is called by the Windows function DispatchMessage()  */
LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
//    T_Char name[]
// The text's used in the program
    static wchar_t *ver1 = L"Flight Similator 98";



    switch (message)                  /* handle the messages */
      {

          // Variables used in the program
    PAINTSTRUCT ps;
    HDC hdc;
    HBRUSH hBRUSH, hTmpBr;
    HFONT hFont, holdFont;
          //

     case WM_DESTROY:
    PostQuitMessage (0);       /* send a WM_QUIT to the message queue */
         break;

         case WM_CREATE:

{
    //ShowWindow (GetConsoleWindow(), SW_HIDE); // Hiding the console window!

   // HBITMAP bitmap;


   // bitmap=(HBITMAP)LoadImage(NULL,"C:\\Users\Shadab infotec\Desktop\Logo.bmp",IMAGE_BITMAP,183,193,LR_LOADFROMFILE);
    //bitmap=(HBITMAP)LoadImage(NULL,"C:\\Wallpaper.bmp",IMAGE_BITMAP,0,0,LR_LOADFROMFILE);
        // Change color -
    //SetBkColor(hdc, RGB(7, 102, 184));   //
    HWND hwndButton = CreateWindow("BUTTON", "Generate",      // Button text
    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,  // Styles
    214,         // x position
    215,         // y position
    67,        // Button width
    32,        // Button height
    hwnd,     // Parent window
    NULL,       // No menu.
    (HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE),
    NULL);      // Pointer not needed.
    break;

}

   case WM_CTLCOLOREDIT:
     {
         // Set color!


   case WM_COMMAND:
     {
           //case WM_RBUTTONDBLCLK:
           RedrawWindow(hwnd, NULL, NULL, RDW_ERASE|RDW_INVALIDATE);
    }
           break;

      case WM_LBUTTONDBLCLK:

           {

               RedrawWindow(hwnd, NULL, NULL, RDW_ERASE|RDW_INVALIDATE);

           }

    case WM_PAINT:

   // PAINTSTRUCT ps;
 //   HDC hdc;
  //  HBRUSH hBRUSH, hTmpBr;
   // HFONT hFont, holdFont;

    // Keygen Code

    int keys[7] = {}; // Middle part of the key!
    int sum_ = 0;
    int sum_2 = 0;

    for (int x = 0; x< 6; x++)
    {

        int random = (rand() % 6 + 1);
        keys[x] = random;
        sum_ = sum_ + keys[x];

    }

    sum_2 = sum_;

    while (sum_2 % 7 != 0)
    {

        sum_2 = sum_2 + 1;

    }

    keys[6] = (sum_2 -sum_);

    // First and last part of the keys!
    int keys_1[5] = {};
    int keys_3[5] = {};

    for (int x =0; x < 5; x++)
    {
        int random = (rand() % 6);
        keys_1[x] = random;
        keys_3[x] = random + 2;
    }
    //

        hdc = BeginPaint(hwnd, &ps);
                // Rectangles!

           hBRUSH=CreateSolidBrush(RGB(196, 15, 24));
            hTmpBr=(hBRUSH);
            SelectObject(hdc, hBRUSH);
           SetBkColor(hdc, RGB(196, 15, 24));
           SetTextColor(hdc, RGB(182, 220, 210));
           //Rectangle(hdc, 4, 20, 510, 200);

    LOGBRUSH brush;
    COLORREF col = RGB(0, 0, 0);
    DWORD pen_style = PS_SOLID | PS_JOIN_MITER | PS_GEOMETRIC;

    brush.lbStyle = BS_SOLID;
    brush.lbColor = col;
    brush.lbHatch = 0;

    PAINTSTRUCT ps;

    pen_style = PS_SOLID | PS_GEOMETRIC | PS_JOIN_BEVEL;
    HPEN hPen2 = ExtCreatePen(pen_style, 4, &brush, 0, NULL);

    SelectObject(hdc, hPen2);

    POINT points2[5] = { { 4, 30 },
    { 500, 30 },

    { 500, 260 },

    { 4, 260 },

    { 4, 30 }};

    Polygon(hdc, points2, 4);
    DeleteObject(hPen2);


            LPCSTR inpiration = "Inspiration:- TechKnow";
            char buffer[0xff];
            sprintf(buffer, "%s",inpiration);
            TextOut(hdc, 347, 240, buffer, 22);

            LPCSTR keys_label = "Keys:";
            sprintf(buffer, "%s", keys_label);
            HBRUSH hBRUSH;
           HFONT hFont,hTmp;

           hBRUSH=CreateSolidBrush(RGB(0,0,0));
            DeleteObject(hBRUSH);
            SetTextColor(hdc,RGB(255,255,255));
            hFont=CreateFont(24,0,0,0,FW_MEDIUM,0,0,0,0,0,0,2,0,"Verdana");
            hTmp=(HFONT)SelectObject(hdc,hFont);

           hBRUSH=CreateSolidBrush(RGB(0,0,0));
            //FillRect(hDC,&rc,hBrush);
            DeleteObject(hBRUSH);
            SetTextColor(hdc,RGB(255,255,255));
            hFont=CreateFont(20,0,0,0,FW_MEDIUM,0,0,0,0,0,0,2,0,"Arial");
            hTmp=(HFONT)SelectObject(hdc,hFont);
            SetBkMode(hdc,TRANSPARENT);
            sprintf(buffer, "KEYS: %i%i%i%i%i- OEM- %i%i%i%i%i%i%i- %i%i%i%i%i",keys_1[0],keys_1[1],keys_1[2],keys_1[3],keys_1[4],keys[0],keys[1],keys[2],keys[3],keys[4],keys[5],keys[6],keys_3[0],keys_3[1],keys_3[2],keys_3[3],keys_3[4]);
            TextOut(hdc, 100, 70 , buffer , 32);
            DeleteObject(SelectObject(hdc,hTmp));


           /* Title */
           hBRUSH=CreateSolidBrush(RGB(0,0,0));
            //FillRect(hDC,&rc,hBrush);
            DeleteObject(hBRUSH);
            SetTextColor(hdc,RGB(54, 247, 0));
            hFont=CreateFont(29,0,0,0,FW_MEDIUM,0,0,0,0,0,0,2,0,"Arial");
            hTmp=(HFONT)SelectObject(hdc,hFont);
            SetBkMode(hdc,TRANSPARENT);
            LPCSTR _Title = "Keygen: Microsoft Flight Simulator 98";
            TextOut(hdc, 30, 1, _Title, 37);
            DeleteObject(SelectObject(hdc,hTmp));


            EndPaint(hwnd, &ps);
        return 0L;
            break;
    }

   default:
    {
         return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
    }
}
