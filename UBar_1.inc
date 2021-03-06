{ KOL MCK } // Do not remove this line!
const N1 = 0;


procedure NewFBar( var Result: PFBar; AParent: PControl );
begin

  {$IFDEF KOLCLASSES}
  Result := PFBar.Create;
  {$ELSE OBJECTS}
  New( Result, Create );
  {$ENDIF KOL CLASSES/OBJECTS}
  Result.Form := NewForm( AParent, 'FBar' ).SetPosition( 250, 391 );
  Result.Form.Add2AutoFree( Result );
    Result.Form.HasBorder := False;
    Result.Form.SetClientSize( 686, 32);
    Result.Form.StayOnTop := True;
    Result.Form.Font.FontHeight := 14;
    Result.Form.Font.FontName := 'Arial';
    Result.Form.Border := 0;
    DeleteMenu( GetSystemMenu( Result.Form.GetWindowHandle, False ), SC_CLOSE, MF_BYCOMMAND );
      Result.Form.OnMessage := Result.KOLForm1Message;
      Result.Form.OnClose := Result.KOLForm1Close;
      Result.Form.OnShow := Result.KOLForm1Show;
    NewMenu( Result.Form, 0, [ '' ], nil );

    Result.TimerShow := NewMMTimer( 20 );
  Result.Form.Add2AutoFree( Result.TimerShow );
      Result.TimerShow.OnTimer := Result.TimerShowTimer;

    Result.TimerText := NewMMTimer( 20 );
  Result.Form.Add2AutoFree( Result.TimerText );
      Result.TimerText.OnTimer := Result.TimerTextTimer;

    Result.PopupBar := NewMenu( Result.Form, 0, [ 'Close'
      , '' ], nil );
    Result.PopupBar.AssignEvents( 0, [ Result.PopupBarN1Menu ] );
    Result.PanelTop := NewPanel( Result.Form, esNone ).SetAlign ( caTop ).SetSize( 0, 21 ).SetBorder( 2);
    Result.PanelTop.Transparent := True;
    Result.PanelTop.Color := TColor(clWhite);
      Result.LText := NewLabel( Result.PanelTop, 'Shollu v3.00' ).SetPosition( 528, 3 ).AutoSize( TRUE );
      Result.LText.Transparent := True;
      Result.LText2 := NewLabel( Result.PanelTop, 'Shollu v3.00' ).PlaceRight.AutoSize( TRUE );
      Result.LText2.Transparent := True;
    Result.TimerShow.Enabled := True;
    Result.PanelTop.SetAutoPopupMenu( Result.PopupBar );
      Result.PanelTop.OnPaint := Result.PanelTopPaint;
    Result.Form.CanResize := False;
    Result.Form.Perform( WM_INITMENU, 0, 0 );
    Result.KOLForm1FormCreate( Result );

end;

