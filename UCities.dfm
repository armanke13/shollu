object FCities: TFCities
  Left = 337
  Top = 134
  Width = 600
  Height = 431
  HorzScrollBar.Visible = False
  VertScrollBar.Visible = False
  Caption = 'FCities'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  PixelsPerInch = 96
  TextHeight = 13
  object TopPanel: TKOLPanel
    Tag = 0
    Left = 0
    Top = 0
    Width = 584
    Height = 29
    HelpContext = 0
    IgnoreDefault = False
    AnchorLeft = False
    AnchorTop = False
    AnchorRight = False
    AnchorBottom = False
    AcceptChildren = True
    MouseTransparent = False
    TabOrder = 0
    MinWidth = 0
    MinHeight = 0
    MaxWidth = 0
    MaxHeight = 0
    PlaceDown = False
    PlaceRight = False
    PlaceUnder = False
    Visible = True
    Enabled = True
    DoubleBuffered = False
    Align = caTop
    CenterOnParent = False
    Ctl3D = True
    Color = clBtnFace
    parentColor = True
    Font.Color = clWindowText
    Font.FontStyle = []
    Font.FontHeight = 16
    Font.FontWidth = 0
    Font.FontWeight = 0
    Font.FontName = 'Arial'
    Font.FontOrientation = 0
    Font.FontCharset = 1
    Font.FontPitch = fpDefault
    Font.FontQuality = fqDefault
    parentFont = True
    OnMouseDown = TopPanelMouseDown
    OnPaint = TopPanelPaint
    EraseBackground = False
    Localizy = loForm
    Transparent = False
    TextAlign = taLeft
    edgeStyle = esNone
    VerticalAlign = vaTop
    Border = 2
    MarginTop = 0
    MarginBottom = 0
    MarginLeft = 0
    MarginRight = 0
    Brush.Color = clBtnFace
    Brush.BrushStyle = bsSolid
    ShowAccelChar = False
    object LTitle: TKOLLabel
      Tag = 0
      Left = 11
      Top = 6
      Width = 31
      Height = 17
      HelpContext = 0
      IgnoreDefault = False
      AnchorLeft = False
      AnchorTop = False
      AnchorRight = False
      AnchorBottom = False
      AcceptChildren = False
      MouseTransparent = False
      TabOrder = -1
      MinWidth = 0
      MinHeight = 0
      MaxWidth = 0
      MaxHeight = 0
      PlaceDown = False
      PlaceRight = False
      PlaceUnder = False
      Visible = True
      Enabled = True
      DoubleBuffered = False
      Align = caNone
      CenterOnParent = False
      Caption = 'Area'
      Ctl3D = True
      Color = clBtnFace
      parentColor = True
      Font.Color = clWindowText
      Font.FontStyle = [fsBold]
      Font.FontHeight = 16
      Font.FontWidth = 0
      Font.FontWeight = 0
      Font.FontName = 'Arial'
      Font.FontOrientation = 0
      Font.FontCharset = 1
      Font.FontPitch = fpDefault
      Font.FontQuality = fqDefault
      parentFont = False
      OnMouseDown = TopPanelMouseDown
      EraseBackground = False
      Localizy = loForm
      Transparent = True
      TextAlign = taLeft
      VerticalAlign = vaTop
      wordWrap = False
      autoSize = True
      Brush.Color = clBtnFace
      Brush.BrushStyle = bsSolid
      ShowAccelChar = False
      windowed = True
    end
    object ImgIcon: TKOLImageShow
      Tag = 0
      Left = 559
      Top = 7
      Width = 16
      Height = 16
      Hint = 'Close'
      HelpContext = 0
      IgnoreDefault = False
      AnchorLeft = False
      AnchorTop = False
      AnchorRight = False
      AnchorBottom = False
      AcceptChildren = False
      MouseTransparent = False
      TabOrder = 0
      MinWidth = 0
      MinHeight = 0
      MaxWidth = 0
      MaxHeight = 0
      PlaceDown = False
      PlaceRight = False
      PlaceUnder = False
      Visible = True
      Enabled = True
      DoubleBuffered = False
      Align = caNone
      CenterOnParent = False
      Ctl3D = True
      Color = clBtnFace
      parentColor = True
      Font.Color = clWindowText
      Font.FontStyle = []
      Font.FontHeight = 16
      Font.FontWidth = 0
      Font.FontWeight = 0
      Font.FontName = 'Arial'
      Font.FontOrientation = 0
      Font.FontCharset = 1
      Font.FontPitch = fpDefault
      Font.FontQuality = fqDefault
      parentFont = True
      OnMouseDown = ImgIconMouseDown
      OnMouseMove = ImgIconMouseMove
      OnMouseUp = ImgIconMouseUp
      OnMouseLeave = ImgIconMouseLeave
      EraseBackground = False
      Localizy = loForm
      ImageListNormal = Form1.ImageList16
      CurIndex = 7
      Transparent = False
      HasBorder = False
      autoSize = False
      Brush.Color = clBtnFace
      Brush.BrushStyle = bsSolid
      MarginLeft = 0
      MarginTop = 0
    end
  end
  object MainPanel: TKOLPanel
    Tag = 0
    Left = 3
    Top = 32
    Width = 580
    Height = 369
    HelpContext = 0
    IgnoreDefault = False
    AnchorLeft = False
    AnchorTop = False
    AnchorRight = False
    AnchorBottom = False
    AcceptChildren = True
    MouseTransparent = False
    TabOrder = 1
    MinWidth = 0
    MinHeight = 0
    MaxWidth = 0
    MaxHeight = 0
    PlaceDown = False
    PlaceRight = False
    PlaceUnder = False
    Visible = True
    Enabled = True
    DoubleBuffered = False
    Align = caNone
    CenterOnParent = False
    Ctl3D = True
    Color = clBtnFace
    parentColor = True
    Font.Color = clWindowText
    Font.FontStyle = []
    Font.FontHeight = 16
    Font.FontWidth = 0
    Font.FontWeight = 0
    Font.FontName = 'Arial'
    Font.FontOrientation = 0
    Font.FontCharset = 1
    Font.FontPitch = fpDefault
    Font.FontQuality = fqDefault
    parentFont = True
    EraseBackground = False
    Localizy = loForm
    Transparent = False
    TextAlign = taLeft
    edgeStyle = esNone
    VerticalAlign = vaTop
    Border = 0
    MarginTop = 0
    MarginBottom = 0
    MarginLeft = 0
    MarginRight = 0
    Brush.Color = clBtnFace
    Brush.BrushStyle = bsSolid
    ShowAccelChar = False
    object Panel3: TKOLPanel
      Tag = 0
      Left = 0
      Top = 0
      Width = 580
      Height = 31
      HelpContext = 0
      IgnoreDefault = False
      AnchorLeft = False
      AnchorTop = False
      AnchorRight = False
      AnchorBottom = False
      AcceptChildren = True
      MouseTransparent = False
      TabOrder = 0
      MinWidth = 0
      MinHeight = 0
      MaxWidth = 0
      MaxHeight = 0
      PlaceDown = False
      PlaceRight = False
      PlaceUnder = False
      Visible = True
      Enabled = True
      DoubleBuffered = False
      Align = caTop
      CenterOnParent = False
      Ctl3D = True
      Color = clBtnFace
      parentColor = True
      Font.Color = clWindowText
      Font.FontStyle = []
      Font.FontHeight = 16
      Font.FontWidth = 0
      Font.FontWeight = 0
      Font.FontName = 'Arial'
      Font.FontOrientation = 0
      Font.FontCharset = 1
      Font.FontPitch = fpDefault
      Font.FontQuality = fqDefault
      parentFont = True
      EraseBackground = False
      Localizy = loForm
      Transparent = False
      TextAlign = taLeft
      edgeStyle = esNone
      VerticalAlign = vaTop
      Border = 2
      MarginTop = 0
      MarginBottom = 0
      MarginLeft = 0
      MarginRight = 0
      Brush.Color = clBtnFace
      Brush.BrushStyle = bsSolid
      ShowAccelChar = False
      object Button2: TKOLButton
        Tag = 0
        Left = 445
        Top = 5
        Width = 129
        Height = 22
        HelpContext = 0
        IgnoreDefault = True
        AnchorLeft = False
        AnchorTop = False
        AnchorRight = False
        AnchorBottom = False
        AcceptChildren = False
        MouseTransparent = False
        TabOrder = 3
        MinWidth = 0
        MinHeight = 0
        MaxWidth = 0
        MaxHeight = 0
        PlaceDown = False
        PlaceRight = False
        PlaceUnder = False
        Visible = True
        Enabled = True
        DoubleBuffered = False
        Align = caNone
        CenterOnParent = False
        Caption = 'Use Selected Data'
        Ctl3D = True
        Color = clBtnFace
        parentColor = False
        Font.Color = clWindowText
        Font.FontStyle = []
        Font.FontHeight = 16
        Font.FontWidth = 0
        Font.FontWeight = 0
        Font.FontName = 'Arial'
        Font.FontOrientation = 0
        Font.FontCharset = 1
        Font.FontPitch = fpDefault
        Font.FontQuality = fqDefault
        parentFont = True
        OnClick = Button2Click
        EraseBackground = False
        Localizy = loForm
        Border = 2
        TextAlign = taCenter
        VerticalAlign = vaCenter
        TabStop = True
        autoSize = False
        DefaultBtn = False
        CancelBtn = False
        windowed = True
        Flat = True
        WordWrap = False
        LikeSpeedButton = False
      end
      object CBPlace: TKOLComboBox
        Tag = 0
        Left = 83
        Top = 5
        Width = 198
        Height = 22
        HelpContext = 0
        IgnoreDefault = False
        AnchorLeft = False
        AnchorTop = False
        AnchorRight = False
        AnchorBottom = False
        AcceptChildren = False
        MouseTransparent = False
        TabOrder = 0
        MinWidth = 0
        MinHeight = 0
        MaxWidth = 0
        MaxHeight = 0
        PlaceDown = False
        PlaceRight = False
        PlaceUnder = False
        Visible = True
        Enabled = True
        DoubleBuffered = False
        Align = caNone
        CenterOnParent = False
        Ctl3D = True
        Color = clWindow
        parentColor = False
        Font.Color = clWindowText
        Font.FontStyle = []
        Font.FontHeight = 16
        Font.FontWidth = 0
        Font.FontWeight = 0
        Font.FontName = 'Arial'
        Font.FontOrientation = 0
        Font.FontCharset = 1
        Font.FontPitch = fpDefault
        Font.FontQuality = fqDefault
        parentFont = True
        EraseBackground = False
        Localizy = loForm
        Transparent = False
        TabStop = True
        Options = [coReadOnly, coNoIntegralHeight]
        OnChange = CBPlaceChange
        CurIndex = 0
        DroppedWidth = 0
        autoSize = False
        Brush.Color = clWindow
        Brush.BrushStyle = bsSolid
        CBItemHeight = 0
        AlwaysAssignItems = False
      end
      object LblLoad: TKOLLabel
        Tag = 0
        Left = 8
        Top = 8
        Width = 29
        Height = 17
        HelpContext = 0
        IgnoreDefault = False
        AnchorLeft = False
        AnchorTop = False
        AnchorRight = False
        AnchorBottom = False
        AcceptChildren = False
        MouseTransparent = False
        TabOrder = -1
        MinWidth = 0
        MinHeight = 0
        MaxWidth = 0
        MaxHeight = 0
        PlaceDown = False
        PlaceRight = False
        PlaceUnder = False
        Visible = True
        Enabled = True
        DoubleBuffered = False
        Align = caNone
        CenterOnParent = False
        Caption = 'Load'
        Ctl3D = True
        Color = clBtnFace
        parentColor = True
        Font.Color = clWindowText
        Font.FontStyle = []
        Font.FontHeight = 16
        Font.FontWidth = 0
        Font.FontWeight = 0
        Font.FontName = 'Arial'
        Font.FontOrientation = 0
        Font.FontCharset = 1
        Font.FontPitch = fpDefault
        Font.FontQuality = fqDefault
        parentFont = True
        EraseBackground = False
        Localizy = loForm
        Transparent = True
        TextAlign = taLeft
        VerticalAlign = vaTop
        wordWrap = False
        autoSize = True
        Brush.Color = clBtnFace
        Brush.BrushStyle = bsSolid
        ShowAccelChar = False
        windowed = True
      end
    end
    object ListBox1: TKOLListBox
      Tag = 0
      Left = 0
      Top = 31
      Width = 143
      Height = 320
      HelpContext = 0
      IgnoreDefault = False
      AnchorLeft = False
      AnchorTop = False
      AnchorRight = False
      AnchorBottom = False
      AcceptChildren = False
      MouseTransparent = False
      TabOrder = 1
      MinWidth = 0
      MinHeight = 0
      MaxWidth = 0
      MaxHeight = 0
      PlaceDown = False
      PlaceRight = False
      PlaceUnder = False
      Visible = True
      Enabled = True
      DoubleBuffered = False
      Align = caLeft
      CenterOnParent = False
      Ctl3D = True
      Color = clWindow
      parentColor = False
      Font.Color = clWindowText
      Font.FontStyle = []
      Font.FontHeight = 16
      Font.FontWidth = 0
      Font.FontWeight = 0
      Font.FontName = 'Arial'
      Font.FontOrientation = 0
      Font.FontCharset = 1
      Font.FontPitch = fpDefault
      Font.FontQuality = fqDefault
      parentFont = True
      OnClick = ListBox1Click
      EraseBackground = False
      Localizy = loForm
      Transparent = False
      TabStop = True
      Options = [loNoIntegralHeight]
      OnSelChange = ListBox1SelChange
      CurIndex = 0
      OnKeyDown = ListBox1KeyDown
      Count = 0
      HasBorder = True
      Brush.Color = clWindow
      Brush.BrushStyle = bsSolid
      LBItemHeight = 0
      OverrideScrollbars = True
      AlwaysAssignItems = False
    end
    object Splitter1: TKOLSplitter
      Tag = 0
      Left = 143
      Top = 31
      Width = 4
      Height = 320
      HelpContext = 0
      IgnoreDefault = False
      AnchorLeft = False
      AnchorTop = False
      AnchorRight = False
      AnchorBottom = False
      AcceptChildren = False
      MouseTransparent = False
      TabOrder = 2
      MinWidth = 0
      MinHeight = 0
      MaxWidth = 0
      MaxHeight = 0
      PlaceDown = False
      PlaceRight = False
      PlaceUnder = False
      Visible = True
      Enabled = True
      DoubleBuffered = False
      Align = caLeft
      CenterOnParent = False
      Ctl3D = True
      Color = clBtnFace
      parentColor = True
      Font.Color = clWindowText
      Font.FontStyle = []
      Font.FontHeight = 16
      Font.FontWidth = 0
      Font.FontWeight = 0
      Font.FontName = 'Arial'
      Font.FontOrientation = 0
      Font.FontCharset = 1
      Font.FontPitch = fpDefault
      Font.FontQuality = fqDefault
      parentFont = True
      EraseBackground = False
      Localizy = loForm
      Transparent = False
      MinSizePrev = 0
      MinSizeNext = 0
      edgeStyle = esLowered
      Brush.Color = clBtnFace
      Brush.BrushStyle = bsSolid
    end
    object LV1: TKOLListView
      Tag = 0
      Left = 147
      Top = 31
      Width = 433
      Height = 320
      HelpContext = 0
      IgnoreDefault = False
      AnchorLeft = False
      AnchorTop = False
      AnchorRight = False
      AnchorBottom = False
      AcceptChildren = False
      MouseTransparent = False
      TabOrder = 3
      MinWidth = 0
      MinHeight = 0
      MaxWidth = 0
      MaxHeight = 0
      PlaceDown = False
      PlaceRight = False
      PlaceUnder = False
      Visible = True
      Enabled = True
      DoubleBuffered = False
      Align = caClient
      CenterOnParent = False
      Ctl3D = True
      Color = clWindow
      parentColor = False
      Font.Color = clWindowText
      Font.FontStyle = []
      Font.FontHeight = 16
      Font.FontWidth = 0
      Font.FontWeight = 0
      Font.FontName = 'Arial'
      Font.FontOrientation = 0
      Font.FontCharset = 1
      Font.FontPitch = fpDefault
      Font.FontQuality = fqDefault
      parentFont = True
      EraseBackground = False
      Localizy = loForm
      Transparent = False
      Style = lvsDetail
      Options = [lvoGridLines, lvoRowSelect, lvoFlatsb]
      LVCount = 0
      LVTextBkColor = clWindow
      LVBkColor = clWindow
      LVItemHeight = 0
      OnColumnClick = LV1ColumnClick
      HasBorder = True
      TabStop = True
      generateConstants = True
      Brush.Color = clWindow
      Brush.BrushStyle = bsSolid
      OverrideScrollbars = True
      ColCount = 3
      Column0Name = 'Col1'
      Column0Caption = 'Place Name'
      Column0TextAlign = 0
      Column0Width = 200
      Column0WidthType = 1
      Column0LVColImage = -1
      Column1Name = 'Col2'
      Column1Caption = 'Latitude'
      Column1TextAlign = 0
      Column1Width = 80
      Column1WidthType = 0
      Column1LVColImage = -1
      Column2Name = 'Col3'
      Column2Caption = 'Longitude'
      Column2TextAlign = 0
      Column2Width = 80
      Column2WidthType = 0
      Column2LVColImage = -1
    end
    object PanelInfo: TKOLPanel
      Tag = 0
      Left = 0
      Top = 351
      Width = 580
      Height = 18
      HelpContext = 0
      IgnoreDefault = False
      AnchorLeft = False
      AnchorTop = False
      AnchorRight = False
      AnchorBottom = False
      AcceptChildren = True
      MouseTransparent = False
      TabOrder = 4
      MinWidth = 0
      MinHeight = 0
      MaxWidth = 0
      MaxHeight = 0
      PlaceDown = False
      PlaceRight = False
      PlaceUnder = False
      Visible = True
      Enabled = True
      DoubleBuffered = False
      Align = caBottom
      CenterOnParent = False
      Ctl3D = True
      Color = clBtnFace
      parentColor = True
      Font.Color = clWindowText
      Font.FontStyle = []
      Font.FontHeight = 16
      Font.FontWidth = 0
      Font.FontWeight = 0
      Font.FontName = 'Arial'
      Font.FontOrientation = 0
      Font.FontCharset = 1
      Font.FontPitch = fpDefault
      Font.FontQuality = fqDefault
      parentFont = True
      EraseBackground = False
      Localizy = loForm
      Transparent = False
      TextAlign = taLeft
      edgeStyle = esLowered
      VerticalAlign = vaTop
      Border = 2
      MarginTop = 0
      MarginBottom = 0
      MarginLeft = 0
      MarginRight = 0
      Brush.Color = clBtnFace
      Brush.BrushStyle = bsSolid
      ShowAccelChar = False
    end
  end
  object KOLForm1: TKOLForm
    Tag = 0
    ForceIcon16x16 = False
    Caption = 'FCities'
    Visible = True
    OnDestroy = KOLForm1Destroy
    OnClose = KOLForm1Close
    AllBtnReturnClick = False
    Tabulate = False
    TabulateEx = False
    UnitSourcePath = 'D:\Documents\Ebta\Project\Software\Shollu3\src\'
    Locked = False
    formUnit = 'UCities'
    formMain = False
    Enabled = True
    defaultSize = False
    defaultPosition = False
    MinWidth = 0
    MinHeight = 0
    MaxWidth = 0
    MaxHeight = 0
    HasBorder = False
    HasCaption = True
    StayOnTop = True
    CanResize = True
    CenterOnScreen = True
    Ctl3D = True
    WindowState = wsNormal
    minimizeIcon = True
    maximizeIcon = True
    closeIcon = True
    helpContextIcon = False
    borderStyle = fbsNone
    HelpContext = 0
    Color = clBtnFace
    Font.Color = clWindowText
    Font.FontStyle = []
    Font.FontHeight = 16
    Font.FontWidth = 0
    Font.FontWeight = 0
    Font.FontName = 'Arial'
    Font.FontOrientation = 0
    Font.FontCharset = 1
    Font.FontPitch = fpDefault
    Font.FontQuality = fqDefault
    FontDefault = False
    Brush.Color = clBtnFace
    Brush.BrushStyle = bsSolid
    DoubleBuffered = False
    PreventResizeFlicks = False
    Transparent = False
    AlphaBlend = 255
    Border = 0
    MarginLeft = 0
    MarginRight = 0
    MarginTop = 0
    MarginBottom = 0
    MinimizeNormalAnimated = False
    RestoreNormalMaximized = False
    zOrderChildren = False
    statusSizeGrip = True
    Localizy = False
    ShowHint = False
    KeyPreview = False
    OnShow = KOLForm1Show
    OnFormCreate = KOLForm1FormCreate
    OnPaint = KOLForm1Paint
    EraseBackground = False
    supportMnemonics = False
    FormCompact = False
    GenerateCtlNames = False
    Unicode = False
    OverrideScrollbars = False
    AssignTabOrders = False
    Left = 288
  end
end
