\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key g \major

		R1*4  |
%% 5
		d' 4 d' 8 d' 4 d' 4.  |
		e' 4 e' 8 e' 4 e' 4.  |
		d' 4 d' c' c'  |
		d' 1  |
		d' 4 d' 8 d' 4 d' 4.  |
%% 10
		e' 4 e' 8 e' 4 e' 4.  |
		d' 4 d' c' c'  |
		d' 1  |
		g' 4 fis' 8 g' 2 fis' 8  |
		g' 4 fis' 8 d' 4 d' r8  |
%% 15
		g' 4 fis' 8 g' 2 fis' 8  |
		g' 4 fis' 8 d' 4 d' r8  |
		e' 4 e' 8 e' 2 e' 8  |
		fis' 4 g' 8 fis' 4 fis' r8  |
		e' 4 e' fis' g'  |
%% 20
		fis' 1 ~  |
		fis' 2. r4  |
		d' 4 d' 8 d' 4 d' 4.  |
		e' 4 e' 8 e' 4 e' 4.  |
		d' 4 d' c' c'  |
%% 25
		d' 1  |
		d' 4 d' 8 d' 4 d' 4.  |
		e' 4 e' 8 e' 4 e' 4.  |
		d' 4 d' c' c'  |
		d' 1  |
%% 30
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-mezzo" {
		San -- to, san -- to, en el cie -- lo,
		san -- "to es" el Se -- ñor.
		San -- to, san -- to, en el cie -- lo,
		san -- "to es" el Se -- ñor.

		Glo -- "ria a" Dios en las al -- tu -- ras,
		glo -- "ria a" Dios a -- "quí en" la Tie -- rra,
		paz "y a" -- mor en -- tre los hom -- bres,
		Glo -- ria, glo -- "ria a" Dios.

		San -- to, san -- to, en el cie -- lo,
		san -- "to es" el Se -- ñor.
		San -- to, san -- to, en el cie -- lo,
		san -- "to es" el Se -- ñor.
	}
>>
