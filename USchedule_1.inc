{ KOL MCK } // Do not remove this line!

procedure NewFSchedule( var Result: PFSchedule; AParent: PControl );
begin

  {$IFDEF KOLCLASSES}
  Result := PFSchedule.Create;
  {$ELSE OBJECTS}
  New( Result, Create );
  {$ENDIF KOL CLASSES/OBJECTS}
  Result.Form := NewPanel( AParent, esNone ).MarkPanelAsForm.SetAlign( caClient).SetSize( 427, 352 );
  Result.Form.DF.FormAddress := @ Result.Form;
  Result.Form.DF.FormObj := Result;
    Result.Form.SetClientSize( 411, 314 );
    Result.Form.Font.FontHeight := 14;
    Result.Form.Font.FontName := 'Arial';
      Result.Form.OnShow := Result.KOLFrame1Show;
      Result.Form.OnDestroy := Result.KOLFrame1Destroy;
    Result.LblBack := NewLabel( Result.Form, 'Select main BackColor' ).SetPosition( 12, 104 ).AutoSize( TRUE );
    Result.LblBack.Transparent := True;
    Result.LblBack.Color := TColor(clBtnFace);
    Result.LTgl1 := NewLabel( Result.Form, '--' ).SetPosition( 12, 40 ).AutoSize( TRUE );
    Result.LTgl1.Transparent := True;
    Result.LTgl2 := NewLabel( Result.Form, '--' ).SetPosition( 12, 72 ).AutoSize( TRUE );
    Result.LTgl2.Transparent := True;
    Result.LTitleSchedule := NewLabel( Result.Form, '___' ).SetPosition( 12, 8 ).AutoSize( TRUE );
    Result.LTitleSchedule.Font.FontStyle := [ fsBold ];
    Result.LTitleSchedule.Transparent := True;
    Result.BtnColor := NewBitBtn( Result.Form, 'Color', [  ], glyphLeft, 0, 0 ).SetPosition( 144, 99 ).SetSize( 0, 20 ).LikeSpeedButton.LikeSpeedButton;
    Result.BtnColor.Font.Color := TColor(clWhite);
    Result.BtnColor.Color := TColor(clGray);
    Result.BtnColor.Flat := TRUE;
    Result.BtnColor.TextShiftX := 1;
    Result.BtnColor.TextShiftY := 1;
    Result.BtnTextColor := NewBitBtn( Result.Form, 'Text Color', [  ], glyphLeft, 0, 0 ).SetPosition( 212, 99 ).SetSize( 93, 20 ).LikeSpeedButton.LikeSpeedButton;
    Result.BtnTextColor.Font.Color := TColor(clWhite);
    Result.BtnTextColor.Color := TColor(clBlack);
    Result.BtnTextColor.Flat := TRUE;
    Result.BtnTextColor.TextShiftX := 1;
    Result.BtnTextColor.TextShiftY := 1;
    Result.Date1 := NewDateTimePicker( Result.Form, [] ).SetPosition( 144, 32 ).SetSize( 161, 0 );
    Result.Date1.DateTimeFormat := 'dd MMMM yyyy';
    Result.Date2 := NewDateTimePicker( Result.Form, [] ).SetPosition( 144, 64 ).SetSize( 161, 0 );
    Result.Date2.DateTimeFormat := 'dd MMMM yyyy';
    Result.GBSave := NewGroupBox( Result.Form, 'Saved in Format ' ).SetPosition( 120, 128 ).SetSize( 265, 89 );
    Result.GBSave.TabStop := FALSE;
    Result.GBSave.TextAlign := KOL.taCenter;
      Result.RBcsv := NewRadioBox( Result.GBSave, 'Comma Separated Value (csv)' ).SetPosition( 8, 64 ).AutoSize( TRUE );
      Result.RBhtml := NewRadioBox( Result.GBSave, 'HTML' ).SetPosition( 8, 16 ).AutoSize( TRUE );
      Result.RBtsv := NewRadioBox( Result.GBSave, 'Tab Separated  value (tsv)' ).SetPosition( 8, 40 ).AutoSize( TRUE );
    Result.GBTime := NewGroupBox( Result.Form, 'Time Format' ).SetPosition( 8, 128 ).SetSize( 105, 89 );
    Result.GBTime.TabStop := FALSE;
    Result.GBTime.TextAlign := KOL.taCenter;
      Result.RBFmt1 := NewRadioBox( Result.GBTime, 'HH:mm' ).SetPosition( 8, 20 ).AutoSize( TRUE );
      Result.RBFmt2 := NewRadioBox( Result.GBTime, 'HH:mm:ss' ).SetPosition( 8, 44 ).AutoSize( TRUE );
    Result.GPmain := NewGradientPanel( Result.Form, clWhite, clWhite ).SetAlign ( caBottom ).SetSize( 0, 100 );
    Result.GPmain.HasBorder := FALSE;
    Result.GPmain.TabStop := FALSE;
      Result.BtnSave := NewBitBtn( Result.GPmain, 'Save File', [ bboImageList ], glyphLeft, Form1.ImageList16.Handle, 4 ).SetPosition( 311, 58 ).SetSize( 90, 27 ).LikeSpeedButton.LikeSpeedButton;
      Result.BtnSave.Transparent := True;
      Result.BtnSave.OnClick := Result.BtnSaveClick;
      Result.BtnSave.OnMouseMove := Result.BtnSaveMouseMove;
      Result.BtnSave.OnMouseLeave := Result.BtnSaveMouseLeave;
      Result.BtnColor.OnClick := Result.BtnColorClick;
    Result.RBhtml.CreateWindow;
    Result.RBhtml.SetRadioChecked;
    Result.RBFmt2.CreateWindow;
    Result.RBFmt2.SetRadioChecked;
      Result.BtnTextColor.OnClick := Result.BtnColorClick;
    Result.Form.CreateWindow;

end;

