{ KOL MCK } // Do not remove this line!
const Col1 = 0;
const Col2 = 1;
const Col3 = 2;

procedure NewFCities( var Result: PFCities; AParent: PControl );
begin

  {$IFDEF KOLCLASSES}
  Result := PFCities.Create;
  {$ELSE OBJECTS}
  New( Result, Create );
  {$ENDIF KOL CLASSES/OBJECTS}
  Result.Form := NewForm( AParent, 'FCities' ).SetPosition( 337, 134 );
  Result.Form.Add2AutoFree( Result );
    Result.Form.HasBorder := False;
    Result.Form.SetClientSize( 584, 393);
    Result.Form.StayOnTop := True;
    Result.Form.Font.FontHeight := 16;
    Result.Form.Font.FontName := 'Arial';
    Result.Form.Border := 0;
      Result.Form.OnClose := Result.KOLForm1Close;
      Result.Form.OnShow := Result.KOLForm1Show;
      Result.Form.OnPaint := Result.KOLForm1Paint;
      Result.Form.OnDestroy := Result.KOLForm1Destroy;
    Result.TopPanel := NewPanel( Result.Form, esNone ).SetAlign ( caTop ).SetSize( 0, 29 ).SetBorder( 2);
      Result.LTitle := NewLabel( Result.TopPanel, 'Area' ).SetPosition( 11, 6 ).AutoSize( TRUE );
    Result.LTitle.Font.FontStyle := [ fsBold ];
      Result.LTitle.Transparent := True;
      Result.ImgIcon := NewImageShow( Result.TopPanel, Form1.ImageList16, 7 ).SetPosition( 559, 7 ).SetSize( 16, 16 );
      Result.ImgIcon.CurIndex := 7; {SetupFirst}
    Result.MainPanel := NewPanel( Result.Form, esNone ).SetPosition( 3, 32 ).SetSize( 580, 369 ).SetBorder( 0);
      Result.Panel3 := NewPanel( Result.MainPanel, esNone ).SetAlign ( caTop ).SetSize( 0, 31 ).SetBorder( 2);
        Result.LblLoad := NewLabel( Result.Panel3, 'Load' ).SetPosition( 8, 8 ).AutoSize( TRUE );
        Result.LblLoad.Transparent := True;
        Result.CBPlace := NewComboBox( Result.Panel3, [ coReadOnly, coNoIntegralHeight ] ).SetPosition( 83, 5 ).SetSize( 198, 0 );
    Result.CBPlace.Color := TColor(clWindow);
        Result.Button2 := NewButton( Result.Panel3, 'Use Selected Data' ).SetPosition( 445, 5 ).SetSize( 129, 0 );
        Result.Button2.Style := Result.Button2.Style or BS_FLAT;
      Result.ListBox1 := NewListBox( Result.MainPanel, [ loNoIntegralHeight ] ).SetAlign ( caLeft ).SetSize( 143, 0 ).SetBorder( 2);
    Result.ListBox1.Color := TColor(clWindow);
      Result.Splitter1 := NewSplitter( Result.MainPanel, 0, 0 ).SetAlign ( caLeft ).SetBorder( 2);
      Result.LV1 := NewListView( Result.MainPanel, lvsDetail, [ lvoGridLines, lvoRowSelect, lvoFlatsb ], nil, nil, nil ).SetAlign ( caClient ).SetBorder( 2);
    Result.LV1.Color := TColor(clWindow);
      Result.LV1.LVColAdd( 'Place Name', taLeft, 200);
      Result.LV1.LVColAdd( 'Latitude', taLeft, 80);
      Result.LV1.LVColAdd( 'Longitude', taLeft, 80);
      Result.PanelInfo := NewPanel( Result.MainPanel, esLowered ).SetAlign ( caBottom ).SetSize( 0, 18 ).SetBorder( 2);
      Result.LTitle.OnMouseDown := Result.TopPanelMouseDown;
      Result.ImgIcon.OnMouseDown := Result.ImgIconMouseDown;
      Result.ImgIcon.OnMouseMove := Result.ImgIconMouseMove;
      Result.ImgIcon.OnMouseUp := Result.ImgIconMouseUp;
      Result.ImgIcon.OnMouseLeave := Result.ImgIconMouseLeave;
      Result.Button2.OnClick := Result.Button2Click;
      Result.TopPanel.OnMouseDown := Result.TopPanelMouseDown;
      Result.TopPanel.OnPaint := Result.TopPanelPaint;
      Result.ListBox1.OnClick := Result.ListBox1Click;
      Result.ListBox1.OnKeyDown := Result.ListBox1KeyDown;
      Result.ListBox1.OnSelChange := Result.ListBox1SelChange;
    {$IFDEF OVERRIDE_SCROLLBARS}
    OverrideScrollbars( Result.ListBox1);
    {$ENDIF OVERRIDE_SCROLLBARS}
      Result.LV1.OnColumnClick := Result.LV1ColumnClick;
    {$IFDEF OVERRIDE_SCROLLBARS}
    OverrideScrollbars( Result.LV1);
    {$ENDIF OVERRIDE_SCROLLBARS}
      Result.CBPlace.OnChange := Result.CBPlaceChange;
    Result.Form.CenterOnParent;
    Result.KOLForm1FormCreate( Result );

end;

