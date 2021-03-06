{ KOL MCK } // Do not remove this line!
const N1 = 0;
const N12 = 2;
const N13 = 3;
const N15 = 4;
const N9 = 6;
const N8 = 7;
const N20 = 8;
const N11 = 9;
const N3 = 11;
const N5 = 12;
const N4 = 13;
const N7 = 15;
const N16 = 16;
const N17 = 17;
const N18 = 18;
const N10 = 19;
const N21 = 20;
const N22 = 21;
const N23 = 22;
const N24 = 23;
const N25 = 24;


procedure NewForm1( var Result: PForm1; AParent: PControl );
begin

  {$IFDEF KOLCLASSES}
  Result := PForm1.Create;
  {$ELSE OBJECTS}
  New( Result, Create );
  {$ENDIF KOL CLASSES/OBJECTS}
  Result.Form := NewForm( AParent, 'Shollu3' ).SetPosition( 408, 229 );
  Result.Form.Add2AutoFree( Result );
    Result.Form.HasBorder := False;
    Result.Form.SetClientSize( 586, 407);
    Result.Form.StayOnTop := True;
    Result.Form.Font.FontHeight := 16;
    Result.Form.Font.FontName := 'Arial';
    Result.Form.Border := 0;
    DeleteMenu( GetSystemMenu( Result.Form.GetWindowHandle, False ), SC_CLOSE, MF_BYCOMMAND );
      Result.Form.OnMessage := Result.KOLForm1Message;
      Result.Form.OnClose := Result.KOLForm1Close;
      Result.Form.OnMouseUp := Result.KOLForm1MouseUp;
      Result.Form.OnShow := Result.KOLForm1Show;
      Result.Form.OnHide := Result.KOLForm1Hide;
      Result.Form.OnPaint := Result.KOLForm1Paint;
    NewMenu( Result.Form, 0, [ '' ], nil );

      {$R Form1_Tray.RES}
    Result.Tray := NewTrayIcon( Applet, LoadIcon( hInstance, 'ZFORM1_TRAY' ) );
  Result.Form.Add2AutoFree( Result.Tray );
      Result.Tray.OnMouse := Result.TrayMouse;

    Result.Timer1 := NewTimer( 10 );
  Result.Form.Add2AutoFree( Result.Timer1 );
      Result.Timer1.OnTimer := Result.Timer1Timer;

    Result.Popup1 := NewMenu( Result.Form, 0, [ 'Open Shollu'
      , '-' + '', 'Program Setting', 'Prayer times setting'
      , 'Message Info setting', '-' + '', 'Schedule maker'
      , 'Task Scheduler', 'Masehi - Hijriyah converter'
      , 'Open Help', '-' + '', 'Shutdown PC', 'Hibernate PC'
      , 'Close Shollu', '-' + '', 'Adzan', '(', 'Stop Adzan'
      , 'Pause Adzan', 'Play Adzan', ')', 'About Shollu...'
      , 'Multimedia', '(', 'Pause', 'Stop', 'Play', ')'
      , 'Drop Zone', '' ], nil );
    Result.Popup1.AssignEvents( 0, [ Result.Popup1N1Menu ] );
    Result.Popup1.AssignEvents( 2, [ Result.Popup1N12Menu ] );
    Result.Popup1.AssignEvents( 3, [ Result.Popup1N13Menu ] );
    Result.Popup1.AssignEvents( 4, [ Result.Popup1N15Menu ] );
    Result.Popup1.AssignEvents( 6, [ Result.Popup1N9Menu ] );
    Result.Popup1.AssignEvents( 7, [ Result.Popup1N8Menu ] );
    Result.Popup1.AssignEvents( 8, [ Result.Popup1N20Menu ] );
    Result.Popup1.AssignEvents( 9, [ Result.Popup1N11Menu ] );
    Result.Popup1.AssignEvents( 11, [ Result.Popup1N3Menu ] );
    Result.Popup1.AssignEvents( 12, [ Result.Popup1N5Menu ] );
    Result.Popup1.AssignEvents( 13, [ Result.Popup1N4Menu ] );
    Result.Popup1.ItemVisible[ 15 ] := False;
    Result.Popup1.AssignEvents( 16, [ Result.Popup1N16Menu ] );
    Result.Popup1.AssignEvents( 17, [ Result.Popup1N17Menu ] );
    Result.Popup1.AssignEvents( 18, [ Result.Popup1N18Menu ] );
    Result.Popup1.AssignEvents( 19, [ Result.Popup1N10Menu ] );
    Result.Popup1.ItemVisible[ 20 ] := False;
    Result.Popup1.AssignEvents( 21, [ Result.Popup1N22Menu ] );
    Result.Popup1.AssignEvents( 22, [ Result.Popup1N23Menu ] );
    Result.Popup1.AssignEvents( 23, [ Result.Popup1N24Menu ] );
    Result.Popup1.AssignEvents( 24, [ Result.Popup1N25Menu ] );
      Result.Popup1.OnPopup := Result.Popup1Popup;

    Result.ImageList24 := NewImageList( Result.Form );
    Result.ImageList24.Colors := ilcColorDDB;
      Result.ImageList24.ImgHeight := 24;
      {$R Form1_ImageList24.res}
    Result.ImageList24.AddMasked( LoadBmp( hInstance, 'FORM1_IMAGELIST24', Result.ImageList24 ), clBlack );

    Result.ImageList16 := NewImageList( Result.Form );
    Result.ImageList16.Colors := ilcColorDDB;
      Result.ImageList16.ImgWidth := 16;
      Result.ImageList16.ImgHeight := 16;
      {$R Form1_ImageList16.res}
    Result.ImageList16.AddMasked( LoadBmp( hInstance, 'FORM1_IMAGELIST16', Result.ImageList16 ), clBlack );
    Result.TopGP := NewGradientPanel( Result.Form, $FFE1C6, clWhite ).SetPosition( 0, 32 ).SetSize( 593, 33 ).SetBorder( 0);
    Result.TopGP.HasBorder := FALSE;
    Result.TopGP.TabStop := FALSE;
      Result.LInfoTgl := NewLabel( Result.TopGP, 'Tanggal' ).SetPosition( 9, 8 ).AutoSize( TRUE ).SetBorder( 2);
    Result.LInfoTgl.Font.Color := TColor(clNavy);
    Result.LInfoTgl.Font.FontStyle := [ fsBold ];
      Result.LInfoTgl.Transparent := True;
      Result.LTitleInfo := NewLabel( Result.TopGP, '---' ).SetPosition( 240, 8 ).SetSize( 85, 17 ).SetBorder( 2);
    Result.LTitleInfo.Font.Color := TColor(clNavy);
    Result.LTitleInfo.Font.FontStyle := [ fsBold ];
    Result.LTitleInfo.TextAlign := KOL.taRight;
      Result.LTitleInfo.Visible := False;
      Result.LTitleInfo.Transparent := True;
    Result.TopPanel := NewPanel( Result.Form, esNone ).SetAlign ( caTop ).SetSize( 0, 29 ).SetBorder( 2);
      Result.LTitle := NewLabel( Result.TopPanel, 'LTitle' ).SetPosition( 104, 6 ).SetSize( 377, 16 );
    Result.LTitle.Font.FontStyle := [ fsBold ];
    Result.LTitle.Font.FontHeight := 15;
    Result.LTitle.TextAlign := KOL.taCenter;
      Result.LTitle.Transparent := True;
      Result.ImgIcon := NewImageShow( Result.TopPanel, Result.ImageList16, 5 ).SetPosition( 560, 7 ).SetSize( 16, 16 );
      Result.ImgIcon.CurIndex := 5; {SetupFirst}
    Result.MainPanel := NewPanel( Result.Form, esNone ).SetPosition( 0, 64 ).SetSize( 593, 345 ).SetBorder( 0);
      Result.FramePanel := NewPanel( Result.MainPanel, esNone ).SetAlign ( caClient ).SetBorder( 0);
    Result.FramePanel.Color := TColor(clWhite);
      Result.LeftPanel := NewPanel( Result.MainPanel, esNone ).SetAlign ( caLeft ).SetSize( 169, 0 ).SetBorder( 0);
        Result.LeftGP := NewGradientPanel( Result.LeftPanel, clWhite, $FFE1C6 ).SetAlign ( caClient ).SetBorder( 2);
        Result.LeftGP.HasBorder := FALSE;
    Result.LeftGP.TabStop := FALSE;
          Result.LDesc := NewLabel( Result.LeftGP, 'Prayer Times Reminder' ).SetPosition( 16, 312 ).AutoSize( TRUE );
    Result.LDesc.Font.Color := TColor(clNavy);
    Result.LDesc.Font.FontHeight := 14;
          Result.LDesc.Transparent := True;
          Result.LE12 := NewLabel( Result.LeftGP, '___________________' ).SetPosition( 16, 299 ).AutoSize( TRUE );
    Result.LE12.Font.Color := TColor(clNavy);
    Result.LE12.Font.FontHeight := 14;
          Result.LE12.Transparent := True;
          Result.LTitle2 := NewLabel( Result.LeftGP, 'Shollu v3.08' ).SetPosition( 16, 289 ).AutoSize( TRUE );
    Result.LTitle2.Font.FontStyle := [ fsBold ];
    Result.LTitle2.Font.FontHeight := 21;
          Result.LTitle2.Transparent := True;
          Result.BtnAbout := NewBitBtn( Result.LeftGP, '', [ bboImageList, bboNoBorder ], glyphLeft, Result.ImageList24.Handle, 6 ).SetPosition( 8, 240 ).SetSize( 153, 33 );
    Result.BtnAbout.Font.Color := TColor(clNavy);
    Result.BtnAbout.Font.FontHeight := 14;
    Result.BtnAbout.TextAlign := KOL.taLeft;
          Result.BtnAbout.Transparent := True;
          Result.BtnAbout.Flat := TRUE;
          Result.BtnArea := NewBitBtn( Result.LeftGP, '', [ bboImageList, bboNoBorder ], glyphLeft, Result.ImageList24.Handle, 2 ).SetPosition( 8, 75 ).SetSize( 153, 33 );
    Result.BtnArea.Font.Color := TColor(clNavy);
    Result.BtnArea.Font.FontHeight := 14;
    Result.BtnArea.TextAlign := KOL.taLeft;
          Result.BtnArea.Transparent := True;
          Result.BtnArea.Flat := TRUE;
          Result.BtnMainPage := NewBitBtn( Result.LeftGP, '', [ bboImageList, bboNoBorder ], glyphLeft, Result.ImageList24.Handle, 0 ).SetPosition( 8, 9 ).SetSize( 153, 33 );
    Result.BtnMainPage.Font.Color := TColor(clNavy);
    Result.BtnMainPage.Font.FontHeight := 14;
    Result.BtnMainPage.TextAlign := KOL.taLeft;
          Result.BtnMainPage.Transparent := True;
          Result.BtnMainPage.Flat := TRUE;
          Result.BtnMessage := NewBitBtn( Result.LeftGP, '', [ bboImageList, bboNoBorder ], glyphLeft, Result.ImageList24.Handle, 3 ).SetPosition( 8, 108 ).SetSize( 153, 33 );
    Result.BtnMessage.Font.Color := TColor(clNavy);
    Result.BtnMessage.Font.FontHeight := 14;
    Result.BtnMessage.TextAlign := KOL.taLeft;
          Result.BtnMessage.Transparent := True;
          Result.BtnMessage.Flat := TRUE;
          Result.BtnSchedule := NewBitBtn( Result.LeftGP, '', [ bboImageList, bboNoBorder ], glyphLeft, Result.ImageList24.Handle, 4 ).SetPosition( 8, 141 ).SetSize( 153, 33 );
    Result.BtnSchedule.Font.Color := TColor(clNavy);
    Result.BtnSchedule.Font.FontHeight := 14;
    Result.BtnSchedule.TextAlign := KOL.taLeft;
          Result.BtnSchedule.Transparent := True;
          Result.BtnSchedule.Flat := TRUE;
          Result.BtnSetting := NewBitBtn( Result.LeftGP, '', [ bboImageList, bboNoBorder ], glyphLeft, Result.ImageList24.Handle, 1 ).SetPosition( 8, 42 ).SetSize( 153, 33 );
    Result.BtnSetting.Font.Color := TColor(clNavy);
    Result.BtnSetting.Font.FontHeight := 14;
    Result.BtnSetting.TextAlign := KOL.taLeft;
          Result.BtnSetting.Transparent := True;
          Result.BtnSetting.Flat := TRUE;
          Result.BtnTask := NewBitBtn( Result.LeftGP, '', [ bboImageList, bboNoBorder ], glyphLeft, Result.ImageList24.Handle, 5 ).SetPosition( 8, 174 ).SetSize( 153, 33 );
    Result.BtnTask.Font.Color := TColor(clNavy);
    Result.BtnTask.Font.FontHeight := 14;
    Result.BtnTask.TextAlign := KOL.taLeft;
          Result.BtnTask.Transparent := True;
          Result.BtnTask.Flat := TRUE;
          Result.BtnKonversi := NewBitBtn( Result.LeftGP, 'Konversi', [ bboImageList, bboNoBorder ], glyphLeft, Result.ImageList24.Handle, 7 ).SetPosition( 8, 207 ).SetSize( 153, 33 );
    Result.BtnKonversi.Font.FontHeight := 14;
    Result.BtnKonversi.TextAlign := KOL.taLeft;
          Result.BtnKonversi.Transparent := True;
          Result.BtnKonversi.Flat := TRUE;
    Result.PnlSavedMsg := NewPanel( Result.Form, esNone ).SetPosition( 452, 32 ).SetSize( 125, 33 ).SetBorder( 0);
    Result.PnlSavedMsg.Visible := False;
    Result.PnlSavedMsg.Color := TColor(clWhite);
      Result.Label1 := NewLabel( Result.PnlSavedMsg, 'Setting saved' ).SetPosition( 42, 9 ).AutoSize( TRUE ).SetBorder( 2);
    Result.Label1.Font.FontStyle := [ fsBold ];
    Result.Label1.Font.FontHeight := 14;
      Result.Label1.Transparent := True;
      Result.PBSaved := NewPaintBox( Result.PnlSavedMsg ).SetPosition( 6, 5 ).SetSize( 32, 24 ).SetBorder( 0);
      Result.PBSaved.Transparent := True;
    Result.Tray.Active := TRUE;
      Result.LTitle.OnMouseDown := Result.TopPanelMouseDown;
      Result.LTitle.OnMouseUp := Result.TopPanelMouseUp;
      Result.BtnSetting.OnClick := Result.BtnSettingClick;
      Result.BtnSetting.OnMouseMove := Result.BtnMainPageMouseMove;
      Result.BtnSetting.OnMouseLeave := Result.BtnMainPageMouseLeave;
      Result.BtnMainPage.OnClick := Result.BtnMainPageClick;
      Result.BtnMainPage.OnMouseMove := Result.BtnMainPageMouseMove;
      Result.BtnMainPage.OnMouseLeave := Result.BtnMainPageMouseLeave;
      Result.BtnArea.OnClick := Result.BtnAreaClick;
      Result.BtnArea.OnMouseMove := Result.BtnMainPageMouseMove;
      Result.BtnArea.OnMouseLeave := Result.BtnMainPageMouseLeave;
      Result.BtnMessage.OnClick := Result.BtnMessageClick;
      Result.BtnMessage.OnMouseMove := Result.BtnMainPageMouseMove;
      Result.BtnMessage.OnMouseLeave := Result.BtnMainPageMouseLeave;
      Result.BtnSchedule.OnClick := Result.BtnScheduleClick;
      Result.BtnSchedule.OnMouseMove := Result.BtnMainPageMouseMove;
      Result.BtnSchedule.OnMouseLeave := Result.BtnMainPageMouseLeave;
      Result.BtnTask.OnClick := Result.BtnTaskClick;
      Result.BtnTask.OnMouseMove := Result.BtnMainPageMouseMove;
      Result.BtnTask.OnMouseLeave := Result.BtnMainPageMouseLeave;
      Result.BtnAbout.OnClick := Result.BtnAboutClick;
      Result.BtnAbout.OnMouseMove := Result.BtnMainPageMouseMove;
      Result.BtnAbout.OnMouseLeave := Result.BtnMainPageMouseLeave;
      Result.BtnKonversi.OnClick := Result.BtnKonversiClick;
      Result.BtnKonversi.OnMouseMove := Result.BtnMainPageMouseMove;
      Result.BtnKonversi.OnMouseLeave := Result.BtnMainPageMouseLeave;
      Result.TopPanel.OnMouseDown := Result.TopPanelMouseDown;
      Result.TopPanel.OnMouseUp := Result.TopPanelMouseUp;
      Result.TopPanel.OnPaint := Result.TopPanelPaint;
      Result.PBSaved.OnPaint := Result.PBSavedPaint;
      Result.ImgIcon.OnMouseDown := Result.ImgIconMouseDown;
      Result.ImgIcon.OnMouseMove := Result.ImgIconMouseMove;
      Result.ImgIcon.OnMouseUp := Result.ImgIconMouseUp;
      Result.ImgIcon.OnMouseLeave := Result.ImgIconMouseLeave;
    Result.Form.CenterOnParent;
    Result.Form.Perform( WM_INITMENU, 0, 0 );
    Result.KOLForm1FormCreate( Result );

end;

